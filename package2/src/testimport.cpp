//[[Rcpp::plugins(cpp11)]]
//[[Rcpp::depends(RcppArmadillo, package1)]]

#include "RcppArmadillo.h"
#include "package1.h"

//[[Rcpp::export]]
arma::vec col_sums(const arma::mat& test){
  return arma::sum(test,0).t();
}

//[[Rcpp::export]]
arma::vec col_sums_imported(const arma::mat& test){
  return package1::col_sums(test);
}

//[[Rcpp::export]]
arma::vec col_sums_copy(arma::mat test){
  return col_sums(test);
}

