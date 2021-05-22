#include <iostream>
#include "Header.h"
#include <fstream>
#include <string>
#include <cstring>
#include <direct.h>

using namespace std;

int main() {
	//tao folder luu tru du lieu
	if (_mkdir(address_Main_folder.c_str()) == 0) {
		if (_mkdir(address_Account_folder.c_str()) == 0) {
			_mkdir(address_Student_folder.c_str());
			_mkdir(address_Teacher_folder.c_str());
		}
		_mkdir(address_Student_Management_folder.c_str());
	}
	int kt = 0;
	do {
		cout << "----------STUDENT MANAGEMENT----------/n";
		cout << "PLEASE SELECT OBJECT!\n";
		cout << "1.STUDENT.\n2.AN ACADEMIC STAFF.\n";
		cin >> kt;
		switch (kt)
		{
		case 1:

		default:
			break;
		}
	} while (kt != 0);
}