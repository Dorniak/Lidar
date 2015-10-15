#include "Obstaculo.h"

Obstaculo::Obstaculo() {

	North = gcnew Punto3D();
	South = gcnew Punto3D();
	East = gcnew Punto3D();
	West = gcnew Punto3D();
	Center = gcnew Punto3D();

	Predice_Center = gcnew Punto3D();
	Direction = gcnew Punto3D();
	Velocity = 0;
}

Punto3D^ Obstaculo::getNorth() {
	return North;
}
Punto3D^ Obstaculo::getSouth() {
	return South;
}
Punto3D^ Obstaculo::getEast() {
	return East;
}
Punto3D^ Obstaculo::getWest() {
	return West;
}
int Obstaculo::getVelocity()
{
	return Velocity;
}
Punto3D^ Obstaculo::getCenter()
{
	return Center;
}
Punto3D^ Obstaculo::getPrediceCenter()
{
	return Predice_Center;
}

void Obstaculo::setDirection(Punto3D^ antPosition)
{
	Direction = Center - antPosition;
}
void Obstaculo::setVelocity(double Car_velocity, double Frecuency)
{
	Punto3D^ v = gcnew Punto3D();
	v->setCoordinatesX(0);
	v->setCoordinatesY(Car_velocity);
	v->setCoordinatesZ(0);
	Punto3D^ w = gcnew Punto3D();
	w = Direction*Frecuency - v;
	Velocity = w->getModule();
	//TODO::Calcular el modulo del vector direccion y multiplicarlo por el tiempo de barrido v a vector, direccion - v, direciona modulo/fr
}
void Obstaculo::setNorth(Punto3D^ p) {
	North = p;
}
void Obstaculo::setSouth(Punto3D^ p) {
	South = p;
}
void Obstaculo::setEast(Punto3D^ p) {
	East = p;
}
void Obstaculo::setWest(Punto3D^ p) {
	West = p;
}

void  Obstaculo::calculateCenter()
{
	Center->setCoordinatesX((East->getCoordinatesX() + West->getCoordinatesX()) / 2);
	Center->setCoordinatesY((East->getCoordinatesY() + West->getCoordinatesY()) / 2);
	Center->setCoordinatesZ((North->getCoordinatesZ() + South->getCoordinatesZ()) / 2);
}
void  Obstaculo::calculatePrediceCenter()
{
	Predice_Center = Direction + Center;
}
void Obstaculo::calculateTimeToCollision()
{
	//TODO::Calcular el TTC a partir de la velocidad del coche y del veector direccion del obstaculo
}