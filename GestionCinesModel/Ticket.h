#pragma once
#include "DetalleTicket.h"
#include"DetalleSnack.h"
#include "Cliente.h"
using namespace System;
using namespace System::Collections::Generic;
namespace GestionCinesModel {
	public ref class Ticket {
	public:
		String^ Fecha;
		float CostoTotal;
		float IGV;
		List<DetalleTicket^>^ ListaDetallesTickets;
		List<DetalleSnack^>^ ListaDetallesSnack;
		Cliente^ objCliente;
		String^ Codigo;
		float Subtotal;
	public:
		Ticket();
	};
}