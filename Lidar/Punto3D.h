#pragma once
#include <math.h>
using namespace System;
using namespace std;
#define X_AXE_CORRECTION 0
#define Y_AXE_CORRECTION 0
#define Z_AXE_CORRECTION 0

ref class Punto3D
{
public:
	Punto3D::Punto3D(const Punto3D %copy);
#pragma region Constructors Definitions
	Punto3D(double d, double i, double r, double a);
	Punto3D();
#pragma endregion

#pragma region  Setters Definitions
	void setObstacle(int Obs);
	void setCoordinatesX(double cx);
	void setCoordinatesY(double cy);
	void setCoordinatesZ(double cz);
	void setDistance(double d);
	void setIntensity(double i);
	void setAzimuth(double r);
	void setDistance(Byte i, Byte j);
	void setIntensity(Byte i);
	void setAzimuth(Byte i, Byte j);
	void setAngle(int channel);
#pragma endregion

#pragma region Getters Definitions
	int getObstacle();
	double getCoordinatesX();
	double getCoordinatesY();
	double getCoordinatesZ();
	double getDistance();
	double getIntensity();
	double getAzimuth();
	double getAngle();
	double getModule();
#pragma endregion

#pragma region Others

	void CalculateCoordinates();
	double distanceToPoint(Punto3D^ p);
	Punto3D operator-(Punto3D^ v);
	Punto3D operator=(Punto3D^ v);
	Punto3D operator+(Punto3D^ v);
	Punto3D operator*(double d);

#pragma endregion

private:

#pragma region  Propierties
	int Obstacle;		// Obstacle that contains the point
	double Intensity;	// Bounced beam intensity
	double Distance;	// Distance to the point
	double Azimuth;		// Horizontal angle Y-X
	double Angle;		// Vertical angle Laser Id Z-Y
	double x;			// X coordinate of the point
	double y;			// Y coordinate of the point
	double z;			// Z coordinate of the point

#pragma endregion
};
