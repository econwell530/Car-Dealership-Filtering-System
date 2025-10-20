#include "CarShop.h"    // includes the CarShop header file
#include "Trucks.h"     // includes the Trucks header file
#include "Sedans.h"     // includes the Sedans header file

int main()
{
    CarShop cs; // CarShop object
    Trucks t;   // Trucks object
    Sedans s;   // Sedans object
    cs.Display();   // calls CarShop display function
    int i = 0;  // initializes i for while loop
    int choice, num;    // num for match checking with price and miles, choice for switch
    string text;    // text for match checking with make and model

    while (i == 0)  // while i is equal to 0
    {
        cout << "Select option: ";  // prompts user to enter menu choice
        cin >> choice;  // choice holds user's choice
        cout << endl;

        switch(choice)  // switch statement tests value in choice
        {
        case 1:     // if user picked 1 (make search)
            cout << "Enter Search Text: ";  // prompts for search text
            cin >> text;    // reads in search text
            t.TruckSearch(text, choice);    // calls TruckSearch function
            s.SedanSearch(text, choice);    // calls SedanSearch function
            break;  // breaks from the switch to continue the loop

        case 2:     // if user picked 2 (model search)
            cout << "Enter Search Text: ";  // prompts for search text
            cin >> text;    // reads in search text
            t.TruckSearch(text, choice);    // calls TruckSearch function
            s.SedanSearch(text, choice);    // calls SedanSearch function
            break;  // breaks from the switch to continue the loop

        case 3:     // if user picked 3 (price search)
            cout << "Enter Search Text: ";  // prompts for search text
            cin >> num;     // reads in search text
            t.TruckSearch(num, choice);     // calls TruckSearch function
            s.SedanSearch(num, choice);     // calls SedanSearch function
            break;  // breaks from the switch to continue the loop

        case 4:     // if user picked 4 (mile search)
            cout << "Enter Search Text: ";  // prompts for search text
            cin >> num;     // reads in search text
            t.TruckSearch(num, choice);     // calls TruckSearch function
            s.SedanSearch(num, choice);     // calls SedanSearch function
            break;  // breaks from the switch to continue the loop

        case 5:     // if user picked 5
            i++;    // increments i to exit the loop
            break;  // breaks from the switch

        default:    // default option if user picks other number
            cout << "Please enter one of the available options." << endl << endl;
        }
    }

    cout << "Thank you for visiting Eddie's Shop & Drive" << endl << endl;  // displays exit message

    return 0;
}