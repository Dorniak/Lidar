#include "Obstaculo.h"
#include "Punto3D.h"


void Main(cli::array<String^>^ args)
{
	Punto3D^ p = gcnew Punto3D();
	Obstaculo^ o = gcnew Obstaculo();

	p->setCoordinatesX(2);
	p->setCoordinatesY(6);
	p->setCoordinatesZ(3);
	o->setNorth(p);
	Punto3D^ j = gcnew Punto3D();
	j->setCoordinatesX(1);
	j->setCoordinatesY(1);
	j->setCoordinatesZ(4);
	o->setSouth(p);

	p->setCoordinatesX(6);
	p->setCoordinatesY(6);
	p->setCoordinatesZ(3);
	o->setWest(p);

	p->setCoordinatesX(1);
	p->setCoordinatesY(3);
	p->setCoordinatesZ(3);
	o->setEast(p);
	
	o->calculateCenter();
	
	//Console::WriteLine("Centro ({0},{1},{2})",o->getCenter()->getCoordinatesX(), o->getCenter()->getCoordinatesY(), o->getCenter()->getCoordinatesZ());
	Punto3D^ u = gcnew Punto3D();
	u = p - j;
	Console::WriteLine("p {0},{1},{2}", p->getCoordinatesX(), p->getCoordinatesY(), p->getCoordinatesZ());
	Console::WriteLine("j {0},{1},{2}", j->getCoordinatesX(), j->getCoordinatesY(), j->getCoordinatesZ());
	Console::WriteLine("suma {0},{1},{2}",u->getCoordinatesX(),u->getCoordinatesY(),u->getCoordinatesZ());
}