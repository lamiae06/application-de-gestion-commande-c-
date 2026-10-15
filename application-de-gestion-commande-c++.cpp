
#include <iostream>
#include "Commande.h"
using namespace std;

int main()
{
    {
        Commande C1("Ahmed", 2);

        C1.ajouterarticle(5000);
        C1.ajouterarticle(1000);

        
        C1.ajouterarticle(-50);
        C1.ajouterarticle(0);
        C1.ajouterarticle(200);

        C1.afficher();

        Commande C2("Sara", 3);
        C2.ajouterarticle(100);
        C2.afficher();
    }

    

    Commande* C3 = new Commande("Salma", 2);

    C3->ajouterarticle(250);
    C3->ajouterarticle(150);
    C3->afficher();

    delete C3;
    C3 = nullptr;

    return 0;
}


