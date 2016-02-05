
#include <cstdlib> 
#include <iostream>
using namespace ios;
#include <stdio.h>
using namespace std;
#include <cmath>

#include <cstdio>
#include <fstream>
#include <string>

// ===========================================================================
//                                  Includes
// ===========================================================================
#include "Complex.h"


// ===========================================================================
//                       Definition of static attributes
// ===========================================================================
  
// ===========================================================================
//                                Constructors
// ===========================================================================

// ===========================================================================
//                                 Destructor
// ===========================================================================

// ===========================================================================
//                               Public Methods
// ===========================================================================
int Fractale::n(void) const;
int Fractale::max(void) const;
Complex Fractale::comp(void) const;
Complex Fractale::c(void) const;
  
  
  
  
void Complex::Fractale(int it, int n, double max, Complex base,Complex c){

  ofstream fichier("Fractale.txt", ios::out | ios::trunc); 
// ouverture en écriture avec effacement du fichier ouvert

  if (fichier) {
    for (i=n, i<it, i++){
      if (i=0){base= Complex()}
      
      fichier << "Re: " << base.Re()<< "Im: "<<base.Im()<< endl;
      
      Complex next=(base*base) + c;
      double normNext=sqrt(pow(next.Re(),2)+pow(next.Im(),2));
    
      if (normNext<max){base = next}
      else {fichier.close()} 
    }
    fichier.close()
    
  }
  else
    cerr << "Impossible d'ouvrir le fichier !" << endl;

}
// ===========================================================================
//                              Protected Methods
// ===========================================================================

// ===========================================================================
//                              Operators
// ===========================================================================
