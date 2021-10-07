#pragma once
#include"Funcion.h"
#include"Butaca.h"

namespace GestionCinesModel {
	public ref class DetalleTicket {
	public:
		float Costo;
		Funcion^ Funcion;
		Butaca^ objButaca;
	public:
		DetalleTicket();
	};
}