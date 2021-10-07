#pragma once
#include"Pelicula.h"
#include"Sala.h"
#include"Cartelera.h"
#include"Snack.h"
using namespace System::Collections::Generic;
using namespace System;
namespace GestionCinesModel {
	public ref class Local {
	public:
		String^ Direccion;
		int Aforo;
		int NumeroDePersonal;
		String^ Ciudad;
		String^ Distrito;
		List<Pelicula^>^ ListaPeliculas;
		List<Sala^>^ ListaSalas;
		Cartelera^ objCartelera;
		List<Snack^>^ ListaSnacks;
	public:
		Local();
	};
}
