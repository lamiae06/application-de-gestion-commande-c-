#pragma once
#include<iostream>
using namespace std;
class Commande
{
private: 
	const int id;
	string nom;
	double*prix;
	int capacite;
	int nbrarticles;
	static int nbrcommande;
	double total;
	static int compteur;
public:
	Commande(string n, int c);
	void ajouterarticle(double p);
	double calculertotal() const;
	void afficher() const;
	~Commande();
};



