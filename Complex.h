#ifndef COMPLEX_H__
#define COMPLEX_H__

#include <cstdlib> 
#include <iostream>
#include <stdio.h>
using namespace std;
#include <cmath>

#include <cstdio>
#include <fstream>
#include <string>

// ===========================================================================
//                                  Includes
// ===========================================================================

class Complex {
 public :
 
  // =========================================================================
  //                               Constructors
  // =========================================================================
  //Constructeur par défaut : Re (Real part) and Im (imaginary part)
  Complex();
  //Constructeur par copie
  Complex(const Complex& complex);
  
  Complex(double valRe, double valIm);

  // =========================================================================
  //                                Destructor
  // =========================================================================
  
  // =========================================================================
  //                                  Getters
  // =========================================================================
  double Re(void) const;
  double Im(void) const;

  // =========================================================================
  //                                  Setters
  // =========================================================================
  void setRe(double value1);
  void setIm(double value2);

  // =========================================================================
  //                                 Operators
  // =========================================================================
  Complex& operator=(const Complex complex2);
  
  // =========================================================================
  //                              Public Methods
  // =========================================================================


protected :
  // =========================================================================
  //                             Protected Methods
  // =========================================================================

  // =========================================================================
  //                                Attributes
  // =========================================================================
  double Re_;
  double Im_;
  
};


// ===========================================================================
//                            Getters' definitions
// ===========================================================================


// ===========================================================================
//                            Setters' definitions
// ===========================================================================

// ===========================================================================
//                           Operators' definitions
// ===========================================================================

// ===========================================================================
//                        Inline functions' definition
// ===========================================================================


//opérateur somme
Complex operator+(const Complex& complex1,const Complex& complex2);
//opérateur soustraction
Complex operator-(const Complex& complex1,const Complex& complex2);
//opérateur multiplication
Complex operator*(const Complex& complex1,const Complex& complex2);
//opérateur division
Complex operator/(const Complex& lhs,const Complex& rhs);
//Fractale
void Fractale(int it, int n, double max,Complex base, Complex c);
#endif // COMPLEX_H__



