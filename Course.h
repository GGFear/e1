/***********************************************************************
 * Module:  Course.h
 * Author:  is7327
 * Modified: �������, 20 ������ 2018 �. 10:06:33
 * Purpose: Declaration of the class Course
 ***********************************************************************/

#include <iostream>
#include <string>
#if !defined(__ClassDiagram_1_Course_h)
#define __ClassDiagram_1_Course_h

using namespace std;

class Course
{
public:
   void createcourse(void);
   void editcourse(void);

   Course();								// ����������� �� �����������
   Course(string, float, float, float);		// ����������� �����������
   Course(const Course& c);					// ����������� ��ﳿ
   ~Course();								// ����������

   string GetName(); // �������� ��'�
   float GetCredits(); // �������� �������
   float GetSR(); // �������� �������� ��������
   float GetPR(); // �������� �������� ��������

   void SetName(string); // ���������� ��'�
   void SetCredits(float); // ���������� �������
   void SetSR(float); // ���������� �������� ��������
   void SetPR(float); // ���������� �������� ��������

protected:
private:
   string namecourse;
   float credits;
   float sam_rab;
   float prakt_rab;


};

#endif