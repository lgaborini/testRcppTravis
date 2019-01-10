#include "rcpp_hello_world.h"

using namespace Rcpp;

NumericVector rcpp_hello_world() {
    NumericVector z = NumericVector::create( true ) ;
    return z ;
}
