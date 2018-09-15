Exporting c++ functions from `package1` to `package2` using Rcpp  

in R, `devtools::install_github("mkln/rcppeztest/package1")` and  `devtools::install_github("mkln/rcppeztest/package2")`, then

```
library(magrittr)
library(package1)

nr <- 100
p <- 800

testmat <- rnorm(nr * p) %>% matrix(ncol=p)

rbenchmark::benchmark(package2::col_sums(testmat),
          package2::col_sums_imported(testmat), 
          colSums(testmat),
          package1::col_sums(testmat),
          replications=1000)
```
