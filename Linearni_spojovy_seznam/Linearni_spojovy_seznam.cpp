#include <iostream>
#include "LssPrvek.h"
#include "Lss.h"

int main() {
	Lss seznam;
	std::cout << "Puvodni vypis cisel ";
	seznam.pridejNazacatek(3);
	seznam.pridejNazacatek(1);
	seznam.pridejNazacatek(5);
	seznam.pridejNazacatek(2);
	seznam.pridejNazacatek(4);
	seznam.vypis();
	std::cout << "Vypis sudych cisel ";
	seznam.vypisS();
	std::cout << "Vypis lichych cisel ";
	seznam.vypisL();
	std::cout << "Soucet:" << seznam.soucet() << std::endl;
	std::cout << "Pocet:" << seznam.pocet() << std::endl;
	std::cout << "Prumer:" << seznam.prumer() << std::endl;

	seznam.pridejNaDruh(6);
	seznam.vypis();
	seznam.zrusNaZacatku();
	seznam.vypis();
	seznam.zrusNaDruh();
	seznam.vypis();
	seznam.zrusVse();
	seznam.vypis();
	std::cout << std::endl;
}
