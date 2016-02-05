
#ifndef __TP1_3BIM_2016__Fractal__
#define __TP1_3BIM_2016__Fractal__

#include <iostream>
#include <cmath>
#include "Complex.h"


class Fractal
{
  
public:
  
  Fractal( void );
  Fractal( const Fractal& fractal ) = delete;
  
  double evaluate( Complex U0, Complex c, int iterations );
  
protected:
  
  Complex _Un; /*!< Complex number */
  
};


#endif /* defined(__TP1_3BIM_2016__Fractal__) */
