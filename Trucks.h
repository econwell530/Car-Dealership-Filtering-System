#ifndef TRUCKS_H_INCLUDED
#define TRUCKS_H_INCLUDED
#include "CarShop.h"    // includes the CarShop header file

class Trucks : public CarShop   // Trucks class inherits from CarShop base class
{
private:    // private members
    string engine;  // engine is specific to the truck .txt file

public: // public member
    Trucks();   // default constructor
    void Display(); // displays car information when user enters matching criteria
    void TruckSearch(string, int);  // reads in .txt file values and checks user's criteria (option 1 and 2)
    void TruckSearch(int, int); // reads in .txt file values and checks user's criteria (option 3 and 4) (overloaded)
    void SetEngine(string); // set method for engine
    string GetEngine(); // get method for engine
};


#endif // TRUCKS_H_INCLUDED