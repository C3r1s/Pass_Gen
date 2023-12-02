#include <iostream>
#include <string>
#include "func.h"

using namespace std;
int main () {
    int pass_length;
    string numbers = "0123456789";
    string small_letters = "abcdefghijklmnoqprstuvwyzx";
    string capital_letters = "ABCDEFGHIJKLMNOQPRSTUYWVZX";
    string symbols = "!@#$^&*?";
    string password;
    bool pass_check;


    cout << "Please enther length of password (no less than 4):  ";
    cin >> pass_length;
    if (pass_length < 4) {
        cout << "!Incorrect length!" << endl;
    } else {
        cout << "!Correct input!" << endl;

        do {password = PasswordGenerator(pass_length, small_letters, capital_letters, numbers, symbols);
        pass_check = PasswordCheck(password, small_letters, capital_letters, numbers, symbols);}
        while (!pass_check);
        cout << "Your pass is: " << password << endl;

    }
}