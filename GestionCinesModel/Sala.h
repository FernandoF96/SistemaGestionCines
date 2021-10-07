#pragma once
#include "Butaca.h"
#include "Formato.h"
using namespace System;
using namespace System::Collections::Generic;
namespace GestionCinesModel {
	public ref class Sala {
	public:
		int Aforo;
		String^ Nombre;
		Formato^ objFormato;
		List<Butaca^> ^ ListaButacas;
	public:
		Sala();
	};
}