#pragma once
#include <iostream>
//Point dans un pplan
class CPoint
{
private:
	//Données membres de la classe 
	int nX;
	int nY;

	int* pnX;
public:
	//Prototype ou déclarations 
	int getX();
	int getY();

	void setX(int nX);
	void setY(int nY);
	 //init
	void init(int nX, int nY);

	//constructeur
	CPoint();

	//constructeur avecc parametre
	CPoint(int nX, int nY);
	//destructeur
	~CPoint();
};

