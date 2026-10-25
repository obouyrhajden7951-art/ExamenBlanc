# ExamenBlanc
# Exercice1:

1. Résultat affiché : 15 20
a est une référence, donc x devient 15. b est une copie, donc y reste 20.
2. Différence entre passage par valeur et par référence :
Par valeur : la fonction travaille sur une copie. La variable d’origine ne change pas.
Par référence : la fonction travaille sur la variable elle-même. La variable d’origine change.
3. Modification de la fonction :

                    void modifier(int &a, int &b) {
                        a += 5;
                        b += 10;
                    }
Résultat : 15 30

4. Rôle de l’opérateur & :
Dans la déclaration d’un paramètre, & veut dire que le paramètre est passé par référence : c’est un autre nom pour la variable de départ, sans copie. Si on modifie le paramètre, la variable d’origine change.
   
# Exercice2:

<img width="1626" height="255" alt="image" src="https://github.com/user-attachments/assets/fd5a35ea-779d-4bce-821b-e1acdde3b590" />

# Exercice3:

<img width="1618" height="528" alt="image" src="https://github.com/user-attachments/assets/c82b9114-7835-4682-ba6c-f87d1e76f2c1" />

6. Pourquoi le destructeur de Vehicule doit être virtual :
   On met virtual pour que l'objet soit détruit complètement.
