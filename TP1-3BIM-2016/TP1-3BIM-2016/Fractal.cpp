
#include "Fractal.h"


/**
 * \brief    Default constructor
 * \details  --
 * \param    void
 * \return   \e void
 */
Fractal::Fractal( void )
{
  _Un = Complex(0.0, 0.0);
}

/**
 * \brief    Evaluate the progression
 * \details  --
 * \param    Complex U0
 * \param    Complex c
 * \param    int iterations
 * \return   \e double
 */
double Fractal::evaluate( Complex U0, Complex c, int iterations )
{
  _Un = U0;
  for (int i = 0; i < iterations; i++)
  {
    _Un = _Un*_Un + c;
  }
  return _Un.get_module();
}
