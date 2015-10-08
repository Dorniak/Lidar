#include "Obstaculo.h"
Obstaculo::Obstaculo() {


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