/***********************************************************************
 * Module:  Student.cpp
 * Author:  is7327
 * Modified: �������, 20 ������ 2018 �. 10:06:06
 * Purpose: Implementation of the class Student
 ***********************************************************************/

#include "stdafx.h"
#include "IndividualProgram.h"
#include "Student.h"

using namespace std;

void Student::SetName(string n) // ���������� ��'�
{
	name = n;
}
void Student::SetSurname(string s) // ���������� �������
{
	surname = s;
}
void Student::SetRating(float r) // ���������� ������ 
{
	rating = r;
}

string Student::GetName() // �������� ��'�
{
	return name;
}
string Student::GetSurname() // �������� �������
{
	return surname;
}
float Student::GetRating()
{
	return rating;
}


Student::Student() :
	individualprogram(1, IndividualProgram()),
	name(""),
	surname(""),
	rating()
{
}

Student::Student(string fname, string sname, int rat) :
	individualprogram(1, IndividualProgram(" ", 0)),
	name(fname),
	surname(sname),
	rating(rat)
{
}

Student::Student(const Student& k) :
	individualprogram(k.individualprogram),
	name(k.name),
	surname(k.surname),
	rating(k.rating)
{
}

Student::~Student()
{
}

void Student::createindividualprogram(void)
{
	cout << "Create Individual Program" << endl;
	IndividualProgram program; //����������� �� �������������
	string n;
	float m;
	cout << "Name of program: ";
	cin >> n; program.SetName(n); //���������� ��'�
	cout << "Individual Program was created" << endl;
}

void Student::dohw(void)
{
	cout << "Student did hw." << endl;
}

void Student::getmark(void)
{
	cout << "Student got marks." << endl;
}

void Student::examination(void)
{
	cout << "Student was eximinated." << endl;
}