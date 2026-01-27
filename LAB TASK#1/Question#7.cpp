#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double units, baseBill = 0, totalBill = 0;

    cout << "Enter total units consumed: ";
    if (!(cin >> units) || units < 0) {
        cout << "Invalid input. Units must be non-negative." << endl;
        return 1;
    }

    if (units <= 50) {
        baseBill = units * 0.50;
    } else if (units <= 150) {
        baseBill = (50 * 0.50) + ((units - 50) * 0.75);
    } else if (units <= 250) {
        baseBill = (50 * 0.50) + (100 * 0.75) + ((units - 150) * 1.20);
    } else {
        baseBill = (50 * 0.50) + (100 * 0.75) + (100 * 1.20) + ((units - 250) * 1.50);
    }

    totalBill = baseBill + (baseBill * 0.20);

    cout << fixed << setprecision(2);
    cout << "Base Bill: Rs. " << baseBill << endl;
    cout << "Surcharge (20%): Rs. " << baseBill * 0.20 << endl;
    cout << "Total Electricity Bill: Rs. " << totalBill << endl;

    return 0;
}
