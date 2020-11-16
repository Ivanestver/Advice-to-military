#include "IMean.h"

#pragma once
class IMeanFactory
{
public:
	IMeanFactory()
	{
	}

	~IMeanFactory()
	{
	}

	virtual IMean* CreateMean() = 0;

private:

};