#ifndef _Header_h_
#define _Header_h_

using namespace std;

struct Date
{
	unsigned int day;
	unsigned int month;
	unsigned int year;
};

struct Object
{
	unsigned int MS;
	char name[40];
	Date birthday;
	string sex;
	unsigned int Social_ID;
};

string address_Main_folder = "\\Main_folder",
	address_Account_folder = "\\Main_folder\\Account_folder",
	address_Student_Management_folder = "\\Main_folder\\Student_Management_folder",
	address_Student_folder = "\\Main_folder\\Account_folder\\Student_folder",
	address_Teacher_folder = "\\Main_folder\\Account_folder\\Teacher_folder";

#endif // !_Header_h_