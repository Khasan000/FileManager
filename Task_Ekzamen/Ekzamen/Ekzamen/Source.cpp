#include <iostream>
#include <fstream>
#include <cstdio>
#include <filesystem>
#include "FileManager.h"


#define _CRT_SECURE_NO_DEPRECATE



int main()
{
	FileManager file;
	/*file.CreateFile();*/ // +папка +file +file.manual
	/*file.DeleteFile();*/ // +file - papka
	//file.RenameFile(); //+file +papka
	//file.MovingFile(); //+file +papka +papka c filom
	//file.CopyFile();
	//file.CalculatingSize();
	const int SIZE = 7;
	string Functions[SIZE]{"","CreateFile","DeleteFile","RenameFile","MovingFile","CopyFile","CalculatingSize"};

	file.MovingFile();
	file.MovingFile();

	/*while (true)
	{
		int choise;
		cout << "Choose func:" << endl;
		for (int i = 1; i < SIZE; ++i)
			cout <<i<<")" << Functions[i] << endl;
		cout << endl;

		cin >> choise;

		if (choise > 7 || choise < 1)
		{
			cout << "Out Of Range!"; 
			break;
		}

		


		switch (choise)
		{
		case 1:
			file.CreateFile();
			break;
		case 2:
			file.DeleteFile();
			break;
		case 3:
			file.RenameFile();
			break;
		case 4:
			file.MovingFile();
			break;
		case 5:
			file.CopyFile();
			break;
		case 6:
			file.CalculatingSize();
			break;
		default:
			cout << "Incorrect choise!" << endl;
		}
	}*/
	
	
}
