#ifndef SEDANS_H_INCLUDED
#define SEDANS_H_INCLUDED
#include "CarShop.h"    // includes the CarShop header file

class Sedans : public CarShop   // Sedans class inherits from CarShop base class
{
private:    // private members
    string hybrid;  // hybrid is specific to the truck .txt file

public: // public members
    Sedans(); // default constructor
    void Display(); // displays car information when user enters matching criteria
    void SedanSearch(string, int);  // reads in .txt file values and checks user's criteria (option 1 and 2)
    void SedanSearch(int, int); // reads in .txt file values and checks user's criteria (option 3 and 4) (overloaded)
    void SetHybrid(string); // set method for hybrid
    string GetHybrid(); // get method for hybrid
};


#endif // SEDANS_H_INCLUDED