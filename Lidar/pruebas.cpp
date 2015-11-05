#include "Obstaculo.h"
#include "Punto3D.h"
#include <time.h>


void Main(cli::array<String^>^ args)
{
	clock_t start, finish;
	
	Punto3D^ n = gcnew Punto3D(0,0,8);
	Punto3D^ s = gcnew Punto3D(0, 0, -8);
	Punto3D^ e = gcnew Punto3D(0, -4, 0);
	Punto3D^ w = gcnew Punto3D(0, 4, 0);
	Punto3D^ cl = gcnew Punto3D(7, 0, 0);
	Punto3D^ f = gcnew Punto3D(-7, 0, 0);
	Random^ rnd1 = gcnew Random();
	Obstaculo^ ob = gcnew Obstaculo();
	for (int i = 0; i < 20000000; i++)
	{
		ob->components->Add(gcnew Punto3D(rnd1->NextDouble(), rnd1->NextDouble(), rnd1->NextDouble()));
	}
	ob->components->Add(n);
	ob->components->Add(s);
	ob->components->Add(e);
	ob->components->Add(w);
	ob->components->Add(cl);
	ob->components->Add(f);

	start = clock();
	ob->prepareObstacle();
	finish = clock();
	double time = (finish - start) / CLOCKS_PER_SEC;
	Console::WriteLine("Tiempo {0} s  puntos {1}", time,ob->components->Count);
	ob->getNorth()->visualize();
	ob->getSouth()->visualize();
	ob->getEast()->visualize();
	ob->getWest()->visualize();

}