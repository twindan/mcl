/*
 random_test.cpp
 Matlab Cpp Library (MCL)
 Copyright (c) 2012, Enzo De Sena
 All rights reserved.
 
 Authors: Enzo De Sena, enzodesena@me.com
 
 */


#include "randomop.h"
#include "equalityop.h"
#include "mcltypes.h"
#include <vector>
#include <cassert>
#include "vectorop.h"

namespace mcl {

bool RandomGenerator::Test() {
  
  RandomGenerator randn_gen;

  std::vector<Real> rand_vector_a = randn_gen.Randn(5);
  assert(rand_vector_a.size() == 5);
  // Check whether seeds are different:
  std::vector<Real> rand_vector_b = randn_gen.Randn(5);
  assert(!IsEqual(rand_vector_a, rand_vector_b));
  return true;
}

} // namespace mcl