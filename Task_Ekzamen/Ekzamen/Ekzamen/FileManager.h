#pragma once
#include<iostream>
#include <fstream>
using namespace std;

class FileManager
{
private:
	const string GlobalPath = "C:/Users/zkury/Desktop/Git_FileManager/Repos/Task_Ekzamen/Ekzamen/Ekzamen/Creations/";

	static const int SIZE = 5;
	const string Formats[SIZE]{ "",".txt",".png",".jpg",".cpp" };

	ofstream fout;

public:
	FileManager() {};
	~FileManager() {};

public:
	void CreateFile();
	void DeleteFile();
	void RenameFile();
	void MovingFile();

	void Init(string Start, string End);

	void CalculatingSize();
private:
	void CopyFile(string Start, string End);

};

