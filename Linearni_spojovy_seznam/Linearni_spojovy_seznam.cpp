#include <iostream>
#include "LssPrvek.h" 
#include "Lss.h"

int main() {
	Lss seznam;
	seznam.pridejNazacatek(3);
	seznam.pridejNazacatek(1);
	seznam.pridejNazacatek(5);
	seznam.pridejNazacatek(2);
	seznam.pridejNazacatek(4);
	seznam.vypis();
	seznam.vypisS();
	seznam.vypisL();
	std::cout<< "Soucet: " << seznam.soucet() << std::endl;
	std::cout << "Pocet: " << seznam.pocet() << std::endl;
	std::cout << "Prumer: " << seznam.prumer() << std::endl;

	seznam.pridejDva(0);
	seznam.vypis();

	seznam.zrusNaZacatku();
	seznam.vypis();
	seznam.zrusVse();
	std::cout << std::endl;
}
