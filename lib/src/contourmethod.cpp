#include "contourmethod.h"
#include "NumCpp/Functions/max.hpp"

namespace contour {

ContourMethod::ContourMethod()
{

}

template<typename T>
std::pair<T, T> ContourMethod::range(const NdArray<T>& in_array, T min, T max)
{
  T z_min = min;
  T z_max = max;

  return { nc::min(in_array), nc::max(in_array) };
}

} // namespace contour
