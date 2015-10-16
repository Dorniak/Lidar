#include "Obstaculo.h"
#include "Punto3D.h"


void Main(cli::array<String^>^ args)
{
	Punto3D^ p = gcnew Punto3D();
	p->setDistance(5);
	Punto3D aa;
	aa.setDistance(10);
	Console::WriteLine("distancia {0}", aa.getDistance());
	Console::WriteLine("distancia {0}",p->getDistance());
}