/***********************************************************************
 * Module:  Teacher.h
 * Author:  is7327
 * Modified: вторник, 20 ноября 2018 г. 10:07:03
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
	string GetName(); // отримати ім'я
	string GetSurname(); // отримати прізвище
	string GetSubject(); // отримати предмет
	int GetQualification(); // отримати кваліфікацію

	void SetName(string); // встановити ім'я
	void SetSurname(string); // встановити прізвище
	void SetSubject(string); // встановити предмет
	void SetQualification(int); // встановити кваліфікацію

   void checkexam(void);
   void checktests(void);
   void checkhw(void);
   void helpstudents(void);
   void createprograme(void);

   Teacher();																				// конструктор за замовченням
   Teacher(const Teacher& teach);															// конструктор ініціалізації
   Teacher(string firstname, string surname, string subject, int qualification);			// конструктор копії
   Teacher(string);																			// конструктор перетворення
   Teacher(short qual);																		// деструктор
   ~Teacher();
protected:
private:
	string name;
	string surname;
    string subject;
    int qualification;
};

#endif