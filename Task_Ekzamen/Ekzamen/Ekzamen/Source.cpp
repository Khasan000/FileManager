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
	/*file.Init();*/
	//file.CalculatingSize();
	file.CopyFile();
	const int SIZE = 7;
	string Functions[SIZE]{"","CreateFile","DeleteFile","RenameFile","MovingFile","Init"};


	/*while (true)
	{
		int choise;
		cout << "Choose func: ";
		cin >> choise;

		


		switch (choise)
		{

		default:
			break;
		}
	}*/
	
	
}
