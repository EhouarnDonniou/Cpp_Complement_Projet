#include "complexe.h"

using namespace std ;

Complexe::Complexe(double x, double y){
    r=x;
    i=y;
}

double Complexe::modu(){
    return sqrt(r*r+i*i);
}

Complexe Complexe::conj() {
    Complexe conjug(r, -i) ;
    return conjug;
}

void Complexe::affiche(){
    cout<<"Partie réelle : "<<r<<endl;
    cout<<"Partie complexe : "<<i<<endl; 
}

Complexe Complexe::operator+(const Complexe& x){
    Complexe som(r + x.r , i + x.i) ;
    return som ;
}

Complexe Complexe::operator-(const Complexe& x){
    Complexe diff(r - x.r , i - x.i) ;
    return diff ;
}

Complexe Complexe::operator*(const Complexe& x){
    Complexe prod(r*x.r - i*x.i , r*x.i + i*x.r) ;
    return prod ;
}

Complexe Complexe::operator/(const Complexe& x){
    double den = x.r*x.r+x.i*x.i;
    Complexe quot((r*x.r+i*x.i)/den, (-r*x.i+x.r*i)/den);
    return quot ;
}

Complexe& Complexe::operator=(const Complexe& x) {
    r = x.r ;
    i = x.i;
    return *this ;
}



Complexe& Complexe::operator+=(const Complexe& x){
    r = r + x.r ;
    i = i +x.i ;
    return *this ;
}

Complexe& Complexe::operator-=(const Complexe& x){
    r = r - x.r ;
    i = i -x.i ;    
    return *this ;
}

Complexe& Complexe::operator*=(const Complexe& x){
    double reel = r * x.r - i*x.i;
    double imaginaire = i *x.r + r*x.i ;
    r=reel;
    i=imaginaire;
    return *this ;
}

Complexe& Complexe::operator/=(const Complexe& x){
    double den = x.r*x.r+x.i*x.i;

    double reel = (r*x.r+i*x.i)/den;
    double imaginaire = (-r*x.i+x.r*i)/den ;
    r=reel;
    i=imaginaire;
    return *this ;
}

