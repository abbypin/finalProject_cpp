#include "Artwork.h"
#include "Artist.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    string userFirstName, userLastName, artistName = "", userTitle;
    int userBirthYear, userDeathYear, userYearCreated;

    cin >> userFirstName;
    cin >> userLastName;
    cin >> userBirthYear;
    cin >> userDeathYear;
    getline(cin, userTitle);
    cin.ignore();
    cin >> userYearCreated;

    Artwork artworkLabel = Artwork();
    artworkLabel.setFirstName(userFirstName);
    artworkLabel.setLastName(userLastName);
    artworkLabel.setFullName();
    artworkLabel.setBirthYear(userBirthYear);
    artworkLabel.setDeathYear(userDeathYear);
    artworkLabel.setArtworkTitle(userTitle);
    artworkLabel.setYearCreated(userYearCreated);

    // Print
    artworkLabel.PrintInfo();
    
    return 0;
}//end main()