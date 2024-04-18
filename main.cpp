#include <iostream>
#include <string>

using namespace std;

int main() {
    int age;
    string gender;
    bool attractive, kind;

    cout << "Enter your gender (male/female): ";
    cin >> gender;
    
    cout << "Enter your age: ";
    cin >> age;
    
    cout << "Is your potential partner kind? (1 for yes, 0 for no): ";
    cin >> kind;

    cout << "Is your potential partner attractive? (1 for yes, 0 for no): ";
    cin >> attractive;

    
    if (age >= 18) {
        if (gender == "male") {
            if (attractive || kind) {
                cout << "You've found a potential partner, of age: " << age ;
            } else {
                cout << "we dont have a match for you!";
            }
        
        } else if(gender == "female") {
            if (attractive && kind) {
                cout << "You've found a great partner, of age: " << age;
            } else {
                cout << " dont giveup keep searching for a partner!";
            }
        } else {
            cout << "we dont have that gender!";
        }
    } else {
        cout << "nooo You're too young to choose a partner!";
    }

    return 0;
}
