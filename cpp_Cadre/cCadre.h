#pragma once

#include <iostream>
using namespace std;

class Cadre
{


private:
	float n_x, n_y;
	int n_largeur, n_longueur;
	char n_motif;

public:

	Cadre();
	Cadre(float x, float y);
	Cadre(float x, float y, int w, int h);
	Cadre(float x, float y, int w, int h, char m);


	~Cadre();


	void setX(float x);
	void setY(float y);
	void setW(int w);
	void setH(int h);
	void setMotif(char m);


	float getX() const;
	float getY() const;
	int getW() const;
	int getH() const;
	char getMotif() const;


	void String() const;
	int Surface() const;
	int Perimetre() const;
	bool isCarre() const;
	void rotation(float flt_rotation);

};
