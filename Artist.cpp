#include "Artist.h"
#include <iostream>
#include <string>
using namespace std;

string Artist::getFullName() {
    return artistName;
}//end getFullName()

int Artist::getBirthYear() {
    return birthYear;
}//end getBirthYear()

int Artist::getDeathYear() {
    return deathYear;
}//end getDeathYear()