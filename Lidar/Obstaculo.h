#pragma once
#include "Punto3D.h"

public class Obstaculo
{
public:
	Obstaculo();
	double get;
	void calcCentro();
	void calcCentropred();
	std::vector <Punto3D> componentes;
private:
	Punto3D* North;
	Punto3D* South;
	Punto3D* East;
	Punto3D* West;
	Punto3D Center;
};
