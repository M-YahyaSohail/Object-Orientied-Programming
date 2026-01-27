#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Product {
    int id, qty;
    string name;
    double price;
};

vector<Product> store;

void addProduct(int id, string n, double p, int q) {
    store.push_back({id, q, n, p});
}

void displayProduct(int id) {
    for (int i = 0; i < store.size(); i++) {
        if (store[i].id == id) {
            cout << store[i].name << " " << store[i].price << endl;
        }
    }
}

void updateProduct(int id, double p, int q) {
    for (int i = 0; i < store.size(); i++) {
        if (store[i].id == id) {
            store[i].price = p;
            store[i].qty = q;
        }
    }
}

void removeProduct(int id) {
    for (int i = 0; i < store.size(); i++) {
        if (store[i].id == id) {
            store.erase(store.begin() + i);
            break;
        }
    }
}
