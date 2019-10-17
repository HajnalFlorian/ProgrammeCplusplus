#pragma once
#include <iostream>
//Point dans un pplan
class CPoint
{
private:
	//Données membres de la classe 
	int nX;
	int nY;
public:
	//Prototype ou déclarations 
	int getX();
	int getY();

	void setX(int nX);
	void setY(int nY);

};

