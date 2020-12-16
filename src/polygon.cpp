#include "../include/polygon.hpp"
#include <iostream>
#include <math.h>
#include <string>
#include <typeinfo>
using std::cout;
using std::cin;
using std::endl;

Polygon::Polygon() {
    add_shape();
}
double Polygon::get_environment() const {
    return edge * 6;
}
double Polygon::get_area() const {
    float area;
    area = ( 3 * pow(3, 0.5) * edge * edge ) / 2;
    return area;
}
float Polygon::get_edge() const{
    return edge;
}
void Polygon::add_shape() {
    cout << "Enter Edge Of Polygon: ";
    cin >> edge;
    float input;
    cout << "Enter Circle Center X: ";
    cin >> input;
    this->set_center_x(input);
    cout << "Enter Cirlce Center Y: ";
    cin >> input;
    this->set_center_y(input);
}
Shp Polygon::get_id() const {
    return POLYGON;
}
