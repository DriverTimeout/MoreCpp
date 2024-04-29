#include <fstream>//input, 
#include <iostream>
#include <string>
using namespace std;

int main()
{
    /*
    ofstream gustavo;
    gustavo.open("student.txt");
    gustavo << "Gustavo Alatta\n";
    gustavo << "Laurie Alfaro\n";
    gustavo << "James Papademas\n";
    gustavo.close();
    */
    string line;
    ifstream gust;
    gust.open("gustavo.txt");
    if (gust.is_open()) {
        while (getline(gust, line))
        {
            cout << line << endl;
        }
        
        
    }
    else {
        cout << "something wrong with the fiule";
    }
    

}
