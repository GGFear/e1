/***********************************************************************
 * Module:  Teacher.h
 * Author:  is7327
 * Modified: �������, 20 ������ 2018 �. 10:07:03
 * Purpose: Declaration of the class Teacher
 ***********************************************************************/

#include <iostream>
#include <string>
#if !defined(__ClassDiagram_1_Teacher_h)
#define __ClassDiagram_1_Teacher_h

using namespace std;

class Teacher
{
public:
	string GetName(); // �������� ��'�
	string GetSurname(); // �������� �������
	string GetSubject(); // �������� �������
	int GetQualification(); // �������� �����������

	void SetName(string); // ���������� ��'�
	void SetSurname(string); // ���������� �������
	void SetSubject(string); // ���������� �������
	void SetQualification(int); // ���������� �����������

   void checkexam(void);
   void checktests(void);
   void checkhw(void);
   void helpstudents(void);
   void createprograme(void);

   Teacher();																				// ����������� �� �����������
   Teacher(const Teacher& teach);															// ����������� �����������
   Teacher(string firstname, string surname, string subject, int qualification);			// ����������� ��ﳿ
   Teacher(string);																			// ����������� ������������
   Teacher(short qual);																		// ����������
   ~Teacher();
protected:
private:
	string name;
	string surname;
    string subject;
    int qualification;
};

#endif