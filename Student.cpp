/***********************************************************************
 * Module:  Student.cpp
 * Author:  is7327
 * Modified: вторник, 20 ноября 2018 г. 10:06:06
 * Purpose: Implementation of the class Student
 ***********************************************************************/

#include "stdafx.h"
#include "IndividualProgram.h"
#include "Student.h"

using namespace std;

void Student::SetName(string n) // встановити ім'я
{
	name = n;
}
void Student::SetSurname(string s) // встановити прізвище
{
	surname = s;
}
void Student::SetRating(float r) // встановити рейтінг 
{
	rating = r;
}

string Student::GetName() // отримати ім'я
{
	return name;
}
string Student::GetSurname() // отримати прізвище
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
	IndividualProgram program; //конструктор за замовчуванням
	string n;
	float m;
	cout << "Name of program: ";
	cin >> n; program.SetName(n); //встановити ім'я
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