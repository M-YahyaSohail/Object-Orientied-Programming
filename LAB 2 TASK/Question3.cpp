#include <iostream>
#include <string>

using namespace std;

class WaterBottle {
private:
    string company;
    string color;
    double capacityL;
    double capacityML;

public:
    void setCompany(string c) { company = c; }
    void setColor(string clr) { color = clr; }
    
    void setCapacity(double ml) {
        capacityML = ml;
        capacityL = ml / 1000.0; 
    }

    string getCompany() { return company; }
    string getColor() { return color; }
    double getCapacityL() { return capacityL; }
    double getCapacityML() { return capacityML; }

    void drinkWater() {
        double amountDrank;
        cout << "How many mL of water have you drank? ";
        cin >> amountDrank;

        if (amountDrank > capacityML) {
            cout << "You can't drink more than what's in the bottle! Emptying bottle..." << endl;
            capacityML = 0;
            capacityL = 0;
        } else {
            capacityML -= amountDrank;
            capacityL = capacityML / 1000.0;
            cout << "Gulp! You drank " << amountDrank << " mL." << endl;
        }
    }
};

int main() {
    WaterBottle myBottle;

    myBottle.setCompany("HydroFlask");
    myBottle.setColor("Ocean Blue");
    myBottle.setCapacity(1000.0);

    cout << "--- Initial Bottle Info ---" << endl;
    cout << "Company:  " << myBottle.getCompany() << endl;
    cout << "Color:    " << myBottle.getColor() << endl;
    cout << "Capacity: " << myBottle.getCapacityML() << " mL (" 
         << myBottle.getCapacityL() << " L)" << endl;

    cout << "\n--- Time to Drink ---" << endl;
    myBottle.drinkWater();

    cout << "\n--- Updated Bottle Info ---" << endl;
    cout << "Remaining Capacity: " << myBottle.getCapacityML() << " mL (" 
         << myBottle.getCapacityL() << " L)" << endl;

    return 0;
}
