
#ifndef __TP1_3BIM_2016__Array__
#define __TP1_3BIM_2016__Array__

#include <iostream>


class Array
{

public:
  
  Array( void );
  Array( int N );
  Array( int N, double val );
  Array( const Array& array );
  
  ~Array( void );
  
  inline int    get_size( void ) const;
  inline double get( int i ) const;
  
  inline void set( int i, double val );
  
  inline double&       operator[]( int i );
  inline const double& operator[]( int i ) const;
  inline Array&        operator=( const Array &array );
  
  friend Array operator+( const Array& A, const Array& B );
  
protected:
  
  int     _N;   /*!< Array size */
  double* _tab; /*!< Array      */
  
};


/**
 * \brief    Get array size
 * \details  --
 * \param    void
 * \return   \e int
 */
inline int Array::get_size( void ) const
{
  return _N;
}

/**
 * \brief    Get value at index i
 * \details  --
 * \param    void
 * \return   \e double
 */
inline double Array::get( int i ) const
{
  return _tab[i];
}

/**
 * \brief    Set value at index i
 * \details  --
 * \param    int i
 * \param    double val
 * \return   \e void
 */
inline void Array::set( int i, double val )
{
  _tab[i] = val;
}

/**
 * \brief    Operator [] overloading (setter)
 * \details  --
 * \param    int i
 * \return   \e double&
 */
inline double& Array::operator[]( int i )
{
  return _tab[i];
}

/**
 * \brief    Operator [] overloading (getter)
 * \details  --
 * \param    int i
 * \return   \e double
 */
inline const double& Array::operator[]( int i ) const
{
  return _tab[i];
}

/**
 * \brief    Operator = overloading
 * \details  --
 * \param    const Array& array
 * \return   \e Array&
 */
inline Array& Array::operator=( const Array& array )
{
  delete[] _tab;
  _N   = array._N;
  _tab = new double[_N];
  memcpy(_tab, array._tab, sizeof(double)*_N);
  return *this;
}


#endif /* defined(__TP1_3BIM_2016__Array__) */
