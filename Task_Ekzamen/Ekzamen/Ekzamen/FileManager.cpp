#include "FileManager.h"
#include <iostream>
#include <fstream>
#include <cstdio>
#include <filesystem>
using namespace std;
namespace fs = std::filesystem;

void FileManager::CreateFile()
{
	
		//START Ñhoose what to create
		int Creatchoose;
		cout << "1)Create directory\n2)Create File" << endl;
		cin >> Creatchoose;
		//END Ñhoose what to create


		string LocalPath = GlobalPath;


		//START CREATE DIR
		if (Creatchoose == 1)
		{
			string dirName;

			cout << "Input Name: ";
			cin >> dirName;
			cout << endl;

			LocalPath.append(dirName);
			// << LocalPath << endl;

			if (fs::create_directory(LocalPath) == 1)
				cout << "Success" << endl;
			else
			{
				cout << "Error" << endl;
				abort();
			}


		}
		//END CREATE DIR


		//START CREATE FILE
		else if (Creatchoose == 2)
		{
			int Format_choose;
			string FileName;


			//START CHOOSE INPUT
			cout << "Paste suggested formats or manually? \n1)suggested formats\n2)manually" << endl;
			cin >> Format_choose;

			if (Format_choose > 2 || Format_choose < 1)
				throw "Incorrect choose!";
			//END CHOOSE INPUT


			//START INPUT NAME
			cout << "Input Name: ";
			cin >> FileName;
			//END INPUT NAME


			//START APPEND
			LocalPath.append(FileName);
			// << LocalPath << endl;
			//END APPEND


			//START SUGGESTED FORMATS
			if (Format_choose == 1)
			{
				int choose;
				for (int i = 0; i < SIZE; ++i)
				{
					cout << Formats[i] << "\t";
				}

				cout << "choose format: ";
				cin >> choose;
				if (choose > SIZE || choose < 1)
					throw "out of range!";

				LocalPath.append(Formats[choose]);
				// << LocalPath << endl;
			}
			//END SUGGESTED FORMATS


			//START MANUALLY
			else if (Format_choose == 1)
			{
				LocalPath.append(FileName);
				// << LocalPath << endl;
			}
			//END MANUALLY


			//START CREATE FILE/DIR
			fout.open(LocalPath);
			//END CREATE FILE/DIR


		}
		//END CREATE FILE


		//START EXEPTION
		else
		{
			cout << "Incorrect number" << endl;
			//abort();
		}
		//END EXEPTION

}
void FileManager::DeleteFile()
{
	string FileName;
	string LocalPath = GlobalPath;

	cout << "Enter FileName with format: ";
	cin >> FileName;
	LocalPath.append(FileName);

	LocalPath.c_str();

	if (remove(LocalPath.c_str()) == 0)
		cout << "Removing..." << endl;
	else
		cout << "Something happened!" << endl;
}
void FileManager::RenameFile()
{
	string OldName;
	string NewName;

	string OldFileNamePath = GlobalPath;
	string NewFileNamePath = GlobalPath;


	cout << "Enter OldName with format: ";
	cin >> OldName;
	cout << endl;
	OldFileNamePath.append(OldName);

	cout << "Enter a name to replace with format: ";
	cin >> NewName;
	cout << endl;
	NewFileNamePath.append(NewName);


	if (rename(OldFileNamePath.c_str(), NewFileNamePath.c_str()) == 0)
		cout << "Success" << endl;
	else
		cout << "Error" << endl;

}
void FileManager::MovingFile()
{
	string FileName;
	string dir;

	string StartPath = GlobalPath;
	string EndPath = GlobalPath;


	cout << "Enter FileName with format: ";
	cin >> FileName;
	cout << endl;
	StartPath.append(FileName);

	cout << "Enter dir: ";
	cin >> dir;
	cout << endl;

	EndPath.append(dir + "/");
	EndPath.append(FileName);

	if (rename(StartPath.c_str(), EndPath.c_str()) == 0)
		cout << "Success" << endl;
	else
		cout << "Error" << endl;
}
void FileManager::CopyFile(string Start, string End)
{
	string chain;
	FILE* archivo;

	if (archivo = fopen(Start.c_str(), "r"))
	{
		chain = "copy " + Start + " " + End;
		cerr << chain;
		system(chain.c_str());
	}
	else
	{
		cout << "The file does not exist!" << endl;
	}
}
void FileManager::CalculatingSize()
{
	string LocalPath = GlobalPath;
	string UserPath;
	ofstream fout;

	streamoff FileSize = 0;

	cout << "Input Path: ";
	cin >> UserPath;

	LocalPath.append(UserPath);

	fout.open(LocalPath, ios::app);
	// << LocalPath << endl;

	fout.seekp(0, std::ios::end);
	FileSize = fout.tellp();

	cout << "Size: " << FileSize << " bytes" << endl;
}
void FileManager::Init(string Start, string End)
{
	const string LocalCorrectedPath = "C:\\Users\\zkury\\Desktop\\Task_Ekzamen\\Ekzamen\\Ekzamen\\Creations\\";
	string FromFile, ToFile;
	string StartPath = LocalCorrectedPath, EndPath = LocalCorrectedPath;

	cout << "Input FromFile: ";
	cin >> FromFile;
	cout << endl;

	cout << "Input ToFile: ";
	cin >> ToFile;
	cout << endl;

	StartPath.append(FromFile);
	EndPath.append(ToFile);

	CopyFile(StartPath, EndPath);

}