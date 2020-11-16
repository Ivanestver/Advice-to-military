#pragma once
#include "IMean.h"
#include "IMeanFactory.h"
#include "MashineGun.h"
class MashineGunFactory : public IMeanFactory
{
public:
	MashineGunFactory()
	{

	}

	~MashineGunFactory()
	{

	}

	// Унаследовано через IMeanFactory
	IMean* CreateMean() override
	{
		return new MashineGun;
	}

private:

};