﻿// ver3(+).cpp: определяет точку входа для консольного приложения.
//


#include "stdafx.h"
#include "SmartSystem.h"

using namespace std;

int main()
{
	cout << "Start" << endl;
	SmartSystem name;
	name.registration();
	cout << endl;
	cout << "Finish" << endl;
	system("pause");
    return 0;
}

