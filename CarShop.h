#ifndef CARSHOP_H_INCLUDED
#define CARSHOP_H_INCLUDED
#include <iostream> // includes the i/o stream library
#include <fstream>  // includes the file stream library
using namespace std;    // uses the std namespace

class CarShop   // CarShop base class
{
private:    // private members
    string make;    // declares multiple variables for car information
    string model;
    double price;
    int miles;

public: // public members
    CarShop();  // default constructor
    virtual void Display(); // Display function (virtual since derived classes have Display)
    void SetMake(string make);  // multiple set and get functions used for private member values
    string GetMake();
    void SetModel(string model);
    string GetModel();
    void SetPrice(int price);
    int GetPrice();
    void SetMiles(int miles);
    int GetMiles();
};


#endif // CARSHOP_H_INCLUDED