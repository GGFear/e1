/***********************************************************************
 * Module:  Teacher.cpp
 * Author:  is7327
 * Modified: вторник, 20 но€бр€ 2018 г. 10:07:03
 * Purpose: Implementation of the class Teacher
 ***********************************************************************/

#include "stdafx.h"
#include "Teacher.h"
#include <iostream>

using namespace std;

void Teacher::SetName(std::string n)// встановити ≥м'€
{
	name = n;
}
void Teacher::SetSurname(std::string s) // встановити пр≥звище
{
	surname = s;
}
void Teacher::SetSubject(std::string s) // встановити рейтинговий бал
{
	subject = s;
}
void Teacher::SetQualification(int q) // встановити курси
{
	qualification = q;
}

std::string Teacher::GetName()// отримати ≥м'€
{
	return name;
}
std::string Teacher::GetSurname()// отримати пр≥звище
{
	return surname;
}
std::string Teacher::GetSubject()// отримати рейтинговий бал
{
	return subject;
}
int Teacher::GetQualification()// отримати курси
{
	return qualification;
}

Teacher::Teacher() :
	subject(""),
	qualification(),
	name(""),
	surname("")
{
}

Teacher::Teacher(const Teacher&teach) :
	subject(teach.subject),
	qualification(teach.qualification),
	name(teach.name),
	surname(teach.surname)
{
}


Teacher::Teacher(string fname, string sname, string sub, int qual) :
	name(fname),
	surname(sname),
	subject(sub),
	qualification(qual)
{
}

Teacher::Teacher(short qual) :
	name(""),
	surname(""),
	qualification()
{
	int element = (int)qual;
	qualification = element;
}

Teacher::Teacher(std::string str)
{
	std::string str2 = str.substr(0, 10);
	name = str2;

	std::string str3 = str.substr(11, 10);
	surname = str3;

}

Teacher::~Teacher()
{
}

void Teacher::createprograme(void)
{
	cout << "Indivual programs were created" << endl;
}

void Teacher::checkexam(void)
{
   // TODO : implement
}

void Teacher::checktests(void)
{
	cout << "Tests were checked." << endl;
}


void Teacher::checkhw(void)
{
	cout << "HW were checked" << endl;
}

void Teacher::helpstudents(void)
{
	cout << "Teacher helped students." << endl;
}


