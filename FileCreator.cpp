#include "FileCreator.h"
FileCreator::FileCreator(string n)
{
	this->myFile.open(n);
}

void FileCreator::HeaderWriter()
{
	this->myFile << "Product, Quantity, Price, TotalPrice" << endl;
}
// name of file has to be csv
void FileCreator::FileWriter(string p, int q, double price, double total)
{
	this->myFile << p << ", " << q << ", " << price << " ," << total << endl;
}

void FileCreator::CloseFile()
{
	this->myFile.close();
}
