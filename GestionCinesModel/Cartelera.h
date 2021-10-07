#pragma once
#include"Funcion.h"
using namespace System;
using namespace System::Collections::Generic;
namespace GestionCinesModel {
	public ref class Cartelera {
	public:
		String^ Fecha;
		String^ Dia;
		List<Funcion^>^ ListaFunciones;
	public:
		Cartelera();
	};
}