#include <iostream>
#include <cmath>
#include<stdlib.h>
#include "CPoint.h"
using namespace std; //si retirer cin et cout ne fonctionne plus

//Exemple de programme en C ++

//POO C++
//Class (Donnée et méthode) 



int main()
{
	CPoint ptMonPoint;
	ptMonPoint.setX(0);
	ptMonPoint.setY(0);
	cout << "X : " << ptMonPoint.getX()<< endl;
	cout << "Y : " << ptMonPoint.getY()<< endl;



	system("pause");

	return 0;
}