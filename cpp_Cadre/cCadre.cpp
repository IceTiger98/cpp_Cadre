#include <math.h>
#include "cCadre.h"
#define PI 3.14



//Constucteurs
Cadre::Cadre() { //Constructeur de base
	this->n_x = 10;
	this->n_y = 5;
	this->n_largeur = 5;
	this->n_longueur = (2 * this->n_largeur);
	this->n_motif = '*';
}
Cadre::Cadre(float x, float y) { //Position 
	this->n_x = x;
	this->n_y = y;
	this->n_largeur = 5;
	this->n_longueur = (2 * this->n_largeur);
	this->n_motif = '*';
}
Cadre::Cadre(float x, float y, int w, int h) { //Dimensions
	this->n_x = x;
	this->n_y = y;
	this->n_largeur = w;
	this->n_longueur = h;
	this->n_motif = '*';
}
Cadre::Cadre(float x, float y, int w, int h, char m) { //Rotation
	this->n_x = x;
	this->n_y = y;
	this->n_largeur = w;
	this->n_longueur = h;
	this->n_motif = m;
}

//Destructeur
Cadre::~Cadre() {
	cout << "Le cadre a ete detruit\n";
}






//Coordonnée X
void Cadre::setX(float x) {
	this->n_x = x;
}

//Coordonnée Y
void Cadre::setY(float y) {
	this->n_y = y;
}

//Largeur
void Cadre::setW(int w) {
	this->n_largeur = w;
}

//Longueur
void Cadre::setH(int h) {
	this->n_longueur = h;
}

//Motif
void Cadre::setMotif(char m) {
	this->n_motif = m;
}






//Coordonnée X
float Cadre::getX() const {
	return this->n_x;
}

//Coordonnée Y
float Cadre::getY() const {
	return this->n_y;
}

//Largeur
int Cadre::getW() const {
	return this->n_largeur;
}

//Longueur
int Cadre::getH() const {
	return this->n_longueur;
}

//Motif
char Cadre::getMotif() const {
	return this->n_motif;
}






//Coordonées / Dimensions / Motif
void Cadre::String() const {
	cout << "Coordonees X et Y : " << this->getX() << ";" << this->n_y << "\nDimensions Largeur et Longueur : " << this->n_largeur << " ; " << this->n_longueur << "\nMotif : " << this->n_motif << endl;
}

//Calcule la surface du cadre
int Cadre::Surface() const {
	return this->n_largeur * this->n_longueur;
}

//Calcule le périmetre du cadre
int Cadre::Perimetre() const {
	return (this->n_largeur * 2) + (this->n_longueur * 2);
}

//Booléen qui détermine si le cadre est un carré ou un rectangle 
//(1 = true = carré | 0 = false = rectangle)
bool Cadre::isCarre() const {
	return this->n_largeur == this->n_longueur;
}

//Calcule la rotation
void Cadre::rotation(float flt_rotation)
{
	n_x = n_x * cos(flt_rotation * (PI / 180)) - n_y * sin(flt_rotation * (PI / 180));
	n_y = n_y * sin(flt_rotation * (PI / 180)) + n_y * cos(flt_rotation * (PI / 180));
	std::cout << "Rotation : " << n_x << ";" << n_y << std::endl;
}