#include <iostream>
#include <string>
using namespace std;

class CompteBancaire {
private:
    int numero;
    string titulaire;
    double solde;

public:
    // Constructeur paramétré
    CompteBancaire(int n, string t, double s) {
        numero = n;
        titulaire = t;
        solde = s;
    }

    // Déposer
    void deposer(double montant) {
        if (montant > 0)
            solde += montant;
        else
            cout << "Montant invalide" << endl;
    }

    // Retirer
    void retirer(double montant) {
        if (montant > 0 && montant <= solde)
            solde -= montant;
        else
            cout << "Retrait impossible" << endl;
    }

    // Afficher
    void afficher() {
        cout << "Numero : " << numero << endl;
        cout << "Titulaire : " << titulaire << endl;
        cout << "Solde : " << solde << endl;
    }
};

int main() {
    CompteBancaire c1(1, "Ahmed", 1000);
    CompteBancaire c2(2, "Sara", 2000);

    c1.deposer(500);
    c2.retirer(300);

    c1.afficher();
    cout << endl;
    c2.afficher();

    return 0;
}