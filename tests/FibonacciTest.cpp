#define CATCH_CONFIG_MAIN
#include "catch.hpp"

#include "Fibonacci.hpp"

TEST_CASE("Computes fibonacci numbers up to n") {
  Fibonacci f;
  REQUIRE(f.fibonacci(0) == 0);
  REQUIRE(f.fibonacci(1) == 1);
  REQUIRE(f.fibonacci(2) == 1);
  REQUIRE(f.fibonacci(10) == 55);
  REQUIRE(f.fibonacci(15) == 610);
}