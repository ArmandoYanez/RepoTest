#include<iostream>
using namespace std;

enum LIST_TYPE {
	LISTA_LINEAL_LIGADA = 0,
	LISTA_CIRCULAR_LIGADA = 0b01,
	LISTA_LINEAL_DLIGADA = 0b10,
	LISTA_CIRCULAR_DLIGADA
};
int main() {

	LIST_TYPE tipoDeLista= LISTA_CIRCULAR_LIGADA;
	switch (tipoDeLista)
	{
	case LISTA_LINEAL_LIGADA:
		cout << "LISTA_LINEAL_LIGADA";
		break;
	case LISTA_CIRCULAR_LIGADA:
		cout << (tipoDeLista|LISTA_LINEAL_DLIGADA);
		break;
	case LISTA_LINEAL_DLIGADA:
		cout << "LISTA_LINEAL_DLIGADA";
		break;
	case LISTA_CIRCULAR_DLIGADA:
		cout << "LISTA_LINEAL_DLIGADA";
		break;
	default:
		break;
	}
	

	return 0;
}