
#include <iostream>
#include "FileCreator.h"
using namespace std;

int main()
{
    string FileName;
    string p;
    int q;
    double price;
    double total;
    cout << "Enter the file name (.csv) ==> ";
    cin >> FileName;
    FileCreator gust(FileName);
    gust.HeaderWriter();
    for (int i = 0; i < 5; i++)
    {
        cout << "Enter product name ==> ";
        cin >> p;
        cout << "Enter quantity ==> ";
        cin >> q;
        cout << "Enter Price ==> ";
        cin >> price;
        total = q * price;
        gust.FileWriter(p, q, price, total);

    }
    gust.CloseFile();
}

