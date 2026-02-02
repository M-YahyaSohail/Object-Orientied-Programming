#include <iostream>
#include <vector>
#include <string>

using namespace std;

class stationaryshop {
private:
    int que = 1;
    int choice;
    double total = 0; 
    int total_items = 0;
    vector<int> quantity;
    vector<string> item_r;
    vector<string> items;
    vector<double> prices;

public:
    void add_items_prices() {
        string name;
        double price;

        cout << "Enter item name: ";
        cin >> name;
        items.push_back(name);

        cout << "Enter item price: ";
        cin >> price;
        prices.push_back(price);
    }

    void list_retrieve() {
        for (int i = 0; i < items.size(); i++) {
            cout << i + 1 << "." << items[i] << "(" << prices[i] << " Rs.)" << endl;
        }
    }

    void edit_item_prices(int ch) {
        if (ch > 0 && ch <= items.size()) {
            cout << "Enter new price for item number " << ch << ": ";
            cin >> prices[ch - 1];
        } else {
            cout << "Invalid item number." << endl;
        }
    }

    void receipt_cal() {
        que = 1; 
        total = 0; 
        total_items = 0;
        quantity.clear(); 
        item_r.clear();

        int qty;
        while (que == 1) {
            cout << "Enter the item number: ";
            cin >> choice;
            cout << "Total quantity of the item: ";
            cin >> qty;

            if (choice > 0 && choice <= items.size()) {
                quantity.push_back(qty);
                item_r.push_back(items[choice - 1]);
                
                
                total += prices[choice - 1] * quantity[total_items];
                total_items += 1;
            } else {
                cout << "Item not found!" << endl;
            }

            cout << "Do you want to add another item ('1' for Yes and '0' for No): ";
            cin >> que;
        }
        cout << endl << "--------------------------------------------" << endl;
        receipt_gen(item_r, quantity, total_items, total);
    }

    void receipt_gen(vector<string> item_r, vector<int> quantity, int total_items, double total) {
        for (int i = 0; i < total_items; i++) { 
            cout << i + 1 << ". " << item_r[i] << " x" << quantity[i] << endl;
        }
        cout << "Total Bill: " << total << " Rs." << endl;
    }
};

int main(void) {
    stationaryshop obj1;
    bool running = true; 
    
    do {
        cout << "\n1. Add items\n2. Retrieve list\n3. Edit price\n4. Make bill\n5. Exit\nChoice: ";
        int ch;
        cin >> ch;

        switch (ch) {
            case 1:
                obj1.add_items_prices();
                break;
            case 2:
                obj1.list_retrieve();
                break;
            case 3:
                int choice;
                cout << "Enter item number: ";
                cin >> choice;
                obj1.edit_item_prices(choice);
                break;
            case 4:
                obj1.receipt_cal();
                break;
            case 5:
                running = false; 
                break;
            default:
                cout << "Invalid choice." << endl;
        }
    } while (running);

    return 0;
}
