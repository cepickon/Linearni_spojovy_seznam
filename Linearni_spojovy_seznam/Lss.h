#pragma once 
#include "LssPrvek.h"

class Lss{
public: 
	  Lss();
	  ~Lss();
	  void pridejNazacatek(int data);
	  void pridejDva(int data);
	  void pridejNaTret(int data);
	  void pridejKamkoliv(int data, int pozice);
	  void vypis() const;
	  void zrusNaZacatku();
	  void zrusNaDruh();
	  void zrusVse();
	  void vypisS() const;
	  void vypisL() const;
	  int soucet();
	  int pocet();
	  int prumer();
private:
	LssPrvek* mPrvni;
};
