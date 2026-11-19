#ifndef COMPLEXE 
#define COMPLEXE

#include <iostream>
#include <assert.h>
#include <cmath>
using namespace std ;

// Classe de nombre complexe
class Complexe{
    private : 
        double r ; //Partie réelle
        double i ; //Partie imaginaire
    public :
    // Contructeurs
        Complexe();
        Complexe(double x=0 , double y=0);

    //Fonctions de manipulation
        double modu()const;   //return le module de this
        Complexe conj()const; //return le Complexe conjugué de this

    //Fonctions de get/affichage
        void affiche() const;
        double Im() const{return i;}
        double Re() const{return r;} 

    //Opérateurs surchargés
        Complexe operator+(const Complexe& x) ;
        Complexe& operator=(const Complexe& x) ;
        Complexe operator-(const Complexe& x) ;
        Complexe operator*(const Complexe& x) ;
        Complexe operator/(const Complexe& x) ;

        Complexe& operator+=(const Complexe& x) ;
        Complexe& operator-=(const Complexe& x) ;
        Complexe& operator*=(const Complexe& x) ;
        Complexe& operator/=(const Complexe& x) ;

    //Destructeur
        ~Complexe();
};

#endif