

// ===========================================================================
//                                  Includes
// ===========================================================================
//#include <cstdio>
#include <cstdlib>
//#include <fstream>
#include <iostream>
//#include <string>

using namespace std;

#include "Array.h"
#include "RandomArray.h"
#include "Complex.h"


// ===========================================================================
//                            Function declarations
// ===========================================================================


// ===========================================================================
//                                    MAIN
// ===========================================================================
int main(int argc, char* argv[]) {
  
  printf("Hello World! \n");

// =========================  ARRAY ==========================================
  Array a1(2);
  cout<<"The size of a1 is: "<<a1.size()<<endl;
  
  Array a2(2,5.);    
  cout<<"The values of the table of a2 are: "<<endl;
  for (int i=0 ; i<a2.size();i++){
    cout<<a2.data()[i]<<endl;
  }
  
  a2.set(1,10);
  cout<<"Now the values of the table of a2 are: "<<endl;
  for (int i=0 ; i<a2.size();i++){
    cout<<a2.data()[i]<<endl;
  }
  
  cout<<"Test of operator [] - a2[0]:"<<a2[0]<<endl;
  a2[0]=20;
  cout<<"Test of operator [] - a2[0]:"<<a2[0]<<endl;
  
  Array a3 = Array (a1+a2);
  cout<<"Test of operator + -a3=a1+a2- The values of a3 are: "<<endl;
  for (int i=0 ; i<a3.size();i++){
    cout<<a3.data()[i]<<endl;
  }
  
  a1 = a3;
  cout<<"Test of operator = -a1=a4- The values of a1 are: "<<endl;
  for (int i=0 ; i<a1.size();i++){
    cout<<a1.data()[i]<<endl;
  }
  

// =========================  RANDOM ARRAY ====================================
  RandomArray ra1(10,2,5);
  cout<<"The values of the table of ra1 are: "<<endl;
  for (int i=0 ; i<ra1.size();i++){
    cout<<ra1.data()[i]<<endl;
  }
  
  cout<<"mean of ra1 = "<<ra1.mean()<<endl;
  cout<<"sd of ra1 = "<<ra1.sd()<<endl;


// =========================  COMPLEX  ========================================
  Complex c1(2.,5.);
  cout<<"The values of the c1 are: "<<"Re: "<<c1.Re()<<" Im: "<<c1.Im()<<endl;
  
  c1.setIm(10.);
  cout<<"Now, the values of the c1 are: "<<"Re: "<<c1.Re()<<" Im: "<<c1.Im()<<endl;

  Complex c2=c1;
  cout<<"Test of operator = - c2:"<<"Re: "<<c2.Re()<<" Im: "<<c2.Im()<<endl;
  
  Complex c3=(c2+c1);
  cout<<"Test of operator + - c3:"<<"Re: "<<c3.Re()<<" Im: "<<c3.Im()<<endl;
  
  c1.setIm(5.);
  c1.setRe(1.);
  Complex c4=(c3-c1);
  cout<<"Test of operator - - c4:"<<"Re: "<<c4.Re()<<" Im: "<<c4.Im()<<endl;
  
  c4=(c3*c1);
  cout<<"Test of operator * - c4:"<<"Re: "<<c4.Re()<<" Im: "<<c4.Im()<<endl;
  
  c3=(c4/c1);
  cout<<"Test of operator / - c3:"<<"Re: "<<c3.Re()<<" Im: "<<c3.Im()<<endl;
  
// =========================  FRACTALE  =======================================
  int it=200;
  int n=0;
  Complex c(0,0);
  double max=4.;
  for (double a=-2.; a<=2.; a+=0.1){
    c.setRe(a);
    for (double b=-2.; b<=2.; b+=0.1){
      c.setIm(b);
      Fractale(it,n,max,c4,c);
    }
  }

  return 0;
}
