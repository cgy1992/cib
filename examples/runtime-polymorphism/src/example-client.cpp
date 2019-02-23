#include "example.h"

#include <catch/catch.hpp>

TEST_CASE("ABI stable virtual function call across component boundary")
{
  A* pA = new B();

  CHECK(pA->VirtFunc() == 15);          // Compiler generated instruction will effectively call `pA->B::VirtFunc()`
  CHECK(pA->A::VirtFunc() == 5);        // A regular call without use of virtual table.
}