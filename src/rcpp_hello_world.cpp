#include "rcpp_hello_world.h"

using namespace Rcpp;

LogicalVector rcpp_hello_world() {
   LogicalVector z = LogicalVector::create( true ) ;
    return z;
}

LogicalVector rcpp_hello_world_internal() {
   LogicalVector z = LogicalVector::create( true ) ;
   return z;
}


LogicalVector rcpp_hello_world_hidden() {
   LogicalVector z = LogicalVector::create( true ) ;
   return z;
}

LogicalVector rcpp_hello_world_source() {
   LogicalVector z = LogicalVector::create( true ) ;
   return z;
}


LogicalVector rcpp_hello_world_source_call() {
   return (rcpp_hello_world_source());
}
