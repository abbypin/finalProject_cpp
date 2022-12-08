#include <iostream>
#include <string>
using namespace std;

string ReverseString(string str) {
    // Variables
    string backstr = "", current = "";
    const string first = str; // hold initial str
    int length = str.length();
    int j = length - 1;

    // Last Char is String
    backstr = str.substr(j, length);
    // Recursion
    if (length == 1 && j == 0) { // Base case:
        cout << backstr;
        return backstr;
    } else {
        cout << backstr;
        current = first.substr(0, j); // basically does str--
        ReverseString(current);
        return backstr;
    }//end if-else
}//end ReverseString()

int main() {
    string str = "Hello";
    cout << "Reverse of \"" << str << "\" is \"";
    ReverseString(str);
    cout << "\"." << endl;

    return 0;
}//end main()