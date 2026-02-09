#include<iostream>
#include<string>

using namespace std;

class Book {
public:
    string title;
    string author;
    double price;

    Book() {
        title = "Untitled";
        author = "Anonymous";
        price = 0.0;
    }

    Book(string title, string author, double price) {
       this->title = title;
       this->author = author;
       this->price = price;
    }

    Book(const Book &other) {
        title = other.title;
        author = other.author;
        price = other.price;
    }

    Book(string t) {
        title = t;
        author = "Unknown";
        price = 0.0;
    }

    void display() {
        cout << "Title: " << title << " Author: " << author << " Price: " << price << endl;
    }
};

int main(void) {
    Book b1;

    string t1, a1;
    double p1;
    cin >> t1 >> a1 >> p1;
    Book b2(t1, a1, p1);

    Book b3(b2);

    string t2;
    cin >> t2;
    Book b4(t2);

    b1.display();
    b2.display();
    b3.display();
    b4.display();

    return 0;
}
