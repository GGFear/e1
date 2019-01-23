/***********************************************************************
 * Module:  Elibrary.h
 * Author:  is7327
 * Modified: вторник, 20 ноября 2018 г. 10:06:18
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


   Elibrary();									// конструктор за замовченням
   Elibrary(string, string, string, string);	// конструктор ініціалізації
   Elibrary(const Elibrary& library);			// конструктор копії
   ~Elibrary();									// деструктор 

   string GetVideo(); // отримати відеолекцію
   string GetVeb(); // отримати вебінари
   string GetPZ(); // отримати практичні завадання
   string GetSZ(); // отримати самостійні завдання
   

   void SetVideo(string); // встановити відео
   void SetVeb(string); // встановити вебінари
   void SetPZ(string); // встановити практичні завдання
   void SetSZ(string); // встановити самостійні завдання

protected:
private:
	void edit(void);

   string videolecture;
   string vebinari;
   string prakt_zavd;
   string sam_zavd;
};

#endif