/***********************************************************************
 * Module:  IndividualProgram.cpp
 * Author:  is7327
 * Modified: вторник, 20 ноября 2018 г. 10:06:06
 * Purpose: Implementation of the class IndividualProgram
 ***********************************************************************/

#include "stdafx.h"
#include "IndividualProgram.h"

void IndividualProgram::SetName(string n) // встановити назву
{
	namecourse = n;
}

void IndividualProgram::SetMark(float m) // встановити оцінку
{
	mark = m;
}

string IndividualProgram::GetName() // отримати ім'я
{
	return namecourse;
}

float IndividualProgram::GetMark()
{
	return mark;
}

IndividualProgram::IndividualProgram() :
	namecourse(""),
	mark()
{
}

IndividualProgram::IndividualProgram(string name, float m) :
	namecourse(name),
	mark(m)
{
}

IndividualProgram::IndividualProgram(const IndividualProgram& ip) :
	namecourse(ip.namecourse),
	mark(ip.mark)
{
}

IndividualProgram::~IndividualProgram()
{
}

void IndividualProgram::create(void)
{
	cout << "Individual Program was created." << endl;
}


bool IndividualProgram::pass(void)
{
	cout << "Student finished progam" << endl;
	return true;
}