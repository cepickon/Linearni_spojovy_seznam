#pragma once 
#include "LssPrvek.h"

class Lss{
public: 
	  Lss();
	  ~Lss();
	  void pridejNazacatek(int data);
	  void vypis() const;
	  void zrusNaZacatku();
	  void zrusVse();
	  void vypisS() const;
	  void vypisL() const;
	  int soucet();
	  int prumer();
private:
	LssPrvek* mPrvni;
};