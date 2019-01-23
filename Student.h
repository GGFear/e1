/***********************************************************************
 * Module:  Student.h
 * Author:  is7327
 * Modified: �������, 20 ������ 2018 �. 10:06:06
 * Purpose: Declaration of the class Student
 ***********************************************************************/

#include "stdafx.h"
#include <iostream>
#include <vector>

#if !defined(__ClassDiagram_1_Student_h)
#define __ClassDiagram_1_Student_h

using namespace std;

class IndividualProgram;

class Student
{
public:
	string GetName(); // �������� ��'�
	string GetSurname(); // �������� �������
	float GetRating(); // �������� ������

	void SetName(string); // ���������� ��'�
	void SetSurname(string); // ���������� �������
	void SetRating(float); // ���������� ������ 

   void examination(void);
   void dohw(void);
   void getmark(void);
   void createindividualprogram(void);

   Student(); // ����������� �� �����������
   Student(string, string, int); // ����������� �����������
   Student(const Student& qual); // ����������� ��ﳿ
   ~Student();

   //IndividualProgram* individualProgram;

protected:
private:
   string name;
   string surname;
   float rating;
   vector <IndividualProgram> individualprogram;
};

#endif