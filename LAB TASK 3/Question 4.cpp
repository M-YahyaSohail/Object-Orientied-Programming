#include <iostream>
#include <string>

class CricketPlayer
{
private:
    std::string name;
    int jerseyNumber;
    double battingAverage;
    int matchesPlayed;

public:
    CricketPlayer(std::string name, int jerseyNumber, double battingAverage)
    {
        this->name = name;
        this->jerseyNumber = jerseyNumber;
        this->battingAverage = battingAverage;
        this->matchesPlayed = 1;
    }

    void improveAverage(double improvement)
    {
        this->battingAverage += improvement;
    }

    void playMatch(int runsScored)
    {
        double totalRuns = (this->battingAverage * this->matchesPlayed) + runsScored;
        this->matchesPlayed++;
        this->battingAverage = totalRuns / this->matchesPlayed;
    }

    void displayPlayerStats() const
    {
        std::cout << "\n========================================" << std::endl;
        std::cout << "PLAYER PROFILE: " << this->name << " (" << this->jerseyNumber << ")" << std::endl;
        
        std::cout.precision(2);
        
        std::cout << "Matches Played:  " << this->matchesPlayed << std::endl;
        std::cout << "Batting Average: " << std::fixed << this->battingAverage << std::endl;

        if (this->battingAverage > 50.0)
        {
            std::cout << "Commentary: This batting average is more consistent than Karachi's weather!" << std::endl;
        }
        else
        {
            std::cout << "Commentary: Needs more time in the nets." << std::endl;
        }
        std::cout << "========================================\n" << std::endl;
    }
};

int main()
{
    CricketPlayer player1("Babar Azam", 56, 48.5);
    CricketPlayer player2("Muhammad Rizwan", 16, 42.1);
    CricketPlayer player3("Saim Ayub", 77, 25.0);

    player1.playMatch(102);
    player1.improveAverage(2.0);
    player1.displayPlayerStats();

    player2.playMatch(75);
    player2.displayPlayerStats();

    player3.playMatch(0);
    player3.displayPlayerStats();

    return 0;
}
