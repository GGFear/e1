/***********************************************************************
 * Module:  IndividualProgram.h
 * Author:  is7327
 * Modified: �������, 20 ������ 2018 �. 10:06:06
 * Purpose: Declaration of the class IndividualProgram
 ***********************************************************************/


#include <iostream>
#include <string>
#if !defined(__ClassDiagram_1_IndividualProgram_h)
#define __ClassDiagram_1_IndividualProgram_h

using namespace std;

class IndividualProgram
{
public:
   void create(void);
   bool pass(void);

   IndividualProgram();								// ����������� �� �����������
   IndividualProgram(string, float);				// ����������� �����������
   IndividualProgram(const IndividualProgram& ip);	// ����������� ��ﳿ
   ~IndividualProgram();							// ����������

   string GetName(); // �������� ��'�
   float GetMark(); // �������� ������

   void SetName(string); // ���������� ��'�
   void SetMark(float); // ���������� ������
   
protected:
private:

   string namecourse;
   float mark;


};

#endif