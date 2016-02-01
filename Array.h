#ifndef ARRAY_H__
#define ARRAY_H__

// ===========================================================================
//                                  Includes
// ===========================================================================

class Array {
 public :
 
  // =========================================================================
  //                               Constructors
  // =========================================================================
  Array();
  //~ Array(const Array &array);
  //~ Array& operator=(const Array &array);
  // =========================================================================
  //                                Destructor
  // =========================================================================
  ~Array();
  // =========================================================================
  //                                  Getters
  // =========================================================================

  // =========================================================================
  //                                  Setters
  // =========================================================================

  // =========================================================================
  //                                 Operators
  // =========================================================================

  // =========================================================================
  //                              Public Methods
  // =========================================================================

protected :
  // =========================================================================
  //                             Protected Methods
  // =========================================================================

  // =========================================================================
  //                                Attributes
  // =========================================================================
  int size_;
  double* data_; 
};


// ===========================================================================
//                            Getters' definitions
// ===========================================================================


// ===========================================================================
//                            Setters' definitions
// ===========================================================================

// ===========================================================================
//                           Operators' definitions
// ===========================================================================

// ===========================================================================
//                        Inline functions' definition
// ===========================================================================



#endif // ARRAY_H__
