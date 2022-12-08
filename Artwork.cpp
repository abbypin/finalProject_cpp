#include "Artwork.h"
#include <iostream>
#include <string>
using namespace std;

void Artwork::setArtworkTitle(string title) {
    artworkTitle = title;
}//end seArtworkTitle()

string Artwork::getArtworkTitle() {
    return artworkTitle;
}//end getArtworkTitle()

void Artwork::setYearCreated(int year) {
    if (year >= 0)
        yearCreated = year;
}//end setYearCreated()

int Artwork::getYearCreated() {
    return yearCreated;
}//end getYearCreated()

void Artwork::PrintInfo() {
    // Print Artist
    Artist::PrintInfo();

    // Print Title
    cout << "Title: " << getArtworkTitle();
    // Print Artwork Date
    if (yearCreated >= 0) {
        cout << ", " << getYearCreated() << endl;
    } else {
        cout << ", unknown" << endl;
    }//end if-else
}//end PrintInfo()