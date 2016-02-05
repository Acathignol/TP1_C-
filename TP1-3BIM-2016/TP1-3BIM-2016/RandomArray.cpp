
#include "RandomArray.h"


/**
 * \brief    Constructor
 * \details  --
 * \param    int N
 * \param    double A
 * \param    double B
 * \return   \e void
 */
RandomArray::RandomArray( int N, double A, double B )
{
  _N   = N;
  _tab = new double[_N];
  for (int i = 0; i < _N; i++)
  {
    _tab[i] = rand()/(double)RAND_MAX*(B-A)+A;
  }
}

/**
 * \brief    Compute array mean
 * \details  --
 * \param    void
 * \return   \e double
 */
double RandomArray::compute_mean( void )
{
  _mean = 0.0;
  for (int i = 0; i < _N; i++)
  {
    _mean += _tab[i];
  }
  _mean /= (double)_N;
  return _mean;
}

/**
 * \brief    Compute array variance
 * \details  --
 * \param    void
 * \return   \e double
 */
double RandomArray::compute_var( void )
{
  _var = 0.0;
  for (int i = 0; i < _N; i++)
  {
    _var += _tab[i]*_tab[i];
  }
  _var /= (double)_N;
  _var -= _mean*_mean;
  return _var;
}

