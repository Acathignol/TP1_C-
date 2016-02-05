
#ifndef __TP1_3BIM_2016__Complex__
#define __TP1_3BIM_2016__Complex__

#include <iostream>
#include <cmath>


class Complex
{
  
public:
  
  Complex( void );
  Complex( double a, double b );
  Complex( const Complex& complex );
  
  inline double get_a( void ) const;
  inline double get_b( void ) const;
  inline double get_module( void ) const;
  
  inline void set_a( double a );
  inline void set_b( double b );
  
  inline Complex& operator=( const Complex &complex );
  
  friend Complex operator+( const Complex& A, const Complex& B );
  friend Complex operator-( const Complex& A, const Complex& B );
  friend Complex operator*( const Complex& A, const Complex& B );
  friend Complex operator/( const Complex& A, const Complex& B );
  
protected:
  
  double _a; /*!< Real value      */
  double _b; /*!< Imaginary value */
  
};

/**
 * \brief    Get real part
 * \details  --
 * \param    void
 * \return   \e double
 */
inline double Complex::get_a( void ) const
{
  return _a;
}

/**
 * \brief    Get imaginary part
 * \details  --
 * \param    void
 * \return   \e double
 */
inline double Complex::get_b( void ) const
{
  return _b;
}

/**
 * \brief    Get complex module
 * \details  --
 * \param    void
 * \return   \e double
 */
inline double Complex::get_module( void ) const
{
  return sqrt(_a*_a+_b*_b);
}

/**
 * \brief    Set real part
 * \details  --
 * \param    double a
 * \return   \e void
 */
inline void Complex::set_a( double a )
{
  _a = a;
}

/**
 * \brief    Set imaginary part
 * \details  --
 * \param    double b
 * \return   \e void
 */
inline void Complex::set_b( double b )
{
  _b = b;
}

/**
 * \brief    Operator = overloading
 * \details  --
 * \param    const Complex &complex
 * \return   \e Complex&
 */
inline Complex& Complex::operator=( const Complex &complex )
{
  _a = complex._a;
  _b = complex._b;
  return *this;
}


#endif /* defined(__TP1_3BIM_2016__Complex__) */
