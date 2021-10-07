#pragma once
#include "Formato.h"
using namespace System;
using namespace System::Collections::Generic;
namespace GestionCinesModel {
	public ref class Pelicula {
	public:
		String^ Genero;
		String^ Nombre;
		int RestriccionEdad;
		String^ Sinopsis;
		int Relevancia;
		int Duracion;
		float PrecioBase;
		List<Formato^>^ ListaFormatos;
	public:
		Pelicula();
	};
}