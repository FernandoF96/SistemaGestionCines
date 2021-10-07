#pragma once
#include"TipoDeEntrada.h"
#include"Pelicula.h"
#include"Sala.h"
using namespace System;
using namespace System::Collections::Generic;
namespace GestionCinesModel {
	public ref class Funcion {
	public:
		String^ HoraInicio;
		Pelicula^ objPelicula;
		Sala^ objSala;
		List<TipoDeEntrada^>^ ListaTiposDeEntradas;
	public:
		Funcion();
	};
}