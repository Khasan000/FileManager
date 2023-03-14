#include <iostream>
#include <fstream>
#include <cstdio>
#include <filesystem>
#include "FileManager.h"


#define _CRT_SECURE_NO_DEPRECATE



int main()
{
	const int SIZE = 7;
	string Functions[SIZE]{"","CreateFile","DeleteFile","RenameFile","MovingFile","CopyFile","CalculatingSize"};

	FileManager file;

	
	while (true)
		file.CreateFile();

	
	
	
}
