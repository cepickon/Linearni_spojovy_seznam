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
	void vypis() const;
	void zrusNaZacatku();
	void zrusNaDruh();
	void zrusNaTret();
	void zrusNaKonci();
	void zrusVse();
	void vypisS() const;
	void vypisL() const;
	int soucet();
	int prumer();
	int pocet();
	void prohod23();
private:
	LssPrvek* mPrvni;
};
