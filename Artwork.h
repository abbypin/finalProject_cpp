#ifndef ARTWORK_H
#define ARTWORK_H
#include "Artist.h"
#include <iostream>
#include <string>
using namespace std;

class Artwork : public Artist {
    private:
        string artworkTitle;
        int yearCreated;
    public:
        Artwork() {
            artworkTitle = "unknown";
            yearCreated = -1;
        }//end constructor
        void setArtworkTitle(string title);
        string getArtworkTitle();
        void setYearCreated(int year);
        int getYearCreated();
        void PrintInfo();
};//end Artwork

#endif