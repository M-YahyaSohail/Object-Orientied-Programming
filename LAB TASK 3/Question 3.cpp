#include<iostream>
#include<string>

using namespace std;

class SmartDevice {
public:
    string name;
    string type;
    bool status;

    SmartDevice(string n, string t, bool s) {
        name = n;
        type = t;
        status = s;
    }

    ~SmartDevice() {
        cout << name << " (" << type << ") is powering down for the last time. Farewell, user..." << endl;
    }

    void display() {
        cout << "Device: " << name << " | Type: " << type << " | Status: " << (status ? "ON" : "OFF") << endl;
    }
};

int main(void) {
    string n1, t1;
    bool s1;
    cin >> n1 >> t1 >> s1;
    SmartDevice* d1 = new SmartDevice(n1, t1, s1);

    string n2, t2;
    bool s2;
    cin >> n2 >> t2 >> s2;
    SmartDevice* d2 = new SmartDevice(n2, t2, s2);

    d1->display();
    d2->display();

    delete d1;
    delete d2;

    return 0;
}
