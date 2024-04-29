#pragma once
#include <fstream>
using namespace std;
class FileCreator
{
private:
	ofstream myFile;

public:
	FileCreator(string);
	void HeaderWriter();
	void FileWriter(string,int,double,double);
	void CloseFile();
};

