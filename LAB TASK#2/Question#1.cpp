#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Book {
    string title, author, genre;
    int year;
};

void manageLibrary() {
    vector<Book> library;
    int choice;
    while (true) {
        cin >> choice;
        if (choice == 1) {
            Book b;
            cin >> b.title >> b.author >> b.year >> b.genre;
            library.push_back(b);
        } else if (choice == 2) {
            string query;
            cin >> query;
            for (int i = 0; i < library.size(); i++) {
                if (library[i].title == query || library[i].author == query) {
                    cout << library[i].title << " " << library[i].author << endl;
                }
            }
        } else if (choice == 3) {
            int index;
            cin >> index;
            if (index < library.size()) cin >> library[index].title;
        } else break;
    }
}
