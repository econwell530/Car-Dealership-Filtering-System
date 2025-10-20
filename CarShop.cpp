#include "CarShop.h"    // includes the CarShop header file

CarShop::CarShop()  /// default constructor
{}

void CarShop::Display() /// displays opening menu
{
    cout << "***********SEARCH MENU***********" << endl;    // presents user with options for car searching
    cout << "Search Make...............Press 1" << endl;
    cout << "Search Model..............Press 2" << endl;
    cout << "Search Price..............Press 3" << endl;
    cout << "Search Miles..............Press 4" << endl;
    cout << "Exit......................Press 5" << endl << endl;    // exits the program
}

void CarShop::SetMake(string ma)    /// sets make equal to file value
{
    make = ma;
}

string CarShop::GetMake()   /// retrieves value stored in make
{
    return make;
}

void CarShop::SetModel(string mo)   /// sets model equal to file value
{
    model = mo;
}

string CarShop::GetModel()  /// retrieves value stored in model
{
    return model;
}

void CarShop::SetPrice(int pr)  /// sets price equal to file value
{
    price = pr;
}

int CarShop::GetPrice() /// retrieves value stored in price
{
    return price;
}

void CarShop::SetMiles(int mi)  /// sets miles equal to file value
{
    miles = mi;
}

int CarShop::GetMiles() /// retrieves value stored in miles
{
    return miles;
}