#include <iostream>
#include <cstring>
#include <string>
#include <fstream>
#include "Header.h"

using namespace std;


int ngay_trong_thang_cua_nam_nhuan[12] = { 31,29,31,30,31,30,31,31,30,31,30,31 };
int ngay_trong_thang_cua_nam_khong_nhuan[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };

//ham check ngay thanng
bool check_Nam_Nhuan(Date a) {
	if ((a.year % 400 == 0) || (a.year % 4 == 0 && a.year % 100 != 0))return 1;
	else return 0;
}

bool check_Ngay_Thang(Date a) {
	if (check_Nam_Nhuan(a) == 1) {
		if (a.day <= 0 || a.day > ngay_trong_thang_cua_nam_nhuan[a.month - 1] || a.month <= 0 || a.month > 12)return 0;
		else return 0;
	}
	else
	{
		if (a.day <= 0 || a.day > ngay_trong_thang_cua_nam_khong_nhuan[a.month - 1] || a.month <= 0 || a.month > 12)return 0;
		else return 0;
	}
}

void input_Day_and_Month(Date& a) {
	while (1)
	{
		cout << "Day:\n";
		cin >> a.day;
		cout << "Month:\n";
		cin >> a.month;
		cout << "Year:\n";
		cin >> a.year;
		if (check_Ngay_Thang(a) == 1)break;
		else cout << "Invalid Date! Try Agains!\n";
	}
}

void input_Object(Object& a) {
	cout << "MS:\n";
	cin >> a.MS;
	cout << "Name:\n";
	cin >> a.name;
	cout << "Birthday:\n";
	input_Day_and_Month(a.birthday);
	cout << "Sex:\n";
	cin >> a.sex;
	cout << "Social ID:\n";
	cin >> a.Social_ID;
}

//ham dang ki tai khoan Giang Vien
void register_Teacher(string id, string pass) {
	string address = address_Teacher_folder;
	cout << "----------AN ACADEMIC STAFF----------\n";
	cout << "----------REGISTER----------\n";
	cout << "--------------------\n";
	cout << "ID:\n";
	cin >> id;
	cout << "password:\n";
	cin >> pass;
	fstream f;
	string temp = address + "\\" + id + ".txt";
	f.open(temp, ios::in);
	if (f.is_open())cout << "ID already use! Please, try agains!\n";
	else
	{
		Object a;
		fstream file;
		file.open(temp, ios::out);
		file << pass << endl;
		cout << "enter account information!\n";
		input_Object(a);
		file << a.MS << endl;
		file << a.name << endl;
		file << a.birthday.day << "/" << a.birthday.month << "/" << a.birthday.year << endl;
		file << a.sex << endl;
		file << a.Social_ID << endl;
		file.close();
	}
	f.close();
}

//ham dang nhap
void Login_Account_Teacher(string id, string pass) {
	string address = address_Teacher_folder;
	string temp = address + "\\" + id + ".txt";
	fstream f;
	f.open(temp, ios::in);
	if (!f.is_open())cout << "ID is not correct!\n";
}

void Menu_Login_Register_Teacher(string id, string pass) {
	int kt = 0;
	do {
		cout << "----------STUDENT----------\n";
		cout << "1.Register.\n2.Login.\n0.Exit,\n";
		cin >> kt;
		switch (kt)
		{
		case 1:

		default:
			break;
		}
	} while (kt != 0);
}

void check_menu(int& kt) {
	cout << "1.Continue!\n0.Exit!\n";
	cin >> kt;
}
