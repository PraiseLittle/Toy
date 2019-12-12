#pragma once
#include "ManagedObject.h"
#include "ToyUse.h"
using namespace System;


namespace ToyCLR {
	public ref class ToyUse: public ManagedObject<ToyCpp::ToyUse>
	{
	public:
		ToyUse(double, double);

		double DoCalculation();

		int TryPhoxi();

	};
}
