#include "RcppArmadillo.h"
#include "../inst/include/package1.h"

// [[Rcpp::export]]
arma::vec col_sums_internal(const arma::mat& matty){
  return package1::col_sums(matty);
}
