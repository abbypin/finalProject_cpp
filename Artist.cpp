#include "Artist.h"
#include <iostream>
#include <string>
using namespace std;

void Artist::setFirstName(string fName) {
    firstName = fName;
}//end setFisrtName()

string Artist::getFirstName() {
    return firstName;
}//end getFirstName()

void Artist::setLastName(string lName) {
    lastName = lName;
}//end setLastName()

string Artist::getLastName() {
    return lastName;
}//end getLastName()

void Artist::setFullName() {
    fullName = "";
    fullName += getFirstName() + " " + getLastName();
}//end setFullName

void Artist::setBirthYear(int year) {
    if (year >= 0)
        birthYear = year;
}//end setBirthYear()

void Artist::setDeathYear(int year) {
    if (year >= 0)
        deathYear = year;
}//end setDeathYear()

int Artist::getBirthYear() {
    return birthYear;
}//end getBirthYear()

int Artist::getDeathYear() {
    return deathYear;
}//end getDeathYear()

void Artist::PrintInfo() {
    // Print Name
    cout << "\nArtist: " << getFullName();
    // Print Date
    if (birthYear >= 0 && deathYear > 0) {
        cout << "(" << birthYear << " to " << deathYear << ")" << endl;
    } else if (birthYear >= 0 && deathYear < 0) {
        cout << "(" << birthYear << " to present)" << endl;
    } else if (birthYear < 0 && deathYear < 0) {
        cout << "(unknown)" << endl;
    }//end else-if
}//end PrintInfo()