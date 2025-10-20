#include "Trucks.h" // includes the Trucks header file

Trucks::Trucks()    /// default constructor
{}

void Trucks::Display()  /// displays a truck's information with matching user criteria
{
    cout << "Make:\t" << GetMake() << endl;
    cout << "Model:\t" << GetModel() << endl;
    cout << "Miles:\t" << GetMiles() << endl;
    cout << "Price:\t" << GetPrice() << endl;
    cout << "Engine:\t" << GetEngine() << endl;
}

void Trucks::TruckSearch(string text, int choice)   /// reads in file data and checks criteria
{
    string ma, mo, en;  // declares variables to hold file data
    int pr, mi;
    ifstream fin("trucks-1-1.txt"); // fin for input file stream

    while(!fin.eof())   // while not end of truck file
    {
        fin >> ma >> mo >> pr >> mi >> en;  // reads in truck information 1 line at a time
        SetMake(ma);    // sets private variables equal to read in values
        SetModel(mo);
        SetPrice(pr);
        SetMiles(mi);
        SetEngine(en);

        if(choice == 1 && text == ma)   // if criteria matches file data (make)
        {
            Display();  // display all trucks with matching criteria
            cout << endl;
        }
        else if(choice == 2 && text == mo)  // if criteria matches file data (model)
        {
            Display();  // displays all trucks with matching criteria
            cout << endl;
        }
    }
}

void Trucks::TruckSearch(int num, int choice)   /// reads in file data and checks criteria (overloaded)
{
    string ma, mo, en;  // declares variables to hold file data
    int pr, mi;
    ifstream fin("trucks-1-1.txt"); // fin for input file stream

    while(!fin.eof())   // while not end of truck file
    {
        fin >> ma >> mo >> pr >> mi >> en;  // reads in truck information 1 line at a time
        SetMake(ma);    // sets private variables equal to read in values
        SetModel(mo);
        SetPrice(pr);
        SetMiles(mi);
        SetEngine(en);

        if(choice == 3 && num >= pr)    // if criteria matches file data (price)
        {
            Display();  // display all trucks with matching criteria
            cout << endl;
        }
        else if(choice == 4 && num >= mi)   // if criteria matches file data (miles)
        {
            Display();  // display all trucks with matching criteria
            cout << endl;
        }
    }
}

void Trucks::SetEngine(string en)   /// sets engine equal to file value
{
    engine = en;
}

string Trucks::GetEngine()  /// retrieves engine value
{
    return engine;
}