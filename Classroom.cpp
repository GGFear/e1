/***********************************************************************
 * Module:  Classroom.cpp
 * Author:  is7327
 * Modified: �������, 20 ������ 2018 �. 10:06:50
 * Purpose: Implementation of the class Classroom
 ***********************************************************************/

#include "stdafx.h"
#include "Classroom.h"
#include <iostream>

using namespace std;

void Classroom::SetName(string n) // ���������� �����
{
	name = n;
}

void Classroom::SetTask(string t) // ���������� ������
{
	task = t;
}

string Classroom::GetName() // �������� ��'�
{
	return name;
}

string Classroom::GetTask()
{
	return task;
}

Classroom::Classroom() :
	name(""),
	task("")
{
}

Classroom::Classroom(string n, string t) :
name(n),
task(t)
{
}

Classroom::Classroom(const Classroom& cl) :
	name(cl.name)
{
}

Classroom::~Classroom()
{
}

void Classroom::creare(void)
{
	cout << "Classroom was created." << endl;
}


void Classroom::registraition(void)
{
	cout << "Students were registrated" << endl;
}