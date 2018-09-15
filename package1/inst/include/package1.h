#ifndef RCPP_package1
#define RCPP_package1

#include <RcppArmadillo.h>

namespace package1 {
  inline arma::vec col_sums(const arma::mat& test){
    return arma::sum(test, 0).t();
  }
}

#endif