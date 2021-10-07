#pragma once
using namespace System;
namespace GestionCinesModel {
	public ref class Snack {
	public:
		String^ Nombre;
		String^ Descripcion;
		int Costo;
		String^ Codigo;
	public:
		Snack();
	};
}