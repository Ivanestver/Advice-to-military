#pragma once
#include "IMean.h"
#include <iostream>
using namespace std;

class MashineGun : public IMean
{
public:
	MashineGun()
	{
	}

	~MashineGun()
	{
	}

	void Advize() override {
		cout << "You should use a MashineGun" << endl;
	}

private:

};