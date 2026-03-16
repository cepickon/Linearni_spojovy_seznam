#pragma once
#include "LssPrvek.h"

class Lss{
public:
	Lss();
	~Lss();
	void pridejNazacatek(int data);
	void pridejNaDruh(int data);
	void pridejNaTret(int data);
	void pridejNaKonec(int data);
	void pridejKamkoliv(int data, int pozice);
	void vypis() const;
	void vypisS() const;
	void vypisL() const;
	int soucet();
	int prumer();
	int pocet();
	void prohod23();
	void zrusNaZacatku();
	void zrusNaDruh();
	void zrusNaTret();
	void zrusNaKonci();
	void zrusNaPozici(int pozice);
	void zrusVse();
private:
	LssPrvek* mPrvni;
};
