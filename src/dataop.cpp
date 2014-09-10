/*
 mathfunctions.h
 MCL
 
 Authors: Enzo De Sena, enzodesena@me.com
 
 */

#include "dataop.h"
#include "elementaryop.h"
#include "comparisonop.h"
#include "mcltypes.h"
#include "matrixop.h"
#include <vector>


namespace mcl {
  
void Save(const std::vector<Real>& vector,
          const std::string& file_name,
          const mcl::UInt precision) {
  mcl::Matrix<Real> matrix(vector.size(), 1);
  matrix.set_column(0, vector);
  matrix.Save(file_name, precision);
}
  
} // namespace mcl