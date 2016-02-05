
#include "Complex.h"


/**
 * \brief    Default constructor
 * \details  --
 * \param    void
 * \return   \e void
 */
Complex::Complex( void )
{
  _a = 0.0;
  _b = 0.0;
}

/**
 * \brief    Constructor
 * \details  --
 * \param    double a
 * \param    double b
 * \return   \e void
 */
Complex::Complex( double a, double b )
{
  _a = a;
  _b = b;
}

/**
 * \brief    Copy constructor
 * \details  --
 * \param    const Complex& complex
 * \return   \e void
 */
Complex::Complex( const Complex& complex )
{
  _a = complex._a;
  _b = complex._b;
}

/**
 * \brief    Operator + overloading
 * \details  --
 * \param    const Complex& A
 * \param    const Complex& B
 * \return   \e Complex
 */
Complex operator+( const Complex& A, const Complex& B )
{
  Complex result;
  result._a = A._a + B._a;
  result._b = A._b + B._b;
  return result;
}

/**
 * \brief    Operator - overloading
 * \details  --
 * \param    const Complex& A
 * \param    const Complex& B
 * \return   \e Complex
 */
Complex operator-( const Complex& A, const Complex& B )
{
  Complex result;
  result._a = A._a - B._a;
  result._b = A._b - B._b;
  return result;
}

/**
 * \brief    Operator * overloading
 * \details  --
 * \param    const Complex& A
 * \param    const Complex& B
 * \return   \e Complex
 */
Complex operator*( const Complex& A, const Complex& B )
{
  Complex result;
  result._a = (A._a*B._a-A._b*B._b);
  result._b = (A._b*B._a+A._a*B._b);
  return result;
}

/**
 * \brief    Operator / overloading
 * \details  --
 * \param    const Complex& A
 * \param    const Complex& B
 * \return   \e Complex
 */
Complex operator/( const Complex& A, const Complex& B )
{
  Complex result;
  result._a = (A._a*B._a+A._b*B._b)/(B._a*B._a+B._b*B._b);
  result._b = (A._b*B._a-A._a*B._b)/(B._a*B._a+B._b*B._b);
  return result;
}
