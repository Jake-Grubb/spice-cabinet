//Project: Spice Cabinet
//Programmer: Jacob Grubb
//Organization: N/A (Independent)
//File: spice-cabinet.cpp
//Description: Proof of concept for spice-cabinet project, view details in README.md

//Libraries
#include<iostream>
#include<cmath>

//Definitions
#define SALT_KEY_LENGTH 16
#define SALT_LENGTH 64

char* saltLookUp(char* salt_key, char** salt_table)
{
	int numberSalts = pow(2, SALT_KEY_LENGTH);
	char* selected_salt = "AAAAAAAAAAAAAAAA";
	return selected_salt;
}

bool isUserPassValid(char* username, char* spicedPass)
{
	return false;
}

int main(int argc, char** argv)
//Function: main
//Parameters: argc - count of arguments, argv - list of arguments,
//Parameters (cont): <salt_file> <pepper_file>
//Usage: ./spice-cabinet <salt_file> <pepper_file> <database_file>
//Return: Integer response code
{

	if( argc !=4)
	{
		std::cerr << "usage: " << argv[0] << " [salts_file] [pepper_file] [database_file]" << std::endl;
	}

	//Load salt file

	//Load pepper file

	//

	return 0;
}


