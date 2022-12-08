#ifndef ARTIST_H
#define ARTIST_H
#include <iostream>
#include <string>
using namespace std;

class Artist {
    public:
        Artist() {
            artistName = "unknown";
            birthYear = -1;
            deathYear = -1;
        }//end default constructor
        
        Artist(string name, int bYear, int dYear) {
            artistName = name;
            if (bYear >= 0)
                birthYear = bYear;
            else
                birthYear = -1;
            if (dYear >= 0)
                deathYear = dYear;
            else
                deathYear = -1;
        }//end constructor

        void setArtistName(string name) {
            artistName = "";
            artistName = name;
        }//end setFullName
        string getFullName();
        void setBirthYear(int year) {
            if (year >= 0)
                birthYear = year;
        }//end setBirthYear()
        void setDeathYear(int year) {
            if (year >= 0)
                deathYear = year;
        }//end setDeathYear()
        int getBirthYear();
        int getDeathYear();
        virtual void PrintInfo() {
            // Print Name
            cout << "\nArtist: " << artistName;
            // Print Date
            if (birthYear >= 0 && deathYear > 0) {
                cout << " (" << birthYear << " to " << deathYear << ")" << endl;
            } else if (birthYear >= 0 && deathYear < 0) {
                cout << " (" << birthYear << " to present)" << endl;
            } else if (birthYear < 0 && deathYear < 0) {
                cout << " (unknown)" << endl;
            }//end else-if
        }//end PrintInfo()
     protected:
        string artistName;
        int birthYear;
        int deathYear;
};//end Artist

#endif