#include "Punto3D.h"


Punto3D::Punto3D(double d, double i, double r) {
	Distance = d;
	Intensity = i;
	Azimuth = r;
	x = 0;
	y = 0;
	z = 0;
}
Punto3D::Punto3D() {
	Distance = -1;
	Intensity = -1;
	Azimuth = -1;
	x = 0;
	y = 0;
	z = 0;
}
void Punto3D::setExist(bool ex)
{
	Exist = ex;
}
void Punto3D::setObstacle(int Obs)
{
	Obstacle = Obs;
}
void Punto3D::setCoordinatesX(double cx) {
	x = cx;
}
void Punto3D::setCoordinatesY(double cy) {
	y = cy;
}
void Punto3D::setCoordinatesZ(double cz) {
	z = cz;
}
void Punto3D::setDistance(double d) {
	//Distance = d;
	Distance = d + 2;
}
void Punto3D::setIntensity(double i) {
	Intensity = i;
}
void Punto3D::setAzimuth(double r) {
	Azimuth = r;
}
void Punto3D::setDistance(Byte i, Byte j)
{
	Distance = i + (j << 8);
	Distance /= 500; //Distance * 2 and convert from mm to m (/1000)
}
void Punto3D::setIntensity(Byte i)
{
	Intensity = i;
}
void Punto3D::setAzimuth(Byte i, Byte j)
{
	Azimuth = i + (j << 8);
	Azimuth /= 100;
}
void Punto3D::setAngle(int channel)
{
	switch (channel)
	{
	case 0: Angle = -15; break;
	case 1: Angle = 1; break;
	case 2: Angle = -13; break;
	case 3: Angle = 3; break;
	case 4: Angle = -11; break;
	case 5: Angle = 5; break;
	case 6: Angle = -9; break;
	case 7: Angle = 7; break;
	case 8: Angle = -7; break;
	case 9: Angle = 9; break;
	case 10: Angle = -5; break;
	case 11: Angle = 11; break;
	case 12: Angle = -3; break;
	case 13: Angle = 13; break;
	case 14: Angle = -1; break;
	case 15: Angle = 15; break;
	}
}
void Punto3D::visualize() {
	Console::WriteLine("Distance: {0}\t Intensidad: {1}\t Aimuth {2}",Distance,Intensity,Azimuth);
}
bool Punto3D::getExists()
{
	return	Exist;
}
int Punto3D::getObs()
{
	return Obstacle;
}
double Punto3D::getCoordinatesX() {
	return x;
}
double Punto3D::getCoordinatesY() {
	return y;
}
double Punto3D::getCoordinatesZ() {
	return z;
}
double Punto3D::getDistance() {
	return Distance;
}
double Punto3D::getIntensity() {
	return Intensity;
}
double Punto3D::getAzimuth() {
	return Azimuth;
}
double Punto3D::distanceToPoint(Punto3D p)
{
	double x = Math::Pow(p.getCoordinatesX() - this->getCoordinatesX(), 2);
	double y = Math::Pow(p.getCoordinatesY() - this->getCoordinatesY(), 2);
	double z = Math::Pow(p.getCoordinatesZ() - this->getCoordinatesZ(), 2);
	return Math::Sqrt(x + y + z);
}
double Punto3D::getAngle()
{
	return Angle;
}