#include <iostream>
#include "cCadre.h"

using namespace std;

/*

   -Un constructeur sert � initialiser l'objet un fois cr��.
    Le constructeur se lance d�s que l'objet est instancier.

   -Un destructeur sert � detruire un objet de facon s�curis�.
    Le destructeur se lance quand on d�cide de d�truire l'objet.

   -Un constructeur est priv�. Il peut y en avoir plusieurs pour cr�er avec plusieurs syntaxes.

   -La surd�finition, c'est le fait de d�finir plusiseurs fois la m�me fonction.

   -"Public" permet l'accessibilit� aux variables et fonctions
   -"Private" permet de rendre inaccessible des �l�ments associ�. Seul la classe (ou m�thodes de la classe) auront acc�s aux donn�es priv�es.
*/

int main()
{
    Cadre c(1.49, 7.7, 7, 42, '#');
    c.String();
    cout << "Le cadre est un carre : " << c.isCarre() << endl;
    cout << "Perimetre : " << c.Perimetre() << endl;
    cout << "Surface : " << c.Surface() << endl;
    c.rotation(6);
}