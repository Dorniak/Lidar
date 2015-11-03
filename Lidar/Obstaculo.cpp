#include "Obstaculo.h"

#pragma region Constructor

Obstaculo::Obstaculo(const Obstaculo % copy)
{
	North = copy.North;
	South = copy.South;
	East = copy.East;
	West = copy.West;
	Center = copy.Center;
	Predice_Center = copy.Predice_Center;
	Direction = copy.Direction;
	Velocity = copy.Velocity;
	/*for (int i = 0, i < copy.components.size(), i++) {
		components.push_back(copy.components[i]);
	}*/
}

/// <summary>
/// Initializes a new instance of the <see cref="Obstaculo"/> class.
/// </summary>
Obstaculo::Obstaculo() {
	Velocity = 0;
}

#pragma endregion

#pragma region Getters Implementation

/// <summary>
/// Gets the north.
/// </summary>
/// <returns></returns>
Punto3D^ Obstaculo::getNorth() {
	return North;
}
/// <summary>
/// Gets the south.
/// </summary>
/// <returns></returns>
Punto3D^ Obstaculo::getSouth() {
	return South;
}
/// <summary>
/// Gets the east.
/// </summary>
/// <returns></returns>
Punto3D^ Obstaculo::getEast() {
	return East;
}
/// <summary>
/// Gets the west.
/// </summary>
/// <returns></returns>
Punto3D^ Obstaculo::getWest() {
	return West;
}
/// <summary>
/// Gets the velocity.
/// </summary>
/// <returns></returns>
double Obstaculo::getVelocity()
{
	return Velocity;
}
/// <summary>
/// Gets the center of the obstacle.
/// </summary>
/// <returns></returns>
Punto3D^ Obstaculo::getCenter()
{
	return Center;
}
/// <summary>
/// Gets the predict center.
/// </summary>
/// <returns></returns>
Punto3D^ Obstaculo::getPrediceCenter()
{
	return Predice_Center;
}

#pragma endregion

#pragma region Setters Implementation

/// <summary>
/// Sets the direction of the obstacle.
/// </summary>
/// <param name="Previous_Position">The previous_ position.</param>
void Obstaculo::setDirection(Punto3D^ Previous_Position)
{
	Direction = Center - Previous_Position;
}
/// <summary>
/// Sets the velocity.
/// </summary>
/// <param name="Car_velocity">The car velocity.</param>
/// <param name="Frecuency">The frecuency of the LIDAR.</param>
void Obstaculo::setVelocity(double Car_velocity, double Frecuency)
{
	/*Punto3D^ velocity_vector = gcnew Punto3D();*/
	Punto3D^ velocity_vector;
	velocity_vector->setCoordinatesY(Car_velocity);

	Velocity = (Direction*Frecuency - velocity_vector)->getModule();//m/s
//TODO::Calcular el modulo del vector direccion y multiplicarlo por el tiempo de barrido v a vector, direccion - v, direciona modulo/fr
}
/// <summary>
/// Sets the north.
/// </summary>
/// <param name="p">The North.</param>
void Obstaculo::setNorth(Punto3D^ p) {
	North = p;
}
/// <summary>
/// Sets the south.
/// </summary>
/// <param name="p">The South.</param>
void Obstaculo::setSouth(Punto3D^ p) {
	South = p;
}
/// <summary>
/// Sets the east.
/// </summary>
/// <param name="p">The East.</param>
void Obstaculo::setEast(Punto3D^ p) {
	East = p;
}
/// <summary>
/// Sets the west.
/// </summary>
/// <param name="p">The West.</param>
void Obstaculo::setWest(Punto3D^ p) {
	West = p;
}

#pragma endregion

#pragma region Others

/// <summary>
/// Calculates the center of the obstacle.
/// </summary>
void  Obstaculo::calculateCenter()
{
	Center->setCoordinatesX((East->getCoordinatesX() + West->getCoordinatesX()) / 2);
	Center->setCoordinatesY((East->getCoordinatesY() + West->getCoordinatesY()) / 2);
	Center->setCoordinatesZ((North->getCoordinatesZ() + South->getCoordinatesZ()) / 2);
}
/// <summary>
/// Calculates the predict center of the obstacle.
/// </summary>
void  Obstaculo::calculatePrediceCenter()
{
	Predice_Center = Direction + Center;
}
/// <summary>
/// Calculates the time to collision.
/// </summary>
void Obstaculo::calculateTimeToCollision()
{
	//TODO::Calcular el TTC a partir de la velocidad del coche y del veector direccion del obstaculo
}

#pragma endregion