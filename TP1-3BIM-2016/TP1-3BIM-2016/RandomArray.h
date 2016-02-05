
#ifndef __TP1_3BIM_2016__RandomArray__
#define __TP1_3BIM_2016__RandomArray__

#include <iostream>
#include <cmath>
#include "Array.h"


class RandomArray : public Array
{
  
public:
  
  RandomArray( int N, double A, double B );
  
  double compute_mean( void );
  double compute_var( void );
  
protected:
  
  double _mean; /*!< Array mean     */
  double _var;  /*!< Array variance */
  
};


#endif /* defined(__TP1_3BIM_2016__RandomArray__) */
