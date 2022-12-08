#include "Artist.h"
#include "Artwork.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    string userArtistName = "", userTitle;
    int userBirthYear, userDeathYear, userYearCreated;

    getline(cin, userArtistName);
    cin >> userBirthYear;
    cin >> userDeathYear;
    cin.ignore();
    getline(cin, userTitle);
    cin >> userYearCreated;

    Artwork artworkLabel = Artwork();
    
    artworkLabel.setArtistName(userArtistName);
    artworkLabel.setBirthYear(userBirthYear);
    artworkLabel.setDeathYear(userDeathYear);
    artworkLabel.setArtworkTitle(userTitle);
    artworkLabel.setYearCreated(userYearCreated);

    // Print
    artworkLabel.PrintInfo();
    
    return 0;
}//end main()