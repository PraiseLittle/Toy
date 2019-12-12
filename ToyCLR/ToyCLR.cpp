#include "pch.h"

#include "ToyCLR.h"

namespace ToyCLR {
	ToyUse::ToyUse(double n1, double n2): ManagedObject(new ToyCpp::ToyUse(n1,n2)) 
	{
		Console::WriteLine("Creating the Wrapper");
	}

	double ToyUse::DoCalculation() {
		Console::WriteLine("DO CALCULATION");
		return m_Instance->DoCalculation();
	}

	int ToyUse::TryPhoxi() {
		Console::WriteLine("Read Phoxi");
		return m_Instance->TryPhoxi();
	}
}
