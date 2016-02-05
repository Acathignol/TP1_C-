
#include <iostream>
#include <fstream>
#include "Array.h"
#include "RandomArray.h"
#include "Complex.h"
#include "Fractal.h"


int main( int argc, const char * argv[] )
{
  /*---------------------------------*/
  /* 1) Array                        */
  /*---------------------------------*/
  Array tab1 = Array(10, 2.0);
  tab1[2] = 3.456;
  
  Array tab2, tab3;
  tab3 = tab2 = tab1;
  
  std::cout << tab3[2] << "\n";
  
  /*---------------------------------*/
  /* 2) RandomArray                  */
  /*---------------------------------*/
  srand((unsigned int)time(NULL));
  
  RandomArray rarray1 = RandomArray(1000, 2., 100.);
  
  std::cout << rarray1.compute_mean() << " " << rarray1.compute_var() << "\n";
  
  /*---------------------------------*/
  /* 3) Complex                      */
  /*---------------------------------*/
  Complex complex1 = Complex(2.0, -4.5);
  Complex complex2 = Complex(-1.2, 8.7);
  
  Complex complex3 = complex2 + complex1;
  std::cout << complex3.get_a() << " " << complex3.get_b() << "\n";
  
  Complex complex4;
  complex4 = complex3 * complex2;
  std::cout << complex4.get_a() << " " << complex4.get_b() << "\n";
  
  /*---------------------------------*/
  /* 4) Fractals                     */
  /*---------------------------------*/
  Fractal fractal;
  Complex U0 = Complex(0.0, 0.0);
  std::ofstream output("./mandelbrot.txt", std::ios::out | std::ios::trunc);
  for (double a = -2.0; a <= 2.0; a += 0.005)
  {
    for (double b = -2.0; b <= 2.0; b += 0.005)
    {
      Complex c = Complex(a, b);
      if (fractal.evaluate(U0, c, 200) < 4)
      {
        output << a << " " << b << "\n";
      }
    }
  }
  output.close();
  
  Complex C = Complex(0.1, 0.1);
  output.open("./julia.txt", std::ios::out | std::ios::trunc);
  for (double a = -2.0; a <= 2.0; a += 0.005)
  {
    for (double b = -2.0; b <= 2.0; b += 0.005)
    {
      U0 = Complex(a, b);
      if (fractal.evaluate(U0, C, 200) < 4)
      {
        output << a << " " << b << "\n";
      }
    }
  }
  output.close();
  
  return EXIT_SUCCESS;
}
