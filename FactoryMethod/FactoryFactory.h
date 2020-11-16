#pragma once
#include "IMeanFactory.h"
#include "TankFactory.h"
#include "MashineGunFactory.h"

class FactoryFactory
{
public:
	FactoryFactory()
	{
	}

	~FactoryFactory()
	{
	}
	FactoryFactory& operator*() {
		cout << "Ptr" << endl;
	}

	static IMeanFactory* CreateFactory(string factory) {
		if (factory == "Tank") {
			return new TankFactory();
		}
		else {
			return new MashineGunFactory;
		}
	}

private:

};