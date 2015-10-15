#pragma once
#include "Punto3D.h"
#include <cliext/vector>

ref class Obstaculo
{
public:
	Obstaculo();

<<<<<<< HEAD
<<<<<<< HEAD
#pragma region
=======
	void setDirection(Punto3D^ antPosition);//Pone la direccion al obstaculo
	void setVelocity();//Pone la velocidad a partir del modulo del vector de direccion

>>>>>>> origin/master
=======
	void setDirection(Punto3D antPosition);//Pone la direccion al obstaculo
	void setVelocity();//Pone la velocidad a partir del modulo del vector de direccion

>>>>>>> parent of 30cb8e0... Punto y Obstaculos totalmente implentados
	Punto3D^ getCenter();//Devuelve el centro del obstaculo
	Punto3D^ getPCenter();//Devuelve el centro predicho del obstaculo
	int getVelocity();//Devuelve a la velocidad a la que va el obstaculo

	void prepareObstacle();//Calcula los datos del obstaculo
	void calcCentro();//Calcula el centro del obstaculo
	void calcCentropred();//Calcula el centro predicho a partir de la velocidad del coche y el vector de direccion
	void calcTTC();//Calcula el tiempo de colision del obstaculo con el coche
	cliext::vector <Punto3D^> componentes ;
private:
	Punto3D^ North;;
	Punto3D^ South;
	Punto3D^ East;
	Punto3D^ West;
	Punto3D^ Center;
	Punto3D^ PrediceCenter;
	int Velocity;
};