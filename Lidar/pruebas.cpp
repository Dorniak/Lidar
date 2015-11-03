#include "Obstaculo.h"
#include "Punto3D.h"


void Main(cli::array<String^>^ args)
{
	Punto3D^ p;
	Punto3D^ aa;
	p->setCoordinatesX(0);
	p->setCoordinatesY(0);
	p->setCoordinatesZ(1);
	aa->setCoordinatesX(0);
	aa->setCoordinatesY(0);
	aa->setCoordinatesZ(2);
	aa->distanceToPoint(p);
	Console::WriteLine("Distancia {0}", aa->distanceToPoint(p));
}