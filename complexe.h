#ifndef COMPLEXE 
#define COMPLEXE

#include <iostream>
#include <assert.h>
#include <cmath>
using namespace std ;

class Complexe{
    private : 
        double r ;
        double i ;
    public :
        Complexe(double x=0 , double y=0);
        double modu() ;
        Complexe conj() ;
        void affiche();
        Complexe operator+(const Complexe& x) ;
        Complexe& operator=(const Complexe& x) ;
        Complexe operator-(const Complexe& x) ;
        Complexe operator*(const Complexe& x) ;
        Complexe operator/(const Complexe& x) ;

        Complexe& operator+=(const Complexe& x) ;
        Complexe& operator-=(const Complexe& x) ;
        Complexe& operator*=(const Complexe& x) ;
        Complexe& operator/=(const Complexe& x) ;

};

#endif