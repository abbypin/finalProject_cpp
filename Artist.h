#ifndef ARTIST_H
#define ARTIST_H
#include <iostream>
#include <string>
using namespace std;

class Artist {
    private:
        string firstName;
        string lastName;
        string fullName;
        int birthYear;
        int deathYear;
        string getFirstName();
        string getLastName();
    public:
        Artist() {
            firstName = "";
            lastName = "";
            fullName = "unknown";
            birthYear = -1;
            deathYear = -1;
        }//end constructor
        void setFirstName(string fName);
        void setLastName(string lName);
        void setFullName();
        string getFullName();
        void setBirthYear(int year);
        void setDeathYear(int year);
        int getBirthYear();
        int getDeathYear();
        virtual void PrintInfo();
};//end Artist

#endif