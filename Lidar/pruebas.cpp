#include "Obstaculo.h"
#include "Punto3D.h"


void Main(cli::array<String^>^ args)
{
	Punto3D^ p = gcnew Punto3D();
	p->setDistance(5);

	Console::WriteLine("distancia {0}",p->getDistance());
}