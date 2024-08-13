#include <iostream>
#include <ctime>
using namespace std;

void generatePass() {
    srand(time(NULL));
    int length;
    cout << "Length? ";
    cin >> length;
    cout << endl;
    string password;
    string characters = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()";
    for (int i = 0; i < length; i++) {
        password += characters[rand() % characters.length()];
    }
    cout << password << endl;
}

int main() {
    generatePass();
}
