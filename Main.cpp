#include <iostream>
#include "Header.h"
#include <fstream>
#include <string>
#include <cstring>
#include <direct.h>

using namespace std;

int main() {
	//tao folder luu tru du lieu
	string address_Main_folder = "\\Main_folder",
		address_Account_folder = "\\Main_folder\\Account_folder",
		address_Student_Management_folder = "\\Main_folder\\Student_Management_folder",
		address_Student_folder = "\\Main_folder\\Account_folder\\Student_folder",
		address_Teacher_folder = "\\Main_folder\\Account_folder\\Teacher_folder";
	if (_mkdir(address_Main_folder.c_str()) == 0) {
		if (_mkdir(address_Account_folder.c_str()) == 0) {
			if (_mkdir(address_Student_folder.c_str()) == 0)cout << endl;
			if (_mkdir(address_Teacher_folder.c_str()) == 0)cout << endl;
		}
		if (_mkdir(address_Student_Management_folder.c_str()) == 0)cout << endl;
	}
	int kt = 0;
	do {
		cout << "----------STUDENT MANAGEMENT----------\n";
		cout << "PLEASE SELECT OBJECT!\n";
		cout << "1.STUDENT.\n2.AN ACADEMIC STAFF.\n";
		cin >> kt;
		switch (kt)
		{
		case 1:
			break;
		case 2:
			Menu_Login_Register_Teacher();
			break;
		default:
			cout << "please, try agains!\n";
			break;
		}
	} while (kt != 0);
}