context("test-calls")

# The package namespace which gets attached
package_namespace_library <- ls("package:testRcppTravis")
# print(package_namespace_library)

# The package namespace which is exported outside the package
package_namespace_full <- ls(getNamespace('testRcppTravis'), all.names = TRUE)
# print(package_namespace_full)

# TESTS -------------------------------------------------------------------


test_that("R-only function can be called", expect_true(hello_world()))


test_that("Rcpp exported function can be called", expect_true(rcpp_hello_world()))



test_that("Rcpp-only function cannot be called unless inside C++ code", {
   expect_error(rcpp_hello_world_source())
   expect_false('rcpp_hello_world_source' %in% package_namespace_full)   
   expect_true(rcpp_hello_world_source_call())   
})






# 
# test_that("Rcpp internal function cannot be called unless explicitly", {
#    expect_false('rcpp_hello_world_internal' %in% package_namespace_library)
#    expect_true('rcpp_hello_world_internal' %in% package_namespace_full)
#    expect_true(testRcppTravis:::rcpp_hello_world_internal())
# })

# test_that("Rcpp non-exported function cannot be called unless explicitly (or inside this package)", {
#    expect_false('rcpp_hello_world_hidden' %in% package_namespace_library)   
#    expect_true('rcpp_hello_world_hidden' %in% package_namespace_full)
#    expect_true(testRcppTravis:::rcpp_hello_world_hidden())
# })


