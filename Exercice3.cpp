/*
 * Exercice3.cpp
 *
 *  Created on: 25 oct. 2026
 *      Author: hP
 */
#include <iostream>
#include <string>
using namespace std;


class Vehicule {
protected:
    string immatriculation;
    string marque;
    double vitesseMax;

public:
    Vehicule(string i, string m, double v) {
        immatriculation = i;
        marque = m;
        vitesseMax = v;
    }

    virtual void afficherDetails() {
        cout << "Immatriculation : " << immatriculation << endl;
        cout << "Marque : " << marque << endl;
        cout << "Vitesse max : " << vitesseMax << endl;
    }

    virtual ~Vehicule() {
        cout << "Destructeur Vehicule" << endl;
    }
};


class Voiture : public Vehicule {
private:
    int nombrePortes;
    string typeCarburant;

public:
    Voiture(string i, string m, double v, int np, string tc)
        : Vehicule(i, m, v) {
        nombrePortes = np;
        typeCarburant = tc;
    }


    void afficherDetails() {
        cout << "--- Voiture ---" << endl;
        Vehicule::afficherDetails();
        cout << "Nombre de portes : " << nombrePortes << endl;
        cout << "Carburant : " << typeCarburant << endl;
    }

    ~Voiture() {
        cout << "Destructeur Voiture" << endl;
    }
};


class Camion : public Vehicule {
private:
    double capaciteCharge;
    int nombreEssieux;

public:
    Camion(string i, string m, double v, double cc, int ne)
        : Vehicule(i, m, v) {
        capaciteCharge = cc;
        nombreEssieux = ne;
    }


    void afficherDetails() {
        cout << "--- Camion ---" << endl;
        Vehicule::afficherDetails();
        cout << "Capacite de charge : " << capaciteCharge << endl;
        cout << "Nombre d'essieux : " << nombreEssieux << endl;
    }

    ~Camion() {
        cout << "Destructeur Camion" << endl;
    }
};


int main() {
    Vehicule* tab[2];

    tab[0] = new Voiture("123-A-45", "Toyota", 180, 5, "Diesel");
    tab[1] = new Camion("678-B-90", "Volvo", 110, 20.5, 3);

    for (int i = 0; i < 2; i++) {
        tab[i]->afficherDetails();
        cout << endl;
    }

    for (int i = 0; i < 2; i++) {
        delete tab[i];
    }

    return 0;
}




