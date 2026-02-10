#include <iostream>
#include <string>

class FootballPlayer {
private:
    std::string playerName;
    std::string position;
    int goalCount;

public:
    FootballPlayer() 
        : playerName("Unknown Player"), position("Benchwarmer"), goalCount(0) {}

    FootballPlayer(std::string name, std::string pos, int goals) 
        : playerName(name), position(pos), goalCount(goals) {}

    FootballPlayer(std::string name, std::string pos = "Midfielder", int goals = 10, bool flag = true) 
        : playerName(name), position(pos), goalCount(goals) {}

    FootballPlayer(const FootballPlayer& other) {
        playerName = other.playerName;
        position = other.position;
        goalCount = other.goalCount;
    }

    void addGoal() {
        goalCount++;
    }

    void displayProfile() const {
        std::cout << "Name: " << playerName << " | Position: " << position 
                  << " | Goals: " << goalCount << std::endl;
    }
};

int main() {
    FootballPlayer benchwarmer;
    benchwarmer.displayProfile();

    FootballPlayer goat("Lionel Messi", "Forward", 821);
    goat.addGoal();
    goat.displayProfile();

    FootballPlayer messiClone = goat;
    messiClone.displayProfile();

    FootballPlayer mid("Kevin De Bruyne");
    mid.displayProfile();

    return 0;
}
