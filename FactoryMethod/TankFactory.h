#pragma once
#include "IMean.h"
#include "IMeanFactory.h"
#include "Tank.h"

class TankFactory : public IMeanFactory
{
public:
	TankFactory()
	{
		
	}

	~TankFactory()
	{
		
	}

	IMean* CreateMean() override {
		return new Tank;
	}

private:
	
};