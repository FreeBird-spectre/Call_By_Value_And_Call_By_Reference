#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

void swap_chars(char& a, char& b) {
    char temp = a;
    a = b;
    b = temp;
}

void ReversingString(string& str) {
    int n = str.length();
    for (int i = 0; i < n / 2; i++) {
        swap_chars(str[i], str[n - i - 1]);
    }
}

int main() {
    string myString;
    
    cout << "Enter a string to reverse: ";
    getline(cin, myString);

    cout << "Original string: " << myString << endl;

    ReversingString(myString);

    cout << "Reversed string: " << myString << endl;
    return 0;
}

Enter a string to reverse: Peace
Original string: Peace
Reversed string: ecaeP


=== Code Execution Successful ===

Enter a string to reverse: Be Happy
Original string: Be Happy
Reversed string: yppaH eB


=== Code Execution Successful ===
