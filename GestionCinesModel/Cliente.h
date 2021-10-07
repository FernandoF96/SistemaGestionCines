#pragma once
#include"Usuario.h"
namespace GestionCinesModel {
	public ref class Cliente:Usuario {
	public:
		int NumeroTarjeta;
		int CodigoCVV;
		int CodigoCliente;
	public:
		Cliente();
	};
}