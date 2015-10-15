#include "Obstaculo.h"
Obstaculo::Obstaculo() {

<<<<<<< HEAD
	North = gcnew Punto3D();
	South = gcnew Punto3D();
	East = gcnew Punto3D();
	West = gcnew Punto3D();
	Center = gcnew Punto3D();

	Predice_Center = gcnew Punto3D();
	Direction = gcnew Punto3D();
	Velocity = 0;
}
<<<<<<< HEAD

Punto3D^ Obstaculo::getNorth(){
	return North;
}
Punto3D^ Obstaculo::getSouth(){
	return South;
}
Punto3D^ Obstaculo::getEast(){
	return East;
=======
void Obstaculo::setDirection(Punto3D ^antPosition)
{
	//TODO::Calcular el vector direccion restando las componentesdel centro actual menos el centro anterior
>>>>>>> origin/master
=======

>>>>>>> parent of 30cb8e0... Punto y Obstaculos totalmente implentados
}
void Obstaculo::setDirection(Punto3D antPosition)
{
	//TODO::Calcular el vector direccion restando las componentesdel centro actual menos el centro anterior
}
void Obstaculo::setVelocity()
{
	//TODO::Calcular el modulo del vector direccion y multiplicarlo por el tiempo de barrido
}
Punto3D^ Obstaculo::getCenter()
{
	return Center;
}
Punto3D^ Obstaculo::getPCenter()
{
	return PrediceCenter;
}
int Obstaculo::getVelocity()
{
	return Velocity;
}
void Obstaculo::prepareObstacle()
{
	//TODO::Hacer el calculo del cubo,centro,bordes...
}
void  Obstaculo::calcCentro()
{

}
void  Obstaculo::calcCentropred()
{

}
void Obstaculo::calcTTC()
{
	//TODO::Calcular el TTC a partir de la velocidad del coche y del veector direccion del obstaculo
}