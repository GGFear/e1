/***********************************************************************
 * Module:  Course.h
 * Author:  is7327
 * Modified: вторник, 20 ноября 2018 г. 10:06:33
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

   Course();								// конструктор за замовченням
   Course(string, float, float, float);		// конструктор ініціалізації
   Course(const Course& c);					// конструктор копії
   ~Course();								// Деструктор

   string GetName(); // отримати ім'я
   float GetCredits(); // отримати кредити
   float GetSR(); // отримати самостійні завдання
   float GetPR(); // отримати практичні завдання

   void SetName(string); // встановити ім'я
   void SetCredits(float); // встановити кредити
   void SetSR(float); // встановити самостійні завдання
   void SetPR(float); // встановити практичні завдання

protected:
private:
   string namecourse;
   float credits;
   float sam_rab;
   float prakt_rab;


};

#endif