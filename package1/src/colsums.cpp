//[[Rcpp::plugins(cpp11)]]
//[[Rcpp::depends(RcppArmadillo)]]
//[[Rcpp::interfaces(cpp)]]

#include "RcppArmadillo.h"

// [[Rcpp::export]]
arma::vec col_sums(const arma::mat& matty){
  return arma::sum(matty, 0).t();
}

