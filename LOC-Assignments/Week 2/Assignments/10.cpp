#include <iostream>
using namespace std;

int main() {
    char str[100];
    int alphabets = 0, digits = 0, specialChars = 0;

    cout << "Enter any string: ";
    cin.getline(str, 100);

    for (int i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) {
            alphabets++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else {
            specialChars++;
        }
    }

    cout << "Alphabets: " << alphabets << endl;
    cout << "Digits: " << digits << endl;
    cout << "Special characters: " << specialChars << endl;

    return 0;
}
