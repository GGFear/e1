/***********************************************************************
 * Module:  Course.cpp
 * Author:  is7327
 * Modified: �������, 20 ������ 2018 �. 10:06:33
 * Purpose: Implementation of the class Course
 ***********************************************************************/

#include "stdafx.h"
#include "Course.h"
#include <string>

void Course::SetName(string n) // ���������� ��'�
{
	namecourse = n;
}
void Course::SetCredits(float cr) // ���������� ������
{
	credits = cr;
}
void Course::SetSR(float sr) // ���������� �������� ��������
{
	sam_rab = sr;
}
void Course::SetPR(float pr) // ���������� �������� ��������
{
	prakt_rab = pr;
}


string Course::GetName() // �������� ��'�
{
	return namecourse;
}
float Course::GetCredits() // �������� �������
{
	return credits;
}
float Course::GetSR() // �������� �������� ��������
{
	return sam_rab;
}
float Course::GetPR() // �������� �������� ��������
{
	return prakt_rab;
}

Course::Course() :
	namecourse("")
{
}

Course::Course(string name, float cr, float countp, float counts) :
	namecourse(name),
	credits(cr),
	prakt_rab(countp),
	sam_rab(counts)
{
}

Course::Course(const Course& co) :
	namecourse(co.namecourse),
	credits(co.credits),
	prakt_rab(co.prakt_rab),
	sam_rab(co.sam_rab)
{
}

Course::~Course() 
{
}

void Course::createcourse(void)
{
	cout << "Course was created" << endl;
}

void Course::editcourse(void)
{
	cout << "Course was edited" << endl;
}