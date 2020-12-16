#pragma once
#include "shape.hpp"
#include <vector>

// 7Polygon
// 9Rectangle
// 6Circle
// 8Triangle
using std::vector;

long double get_environment_all( Shp type, vector <Shape *> my_vec );
long double get_area_all( Shp type, vector <Shape *> my_vec );