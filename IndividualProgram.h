/***********************************************************************
 * Module:  IndividualProgram.h
 * Author:  is7327
 * Modified: вторник, 20 ноября 2018 г. 10:06:06
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

   IndividualProgram();								// конструктор за замовченням
   IndividualProgram(string, float);				// конструктор ініціалізації
   IndividualProgram(const IndividualProgram& ip);	// конструктор копії
   ~IndividualProgram();							// деструктор

   string GetName(); // отримати ім'я
   float GetMark(); // отримати оцінку

   void SetName(string); // встановити ім'я
   void SetMark(float); // встановити оцінку
   
protected:
private:

   string namecourse;
   float mark;


};

#endif