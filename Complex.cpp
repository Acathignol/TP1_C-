

// ===========================================================================
//                                  Includes
// ===========================================================================
#include "Complex.h"


// ===========================================================================
//                       Definition of static attributes
// ===========================================================================
  
// ===========================================================================
//                                Constructors
// ===========================================================================
//Constructeur par défaut : Re (Real part) and Im (imaginary part)
Complex::Complex() {
  Re_ = 0.;
  Im_ = 0.;
}

//Constructeur par copie
Complex::Complex(const Complex& complex) {
  Re_  = complex.Re();
  Im_  = complex.Im();
}

Complex::Complex(double valRe, double valIm) {
  Re_  = valRe;
  Im_  = valIm;
}


//opérateur crochet
//~ double& Complex::operator[](int i){
  //~ if (i==1){return Re_}
  //~ if (i=2){return Im_}
  //~ else {printf("You can only ask for 1 (Re) or 2 (Im)")}
//~ }

//~ double Complex::operator[](int i) const{
  //~ if (i==1){return Re_}
  //~ if (i==2){return Im_}
//~ else {printf("You can only ask for 1 (Re) or 2 (Im)")}
//~ }

//opérateur égal
Complex& Complex::operator=(const Complex complex2){
  Re_=complex2.Re();
  Im_=complex2.Im();
  return *this;
}

// ===========================================================================
//                                 Destructor
// ===========================================================================

// ===========================================================================
//                               Public Methods
// ===========================================================================

//Getter Re (Real part) and Im (imaginary part)
double Complex::Re(void) const{
  return Re_;
}

double Complex::Im(void) const{
  return Im_;
}


//Setter value of Re and Im
void Complex::setRe(double value1){
  Re_=value1;
}

void Complex::setIm(double value2){
  Im_=value2;
}

// ===========================================================================
//                              Protected Methods
// ===========================================================================

// ===========================================================================
//                              Operators
// ===========================================================================

//opérateur somme
Complex operator+(const Complex& complex1,const Complex& complex2){
  Complex newcomplex(complex1.Re()+complex2.Re(),complex1.Im()+complex2.Im());
  return newcomplex;
}

//opérateur soustraction
Complex operator-(const Complex& complex1,const Complex& complex2){
  Complex newcomplex(complex1.Re()-complex2.Re(),complex1.Im()-complex2.Im());
  return newcomplex;
}

//opérateur multiplication
Complex operator*(const Complex& complex1,const Complex& complex2){
  
  double Re1=(complex1.Re()*complex2.Re())-(complex1.Im()*complex2.Im());
  double Im1=(complex1.Re()*complex2.Im())+(complex1.Im()*complex2.Re());
  Complex newcomplex(Re1,Im1);
  
  return newcomplex;
}

//opérateur division
Complex operator/(const Complex& lhs,const Complex& rhs){
  double k=1./(pow(rhs.Re(),2)+pow(rhs.Im(),2));
  Complex intermedir(k*rhs.Re(),-1*k*rhs.Im());
  Complex newcomplex(lhs*intermedir);
  return newcomplex;
}

//=============================fractale=======================================
void Fractale(int it, int n, double max, Complex base,Complex c){
  
  std::ofstream fichier; 
// ouverture en écriture avec effacement du fichier ouvert
  fichier.open("FractaleTp1.txt");
  for (int i=0; i<=it; i++){
    if (i==0){
      base.setRe(0);
      base.setIm(0.);
    }
    base = base*base + c;
    
  }
  
  double normBase=sqrt(pow(base.Re(),2)+pow(base.Im(),2));
  
  if (normBase<max){
    fichier<< c.Re() << " "<< c.Im() << std::endl;
  }

  fichier.close();
    
}
