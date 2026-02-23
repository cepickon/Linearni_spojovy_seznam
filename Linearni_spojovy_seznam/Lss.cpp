#include "Lss.h" 
#include <iostream>

Lss::Lss()
	: mPrvni(nullptr) {
}
Lss::~Lss() {}
void Lss::pridejNazacatek(int data) {
	LssPrvek* novyPrvek = new LssPrvek();
	novyPrvek->mHodnota = data;
	novyPrvek->mDalsi = mPrvni;
	mPrvni = novyPrvek;
}
void Lss::vypis() const {
	LssPrvek* aktualni = mPrvni;
	while (aktualni != nullptr) {
		std::cout << aktualni->mHodnota << " ";
		aktualni = aktualni->mDalsi;
	}
	std::cout << std::endl;
}
void Lss::vypisS() const {
	LssPrvek* aktualni = mPrvni;
	std::cout << "Sude hodnoty: ";
	while (aktualni != nullptr) {
		if (aktualni->mHodnota % 2 == 0) {
			std::cout << aktualni->mHodnota << " ";
		}
		aktualni = aktualni->mDalsi;
	}
	std::cout << std::endl;
}
void Lss::vypisL() const {
	LssPrvek* aktualni = mPrvni;
	std::cout << "Liche hodnoty: ";
	while (aktualni != nullptr) {
		if (aktualni->mHodnota % 2 != 0) {
			std::cout << aktualni->mHodnota << " ";
		}
		aktualni = aktualni->mDalsi;
	}
	std::cout << std::endl;
}
int Lss::soucet(){
	LssPrvek* aktualni = mPrvni;
	int soucet = 0;
	while (aktualni != nullptr) {
		soucet += aktualni->mHodnota;
		aktualni = aktualni->mDalsi;
	}
	return soucet;
}
int Lss::prumer() {
	LssPrvek* aktualni = mPrvni;
	int soucet = 0;
	int pocet = 0;
	while (aktualni != nullptr) {
		soucet += aktualni->mHodnota;
		pocet++;
		aktualni = aktualni->mDalsi;
	}
	int prumer = soucet / pocet;
	return prumer;
}
void Lss::zrusNaZacatku() {
	LssPrvek* novyPrvek = new LssPrvek();
	std::cout << "Smaze prvni prvek ";
	if (mPrvni == nullptr) {
		return;
	}
	LssPrvek* odstraneny = mPrvni;
	mPrvni = mPrvni->mDalsi;
	delete odstraneny;
}
void Lss::zrusVse() {
	LssPrvek* aktualni = mPrvni;
	std::cout << "Smaze cely seznam";
	while (aktualni != nullptr) {
		LssPrvek* dalsi = aktualni->mDalsi;
		delete aktualni;
		aktualni = dalsi;
	}
	mPrvni = nullptr;
}