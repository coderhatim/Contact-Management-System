#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void menu();

void search() {
    string name;
    cout << "Enter name: ";
    cin >> name;
    
    ifstream contact("contact.txt");
    if (!contact) {
        cout << "Error opening file or file does not exist!" << endl;
        return;
    }

    bool found = false;
    string line;
    while (getline(contact, line)) {
        size_t pos = line.find(name + " :");
        if (pos != string::npos) {  // Ensure exact name match before ":"
            cout << "Contact Found: " << line << endl;
            found = true;
            break;
        }
    }
    contact.close();

    if (!found) {
        cout << "Contact not found." << endl;
    }
}

void add() {
    string name, number;
    cout << "Enter name: ";
    cin >> name;

    ifstream contact("contact.txt");
    string line;
    bool exists = false;
    int index = 1;

    while (getline(contact, line)) {
        size_t pos = line.find(name + " :");
        if (pos != string::npos) {  // Ensure exact name match before ":"
            exists = true;
            break;
        }
        index++;
    }
    contact.close();

    if (exists) {
        cout << "Contact already exists!" << endl;
        return;
    }

    cout << "Enter number: ";
    while (true) {
        cin >> number;
        if (number.length() != 10) {
            cout << "Invalid number! Enter 10 digit number: ";
        } else {
            break;
        }
    }   

    ofstream contact_out("contact.txt", ios::app);
    if (!contact_out) {
        cout << "Error opening file!" << endl;
        return;
    }

    contact_out << index << ") " << name << " : " << number << endl;
    cout << "Contact added successfully!" << endl;
    contact_out.close();
}

void menu() {
    int choice;
    while (true) {
        cout << "\n1. Add Contact\n2. Search Contact\n3. Exit\nEnter choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                add();
                break;
            case 2:
                search();
                break;
            case 3:
                cout << "Exiting..." << endl;
                return;
            default:
                cout << "Invalid choice! Try again." << endl;
        }
    }
}

int main() {
    menu();
    return 0;
}
