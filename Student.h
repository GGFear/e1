/***********************************************************************
 * Module:  Student.h
 * Author:  is7327
 * Modified: вторник, 20 ноября 2018 г. 10:06:06
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
	string GetName(); // отримати ім'я
	string GetSurname(); // отримати прізвище
	float GetRating(); // отримати рейтінг

	void SetName(string); // встановити ім'я
	void SetSurname(string); // встановити прізвище
	void SetRating(float); // встановити рейтінг 

   void examination(void);
   void dohw(void);
   void getmark(void);
   void createindividualprogram(void);

   Student(); // конструктор за замовченням
   Student(string, string, int); // конструктор ініціалізації
   Student(const Student& qual); // конструктор копії
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