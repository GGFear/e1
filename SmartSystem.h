/***********************************************************************
 * Module:  SmartSystem.h
 * Author:  is7327
 * Modified: вторник, 20 ноября 2018 г. 10:07:03
 * Purpose: Declaration of the class SmartSystem
 ***********************************************************************/


#include <iostream>
#include <string>
#include <vector>
#if !defined(__ClassDiagram_1_SmartSystem_h)
#define __ClassDiagram_1_SmartSystem_h

using namespace std;

class Teacher;
class Student;
class Course;
class Elibrary;
class Classroom;

class SmartSystem
{
public:
	SmartSystem();						// конструктор за замовченням
	SmartSystem(string);				// конструктор ініціалізації
	SmartSystem(const SmartSystem& ss);	// конструктор копії
	~SmartSystem();						// деструктор

   void registration(void);
   void autorization(void);
   void diploma(void);

   std::string GetType(); // отримати тип
   void SetType(std::string); // встановити тип

   /*Teacher** teacher;
   Student** student;
   Course** course;
   Elibrary* elibrary;
   Classroom* classroom;*/

protected:
private:
   string name;
   vector <Teacher> teacher;
   vector <Student> student;
   vector <Classroom> classroom;
   vector <Course> course;
   vector <Elibrary> elibrary;

};

#endif