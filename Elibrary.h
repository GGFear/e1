/***********************************************************************
 * Module:  Elibrary.h
 * Author:  is7327
 * Modified: �������, 20 ������ 2018 �. 10:06:18
 * Purpose: Declaration of the class Elibrary
 ***********************************************************************/


#include <iostream>
#include <string>
#if !defined(__ClassDiagram_1_Elibrary_h)
#define __ClassDiagram_1_Elibrary_h

using namespace std;

class Elibrary
{
public:
   void use(void);


   Elibrary();									// ����������� �� �����������
   Elibrary(string, string, string, string);	// ����������� �����������
   Elibrary(const Elibrary& library);			// ����������� ��ﳿ
   ~Elibrary();									// ���������� 

   string GetVideo(); // �������� ����������
   string GetVeb(); // �������� �������
   string GetPZ(); // �������� �������� ���������
   string GetSZ(); // �������� �������� ��������
   

   void SetVideo(string); // ���������� ����
   void SetVeb(string); // ���������� �������
   void SetPZ(string); // ���������� �������� ��������
   void SetSZ(string); // ���������� �������� ��������

protected:
private:
	void edit(void);

   string videolecture;
   string vebinari;
   string prakt_zavd;
   string sam_zavd;
};

#endif