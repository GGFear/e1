/***********************************************************************
 * Module:  Classroom.h
 * Author:  is7327
 * Modified: вторник, 20 ноября 2018 г. 10:06:50
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

   Classroom();						// конструктор за замовченням
   Classroom(string, string);		// конструктор ініціалізації
   Classroom(const Classroom& c);	// конструктор копії
   ~Classroom();					// Деструктор

   string GetName(); // отримати ім'я
   string GetTask(); // отримати завдання

   void SetName(string); // встановити ім'я
   void SetTask(string); // встановити завдання
   
protected:
private:
   string name;
   string task;
};

#endif