#ifndef ARTWORK_H
#define ARTWORK_H
#include "Artist.h"
#include <iostream>
#include <string>
using namespace std;

class Artwork :public Artist {
    public:
        Artwork() {
            artworkTitle = "unknown";
            yearCreated = -1;
        }//end constructor
        void setArtworkTitle(string title) {
            artworkTitle = title;
        }//end seArtworkTitle()
        string getArtworkTitle();
        void setYearCreated(int year) {
            if (year >= 0)
                yearCreated = year;
            artist = Artist(artistName, birthYear, deathYear);
        }//end setYearCreated()
        int getYearCreated();
        void PrintInfo() {
            // Print Artist
            artist.PrintInfo();

            // Print Title
            cout << "Title: " << artworkTitle;
            // Print Artwork Date
            if (yearCreated >= 0) {
                cout << ", " << yearCreated << endl;
            } else {
                cout << ", unknown" << endl;
            }//end if-else
        }//end PrintInfo()
    protected:
        string artworkTitle;
        int yearCreated;
    private:
        Artist artist;
};//end Artwork

#endif