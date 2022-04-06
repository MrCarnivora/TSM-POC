#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>

#define rand_max = 9999999999

using namespace std; 

int randomizer(int itemanzahl) {
        int random = 0;
        random = 1 + std::rand();
        return random;
}


int main()
{
    int profil_anzahl = 0;
    int random_variable = std::rand();
    int itemanzahl = 0;
    int a = 1;

    srand(std::time(nullptr)); // use current time as seed for random generator
    
    cout << "Hello World!\n";
    cout << "Random value on [0 " << RAND_MAX << "]: "
        << random_variable << '\n';
    cout << "Hello World!\n\n\n";

    cout << "Bitte geben Sie die Anzahl der Items ein: ";
    cin >> itemanzahl;
    
    
    vector<int> Item_ID; // ID + Itemanzahl
    vector<int> Item_Gold; //9.999.999,9999 < Gold > 0000,0000
    vector<int> Item_Sale_Rate; //1 >= Sale Rate >0,00
    vector<int> Item_AVG_Daily_Sold; //AVG Daily Sold (INT) 
    vector<int> Items; // ? 
    
    for (int i = 0; i <= itemanzahl; i++) {
        a = 1;
        Item_ID.push_back(i);
        cout << a << ". Test " << i << '\n';
        a = 2;
        Item_Gold.push_back(randomizer(itemanzahl));
        cout << a << ". Test " << i << '\n';
        a = 3;
        Item_Sale_Rate.push_back(randomizer(itemanzahl));
        cout << a << ". Test " << i << '\n';
        a = 4;
        Item_AVG_Daily_Sold.push_back(randomizer(itemanzahl));
        cout << a << ". Test " << i << '\n';
    }

    for (int i = 0; i < itemanzahl; i++) {

        cout << "Item_ID: " << Item_ID[i] << "\t";
        cout << "Gold: " << Item_Gold[i] << "\t";
        cout << "Item_Sale_Rate: " << Item_Sale_Rate[i] << "\t";
        cout << "Item_AVG_Daily_Sold: " << Item_AVG_Daily_Sold[i] << "\n";
    }
    system("Pause");
}