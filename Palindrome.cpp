#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    cout << "Enter the string: ";
    cin >> str;

    string reversed_str = str;
    int n = reversed_str.length();

    // Reverse the string
    for (int i=(n-1); i>=0; i--) {
        char temp = reversed_str[i];
        reversed_str[i] = reversed_str[n - 1 - i];
        reversed_str[n - 1 - i] = temp;
    }

    // Check if the original string is equal to the reversed string
    if (str == reversed_str) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
