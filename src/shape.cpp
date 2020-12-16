#include "../include/Shape.hpp"
#include <iostream>

float Shape::get_edge() const {
    return number_of_edges;
}
float Shape::get_center_x() const {
    return center.x;
}
float Shape::get_center_y() const {
    return center.y;
}
void Shape::set_center_x( float a ){
    center.x = a;
}
void Shape::set_center_y( float a ){
    center.y = a;
}
