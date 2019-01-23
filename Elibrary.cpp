/***********************************************************************
 * Module:  Elibrary.cpp
 * Author:  is7327
 * Modified: вторник, 20 ноября 2018 г. 10:06:18
 * Purpose: Implementation of the class Elibrary
 ***********************************************************************/

#include "stdafx.h"
#include "Elibrary.h"
#include <iostream>

using namespace std;

void Elibrary::SetVideo(string v) // встановити відео
{
	videolecture = v;
}
void Elibrary::SetVeb(string veb) // встановити вебінари
{
	vebinari = veb;
}
void Elibrary::SetPZ(string pz) // встановити практичні завдання
{
	prakt_zavd = pz;
}
void Elibrary::SetSZ(string sz) // встановити самостійні завдання
{
	sam_zavd = sz;
}
string Elibrary::GetVideo() // отримати відеолекцію
{
	return videolecture;
}
string Elibrary::GetVeb() // отримати вебінари
{
	return vebinari;
}
string Elibrary::GetPZ() // отримати практичні завадання
{
	return prakt_zavd;
}
string Elibrary::GetSZ() // отримати самостійні завдання
{
	return sam_zavd;
}

Elibrary::Elibrary() :
	videolecture(""),
	vebinari(""),
	prakt_zavd(""),
	sam_zavd("")
{
}

Elibrary::Elibrary(string video, string veb, string pz, string sz) :
	videolecture(video),
	vebinari(veb),
	prakt_zavd(pz),
	sam_zavd(sz)
{

}

Elibrary::Elibrary(const Elibrary& library) :
	videolecture(library.videolecture),
	vebinari(library.vebinari),
	prakt_zavd(library.prakt_zavd),
	sam_zavd(library.sam_zavd)
{
}

Elibrary::~Elibrary()
{
}

void Elibrary::use(void)
{
	cout << "Elibrary was used." << endl;
	if (true)
	{
		edit();
	}
}


void Elibrary::edit(void)
{
	cout << "Elibrary was edited." << endl;
}