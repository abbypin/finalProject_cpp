#include <iostream>
#include <string>
#include <fstream>
using namespace std;

void findID(string name, ifstream& file) {
    // Variable
    bool found = 0;

    // Loop through File
    while (!found && file) {
        // While-Loop Variables
        string nextName = "";
        string nextId = "";

        // Input from File
        file >> nextName;
        file >> nextId;

        // Check the Name
        if (nextName.compare(name) == 0) {
            cout << nextId << endl;
            found = 1;
        }//end if
    }//end while-loop

    if (found == 0) {
        throw runtime_error("Student ID not found for studentName");
    }//end if
}//end findID()

void findName(string id, ifstream& file) {
    // Variable
    bool found = 0;

    // Loop through File
    while (!found && file) {
        //While-Loop Variable
        string nextName = "";
        string nextId = "";

        // Input from File
        file >> nextName;
        file >> nextId;

        // Check the ID
        if (nextId.compare(id) == 0) {
            cout << nextName << endl;
            found = 1;
        }//end if
    }//end while-loop

    if (found == 0) {
        throw runtime_error("Student Name not found for studentID");
    }//end if
}//end findName()

int main() {
    // Variables
    string fileName = "";
    int searchOption = -1;
    string searchKey = "";

    // User Inputs
    cin >> fileName;
    cin >> searchOption;
    cin >> searchKey;

    // File
    ifstream file(fileName, ios::in);

    // Check for Error
    if (file.fail()) {
        cout << "ERROR: cannot open file." << endl;
    } else {
         // Search File
        if (searchOption == 0) {
            findID(searchKey, file);
        } else if (searchOption == 1) {
            findName(searchKey, file);
        } else
            cout << "Error: An invailid search option was chosen." << endl;
        //end else-if
    }//end if

    // Close File
    file.close();

    return 0;
}//end main()