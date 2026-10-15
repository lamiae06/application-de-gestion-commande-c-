#include "Commande.h"
#include<iostream>
using namespace std;
int Commande::nbrcommande = 0;
int Commande::compteur = 0;

Commande::Commande(string n, int c) : id(compteur + 1) {
	this->nom = n;
	this->capacite = c;
	prix = new double[this->capacite];

	Commande::compteur++;
	Commande::nbrcommande++;
	this->nbrarticles = 0;

}

void Commande::ajouterarticle(double p)
{
	if (p > 0 && this->nbrarticles < this->capacite) {
		this->prix[nbrarticles] = p;
		nbrarticles++;

	}
}

double Commande::calculertotal() const{
	double total = 0;
	for (int i = 0;i < nbrarticles;i++) {
		total += this->prix[i];
	}
	return total;
}

void Commande::afficher() const
{
	cout << "Identifiant : " << id << endl;
	cout << "Client : " << nom << endl;
	cout << "Capacite : " << capacite << endl;
	cout << "Nombre d'articles : " << nbrarticles << endl;

	cout << "Prix des articles : ";
	for (int i = 0; i < nbrarticles; i++)
	{
		cout << prix[i] << " ";
	}

	cout << endl;
	cout << "Total : " << calculertotal() << endl;
	cout << "Nombre de commandes : " << nbrcommande << endl;
	cout << "------------------------" << endl;
}

Commande::~Commande()
{
	delete [] this->prix;
	this->prix = nullptr;
	Commande::nbrcommande--;
}







