/***********************************************************************
 * Module:  Classroom.h
 * Author:  is7327
 * Modified: �������, 20 ������ 2018 �. 10:06:50
 * Purpose: Declaration of the class Classroom
 ***********************************************************************/

#if !defined(__ClassDiagram_1_Classroom_h)
#define __ClassDiagram_1_Classroom_h
#include <string>
#include <vector>

using namespace std;

class Classroom
{
public:
   void creare(void);
   void registraition(void);

   Classroom();						// ����������� �� �����������
   Classroom(string, string);		// ����������� �����������
   Classroom(const Classroom& c);	// ����������� ��ﳿ
   ~Classroom();					// ����������

   string GetName(); // �������� ��'�
   string GetTask(); // �������� ��������

   void SetName(string); // ���������� ��'�
   void SetTask(string); // ���������� ��������
   
protected:
private:
   string name;
   string task;
};

#endif