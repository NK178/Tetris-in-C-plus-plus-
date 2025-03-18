#pragma once

#include <iostream>

class CPieces
{

public:
	CPieces(void); //use singleton class design????
	static const int pieces[7][4][4]; //7 types, 4x4 matrix storage 
};
