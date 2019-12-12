#include "pch.h"
#include "ToyUse.h"


namespace ToyCpp{
	ToyUse::ToyUse(double n1, double n2) {
		number1 = n1;
		number2 = n2;
	}

	ToyUse::~ToyUse(){}

	double ToyUse::DoCalculation() {
		return number1 + number2;
	}

	int ToyUse::TryPhoxi() {
		pho::api::PhoXiFactory Factory;

		//Check if the PhoXi Control Software is running
		if (!Factory.isPhoXiControlRunning())
		{
			std::cout << "PhoXi Control Software is not running" << std::endl;
			return 0;
		}

	}

}