#pragma once
#include "IMean.h"
#include <iostream>

using namespace std;

class Tank : public IMean
{
public:
	~Tank() {};

	void Advize() override {
		cout << "You should use a Tank" << endl;
	}

private:

};