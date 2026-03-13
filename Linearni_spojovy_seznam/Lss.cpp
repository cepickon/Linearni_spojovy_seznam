#include "Lss.h"
#include <iostream>

Lss::Lss()
	: mPrvni(nullptr)
{}
Lss::~Lss(){}
void Lss::pridejNazacatek(int data){
	LssPrvek* novyPrvek = new LssPrvek();
	novyPrvek->mHodnota = data;
	novyPrvek->mDalsi = mPrvni;
	mPrvni = novyPrvek;
}
void Lss::pridejNaDruh(int data){
	std::cout << "Prida na druhou pozici ";
	if(mPrvni == nullptr) {
		return;
	}
	LssPrvek* novyPrvek = new LssPrvek();
	novyPrvek->mHodnota = data;
	novyPrvek->mDalsi = mPrvni->mDalsi;
	mPrvni->mDalsi = novyPrvek;
}
void Lss::pridejNaTret(int data) {
	std::cout << "Prida na treti pozici ";
	if(mPrvni == nullptr || mPrvni->mDalsi == nullptr) {
		return;
	}
	LssPrvek* novyPrvek = new LssPrvek();
	novyPrvek->mHodnota = data;
	novyPrvek->mDalsi = mPrvni->mDalsi->mDalsi;
	mPrvni->mDalsi->mDalsi = novyPrvek;
}
void Lss::pridejNaKonec(int data){
	std::cout << "Prida na konec ";
	LssPrvek* novyPrvek = new LssPrvek();
	novyPrvek->mHodnota = data;
	novyPrvek->mDalsi = nullptr;
	if(mPrvni == nullptr) {
		mPrvni = novyPrvek;
		return;
	}
	LssPrvek* aktualni = mPrvni;
	while (aktualni->mDalsi != nullptr) {
		aktualni = aktualni->mDalsi;
	}
	aktualni->mDalsi = novyPrvek;
}
void Lss::vypis() const{
	LssPrvek* aktualni = mPrvni;
	while (aktualni != nullptr) {
		std::cout << aktualni->mHodnota << " ";
		aktualni = aktualni->mDalsi;
	}
	std::cout << std::endl;
}
void Lss::vypisS() const{
	LssPrvek* aktualni = mPrvni;
	while (aktualni != nullptr) {
		if (aktualni->mHodnota % 2 == 0) {
			std::cout << aktualni->mHodnota << " ";
		}
		aktualni = aktualni->mDalsi;
	}
	std::cout << std::endl;
}
void Lss::vypisL() const{
	LssPrvek* aktualni = mPrvni;
	while (aktualni != nullptr) {
		if (aktualni->mHodnota % 2 != 0) {
			std::cout << aktualni->mHodnota << " ";
		}
		aktualni = aktualni->mDalsi;
	}
	std::cout << std::endl;
}
int Lss::soucet() {
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
int Lss::pocet() {
	LssPrvek* aktualni = mPrvni;
	int pocet = 0;
	while (aktualni != nullptr) {
		pocet++;
		aktualni = aktualni->mDalsi;
	}
	return pocet;
}
void Lss::prohod23(){
	std::cout << "Prohodi druhy a treti prvek ";
	if(mPrvni == nullptr || mPrvni->mDalsi == nullptr || mPrvni->mDalsi->mDalsi == nullptr) {
		return;
	}
	LssPrvek* druhy = mPrvni->mDalsi;
	LssPrvek* treti = mPrvni->mDalsi->mDalsi;
	mPrvni->mDalsi = treti;
	druhy->mDalsi = treti->mDalsi;
	treti->mDalsi = druhy;
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
void Lss::zrusNaDruh() {
	std::cout << "Smaze na druhe pozici ";
	if (mPrvni == nullptr || mPrvni->mDalsi == nullptr) {
		return;
		}
	LssPrvek* odstraneny = mPrvni->mDalsi;
	mPrvni->mDalsi = odstraneny->mDalsi;
	delete odstraneny;
}
void Lss::zrusNaTret(){
	std::cout << "Smaze na treti pozici ";
	if (mPrvni == nullptr || mPrvni->mDalsi == nullptr || mPrvni->mDalsi->mDalsi == nullptr) {
		return;
	}
	LssPrvek* odstraneny = mPrvni->mDalsi->mDalsi;
	mPrvni->mDalsi->mDalsi = odstraneny->mDalsi;
	delete odstraneny;
}
void Lss::zrusNaKonci(){
	std::cout << "Smaze posledni prvek ";
	if (mPrvni == nullptr) {
		return;
	}
	if(mPrvni->mDalsi == nullptr) {
		delete mPrvni;
		mPrvni = nullptr;
		return;
	}
	LssPrvek* aktualni = mPrvni;
	while (aktualni->mDalsi->mDalsi != nullptr) {
		aktualni = aktualni->mDalsi;
	}
	delete aktualni->mDalsi;
	aktualni->mDalsi = nullptr;
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
