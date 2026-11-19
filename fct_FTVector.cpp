#include <cstdio>
#include <iostream>
#include <ostream>
#include <vector>

#include "complexe.h"
#include "ftvector.h"

using namespace std;

// DFT
FTVector FTVector::DFT() const{

    Complexe fact(0,-2*pi);
    int n = *this.size();
    FTVector U; 
    U.reserve(n);
    for(int k=0;k<n;k++){
        Complexe Sum;
        for(int j=0;j<n;j++){
            Sum+=u[j]*exp((fact*k*j)/n);
        }
        U.pushback(Sum);
    }
    return U;
}