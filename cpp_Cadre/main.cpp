#include <iostream>
#include "cCadre.h"

using namespace std;

/*

   -Un constructeur sert à initialiser l'objet un fois créé.
    Le constructeur se lance dès que l'objet est instancier.

   -Un destructeur sert à detruire un objet de facon sécurisé.
    Le destructeur se lance quand on décide de détruire l'objet.

   -Un constructeur est privé. Il peut y en avoir plusieurs pour créer avec plusieurs syntaxes.

   -La surdéfinition, c'est le fait de définir plusiseurs fois la même fonction.

   -"Public" permet l'accessibilité aux variables et fonctions
   -"Private" permet de rendre inaccessible des éléments associé. Seul la classe (ou méthodes de la classe) auront accès aux données privées.
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