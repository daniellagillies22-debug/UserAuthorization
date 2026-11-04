#include <iostream>

#include <string>

using namespace std;

struct User {

    string login;

    string password;

};

int main() {

    User user;

    int choice;

    bool registered = false;

    while (true) {

        cout << «\n1. Authorization» << endl;

        cout << «2. Registration» << endl;

        cout << «Choose: «;

        cin >> choice;

        if (choice == 2) {

            cout << «Enter login: «;

            cin >> user.login;

            cout << «Enter password: «;

            cin >> user.password;

            if (user.password.length() >= 8) {

                registered = true;

                cout << «Registration successful!» << endl;

                cout << «Please login.» << endl;

            } else {

                cout << «Password must contain at least 8 characters!» << endl;

            }

        }

        else if (choice == 1) {

            if (!registered) {

                cout << «Please register first!» << endl;

            } else {

                string login, password;

                cout << «Enter login: «;

                cin >> login;

                cout << «Enter password: «;

                cin >> password;

                if (login == user.login && password == user.password) {

                    cout << «Authorization successful!» << endl;

                } else {

                    cout << «Incorrect login or password!» << endl;

                }

            }

        }

        else {

            cout << «Invalid choice!» << endl;

        }

    }

    return 0;

}
