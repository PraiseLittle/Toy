#pragma once
#include "PhoXi.h"
#include <iostream>
namespace ToyCpp {

	class __declspec(dllexport) ToyUse{

	private:
		double number1;
		double number2;

	public:
		ToyUse(double, double);
		~ToyUse();

		double DoCalculation();
		int TryPhoxi();

	};
}

