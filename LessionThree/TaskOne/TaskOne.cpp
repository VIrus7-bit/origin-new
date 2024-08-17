#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class addres{
private:
	int n;
	string name_city;
	string name_Street;
	int i;
	int g;


public:

	void Readingult()
	{	
		ifstream myfile("in.txt");

		char buff[50];

		while (!myfile.eof())
		{
			myfile.getline(buff, 50);
			cout << buff << endl;
		}
		myfile.getline(buff, 50);
	}

	void Record() 
	{
		ofstream myfile("out.txt");
		if (myfile.is_open()){
			cout << "Запись начата: ";
		}

	}
	
};

int main()
{
	setlocale(LC_ALL, "rus");

	addres addres;
	addres.Readingult();

}