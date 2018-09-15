Stackoverflow question: https://stackoverflow.com/questions/52340468/performance-drop-when-including-code-exported-from-other-rcpp-package

Exporting c++ functions from `package1` to `package2` using Rcpp  

in R,  `devtools::install_github("mkln/rcppeztest/package2")` (will install `package1` too), then

```
library(magrittr)

nr <- 100
p <- 800

testmat <- rnorm(nr * p) %>% matrix(ncol=p)

rbenchmark::benchmark(
          direct2 = package2::col_sums(testmat),
          copy2 = package2::col_sums_copy(testmat),
          import2 = package2::col_sums_imported(testmat), 
          directR = colSums(testmat),
          direct1 = package1::col_sums_internal(testmat),
          replications=1000)

```

Then `remove.packages(c("package1", "package2"))`. 