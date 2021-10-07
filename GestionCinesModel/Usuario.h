#pragma once

using namespace System;
namespace GestionCinesModel {
	public ref class Usuario {
	public:
		String^ Nombre;
		String^ Contrasena;
		String^ Apellidos;
		String^ Correo;
		int Edad;
		String^ DNI;
		String^ Rol;
	public:
		Usuario();
	};
}