

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


// ===========================================================================
//                            Function declarations
// ===========================================================================


// ===========================================================================
//                                    MAIN
// ===========================================================================
int main(int argc, char* argv[]) {
  
  printf("Hello World! \n");
  
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
  
  return 0;
}
