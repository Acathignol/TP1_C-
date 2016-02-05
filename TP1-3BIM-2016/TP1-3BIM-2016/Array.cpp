
#include "Array.h"


/**
 * \brief    Default constructor
 * \details  --
 * \param    void
 * \return   \e void
 */
Array::Array( void )
{
  _N   = 0;
  _tab = nullptr;
}

/**
 * \brief    Constructor
 * \details  --
 * \param    int N
 * \return   \e void
 */
Array::Array( int N )
{
  _N   = N;
  _tab = new double[_N];
  for (int i = 0; i < _N; i++)
  {
    _tab[i] = 0.0;
  }
}

/**
 * \brief    Constructor
 * \details  --
 * \param    int N
 * \param    double val
 * \return   \e void
 */
Array::Array( int N, double val )
{
  _N   = N;
  _tab = new double[_N];
  for (int i = 0; i < _N; i++)
  {
    _tab[i] = val;
  }
}

/**
 * \brief    Copy constructor
 * \details  --
 * \param    const Array& array
 * \return   \e void
 */
Array::Array( const Array& array )
{
  _N   = array._N;
  _tab = new double[_N];
  memcpy(_tab, array._tab, sizeof(double)*_N);
}

/**
 * \brief    Destructor
 * \details  --
 * \param    void
 * \return   \e void
 */
Array::~Array( void )
{
  delete[] _tab;
  _tab = nullptr;
}

/**
 * \brief    Operator + overloading
 * \details  --
 * \param    const Array& A
 * \param    const Array& B
 * \return   \e Array
 */
Array operator+( const Array& A, const Array& B )
{
  Array result = Array();
  result._N = A._N+B._N;
  result._tab = new double[result._N];
  memcpy(result._tab, A._tab, sizeof(double)*A._N);
  memcpy(result._tab+A._N, B._tab, sizeof(double)*B._N);
  return result;
}
