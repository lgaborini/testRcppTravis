#ifndef _HELLO_H
#define _HELLO_H

#include <Rcpp.h>

using namespace Rcpp;

//' Sample Rcpp function
//'
//' @return TRUE
//' @export
// [[Rcpp::export]]
LogicalVector rcpp_hello_world();

//' Sample Rcpp function, exported to R but hidden (not in the NAMESPACE)
//'
//' @return TRUE
// [[Rcpp::export]]
LogicalVector rcpp_hello_world_hidden();

//' Sample Rcpp function, exported to R but internal
//'
//' @return TRUE
//' @keywords internal
// [[Rcpp::export]]
LogicalVector rcpp_hello_world_internal();


// Sample Rcpp function, not exported to R
LogicalVector rcpp_hello_world_source();


//' Sample Rcpp function, calling an internal function in C++
//' 
//' @export
// [[Rcpp::export]]
LogicalVector rcpp_hello_world_source_call();


#endif
