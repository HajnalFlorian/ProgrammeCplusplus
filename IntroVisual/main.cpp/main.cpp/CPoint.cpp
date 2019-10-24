#include "CPoint.h"
#include<stdlib.h>
//geteur
int CPoint::getX()
{
	return nX;
}

int CPoint::getY()
{
	return nY;
}
//seteur
void CPoint::setX(int nX)
{
	this->nX = nX;
}

void CPoint::setY(int nY)
{
	this->nY = nY;
}
//init
void CPoint::init(int nX, int nY)
{
	this->nX = nX;
	this->nY = nY;
}
//constructeur sans parametre
CPoint::CPoint()
{
	this->nX = 0;
	this->nY = 0;
	this->pnX = new int;
	*pnX = 0;
}

CPoint::CPoint(int nX, int nY)
{
	this->nX = nX;
	this->nY = nY;
}

CPoint::~CPoint()
{
	delete(pnX);
}

