#ifndef CONTOUR_CONTOURMETHOD_H
#define CONTOUR_CONTOURMETHOD_H

#include <utility>

#include "NumCpp.hpp"

using namespace nc;

namespace contour {

class ContourMethod
{
 public:
  ContourMethod();

  template<typename T>
  std::pair<T, T> range(const NdArray<T>& in_array, T min, T max);
};

} // namespace contour

#endif // CONTOUR_CONTOURMETHOD_H
