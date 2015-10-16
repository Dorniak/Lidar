#include "Obstaculo.h"

#pragma region Constructor

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

#pragma endregion

#pragma region Getters Implementation

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
double Obstaculo::getVelocity()
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

#pragma endregion

#pragma region Setters Implementation

void Obstaculo::setDirection(Punto3D^ Previous_Position)
{
	Direction = Center - Previous_Position;
}
void Obstaculo::setVelocity(double Car_velocity, double Frecuency)
{
	Punto3D^ velocity_vector = gcnew Punto3D();
	velocity_vector->setCoordinatesY(Car_velocity);

	Velocity = (Direction*Frecuency - velocity_vector)->getModule();//m/s
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

#pragma endregion

#pragma region Others

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

#pragma endregion