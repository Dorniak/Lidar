#pragma once
#include "Punto3D.h"
#include <cliext/vector>

ref class Obstaculo
{
public:
	Obstaculo();

#pragma region
	Punto3D^ getCenter();//Devuelve el centro del obstaculo
	Punto3D^ getPrediceCenter();//Devuelve el centro predicho del obstaculo
	Punto3D^ getNorth();
	Punto3D^ getSouth();
	Punto3D^ getEast();
	Punto3D^ getWest();
#pragma endregion Getters

#pragma region
	void setNorth(Punto3D^ p);
	void setSouth(Punto3D^ p);
	void setEast(Punto3D^ p);
	void setWest(Punto3D^ p);
#pragma endregion Setters


	void setDirection(Punto3D^ antPosition);//Pone la direccion al obstaculo
	void setVelocity(double Car_velocity, double Frecuency);//Pone la velocidad a partir del modulo del vector de direccion
	int getVelocity();//Devuelve a la velocidad a la que va el obstaculo
	void calculateCenter();//Calcula el centro del obstaculo
	void calculatePrediceCenter();//Calcula el centro predicho a partir de la velocidad del coche y el vector de direccion
	void calculateTimeToCollision();//Calcula el tiempo de colision del obstaculo con el coche

private:
	Punto3D^ North;;
	Punto3D^ South;
	Punto3D^ East;
	Punto3D^ West;
	Punto3D^ Center;
	Punto3D^ Predice_Center;
	Punto3D^ Direction;
	double Velocity;
	cliext::vector <Punto3D^> components;
};