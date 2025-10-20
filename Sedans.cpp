#include "Sedans.h" // includes the Sedans header file

Sedans::Sedans()    /// default constructor
{}

void Sedans::Display()  /// displays a sedan's information with matching user criteria
{
    cout << "Make:\t" << GetMake() << endl;
    cout << "Model:\t" << GetModel() << endl;
    cout << "Miles:\t" << GetMiles() << endl;
    cout << "Price:\t" << GetPrice() << endl;
    cout << "Hybrid:\t" << GetHybrid() << endl;
}

void Sedans::SedanSearch(string text, int choice)   /// reads in file data and checks criteria
{
    string ma, mo, hy;  // declares variables to hold file data
    int pr, mi;
    ifstream fin("sedans-1-1.txt"); // fin for input file stream

    while(!fin.eof())   // while not end of sedan file
    {
        fin >> ma >> mo >> pr >> mi >> hy;  // reads in sedan information 1 line at a time
        SetMake(ma);    // sets private variables equal to read in values
        SetModel(mo);
        SetPrice(pr);
        SetMiles(mi);
        SetHybrid(hy);

        if(choice == 1 && text == ma)   // if criteria matches file data (make)
        {
            Display();  // display all sedans with matching criteria
            cout << endl;
        }
        else if(choice == 2 && text == mo)  // if criteria matches file data (model)
        {
            Display();  // display all sedans with matching criteria
            cout << endl;
        }
    }
}

void Sedans::SedanSearch(int num, int choice)   /// reads in file data and checks criteria (overloaded)
{
    string ma, mo, hy;  // declares variables to hold file data
    int pr, mi;
    ifstream fin("sedans-1-1.txt"); // fin for input file stream

    while(!fin.eof())   // while not end of sedan file
    {
        fin >> ma >> mo >> pr >> mi >> hy;  // reads in sedan information 1 line at a time
        SetMake(ma);    // sets private variables equal to read in values
        SetModel(mo);
        SetPrice(pr);
        SetMiles(mi);
        SetHybrid(hy);

        if(choice == 3 && num >= pr)    // if criteria matches file data (price)
        {
            Display();  // display all sedans with matching criteria
            cout << endl;
        }
        else if(choice == 4 && num >= mi)   // if criteria matches file data (miles)
        {
            Display();  // display all sedans with matching criteria
            cout << endl;
        }
    }
}

void Sedans::SetHybrid(string hy)   /// sets hybrid equal to file value
{
    hybrid = hy;
}

string Sedans::GetHybrid()  /// retrieves hybrid value
{
    return hybrid;
}