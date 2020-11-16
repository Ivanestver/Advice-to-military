#include <iostream>
#include "ctype.h"
#include "FactoryFactory.h"
#include "IMean.h"
#include "IMeanFactory.h"
#include "MashineGun.h"
#include "MashineGunFactory.h"
#include "Tank.h"
#include "TankFactory.h"

using namespace std;

int main()
{
	while (true)
	{
		cout << "Input an attacking mean:" << endl;
		string inputMean = "";
		cin >> inputMean;

		IMeanFactory *factory = FactoryFactory::CreateFactory(inputMean);
		IMean *mean = factory->CreateMean();

		mean->Advize();

		cout << "Do you want to continue?" << endl;
		string answear = "";
		cin >> answear;
		if (answear != "yes" && answear != "Yes") {
			delete factory;
			delete mean;
			break;
		}
	}
}