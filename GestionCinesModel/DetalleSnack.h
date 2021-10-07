#pragma once
#include "Snack.h"

namespace GestionCinesModel {
	public ref class DetalleSnack {
	public:
		float Costo;
		Snack^ objSnack;
	public:
		DetalleSnack();
	};
}