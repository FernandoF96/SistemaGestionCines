#pragma once
#include "Usuario.h"
using namespace System;
namespace GestionCinesModel {
	public ref class Trabajador:Usuario {
	public:
		int CodigoTrabajador;
		String^ TipoTrabajador;
	public:
		Trabajador();
	};
}