#include "Serializer.hpp"

Serializer::Serializer() {}

Serializer::Serializer(const Serializer &param) { (void)param; }

Serializer::~Serializer() {}

Serializer &Serializer::operator=(const Serializer &param) {
	(void)param;
	return (*this);
}

// recebe um ponteiro para um objeto do tipo Data e o converte 
// para o tipo uintptr_t (um tipo de inteiro sem sinal que pode armazenar ponteiros)
uintptr_t Serializer::serialize(Data *ptr) {
	return (reinterpret_cast<uintptr_t>(ptr));
}

// recebe um valor uintptr_t e o converte de volta para um ponteiro do tipo Data
Data *Serializer::deserialize(uintptr_t raw) {
	return (reinterpret_cast<Data *>(raw));
}