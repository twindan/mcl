/*
 MCL
 Copyright (c) 2012-18, Enzo De Sena
 All rights reserved.
 
 Authors: Enzo De Sena, enzodesena@me.com
 */

#ifndef MCL_STATISTICSOP_H
#define MCL_STATISTICSOP_H

#include "mcltypes.h"
#include "pointwiseop.h"
#include <vector>

#ifdef MCL_EXPORTS
  #define MCL_API __declspec(dllexport)
#else
  #define MCL_API
#endif

using std::vector;

namespace mcl {
  
/** Returns the Pearson linear correlation between `vector_a` and `vector_b` */
MCL_API Real Corr(const std::vector<Real>& vector_a,
                  const std::vector<Real>& vector_b);

  
bool StatisticsOpTest();
  
} /**< namespace mcl */

#endif
