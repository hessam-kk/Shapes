#include "../include/Circle.hpp"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

Circle::Circle( ){
    add_shape();
}
void Circle::add_shape(){
    float radius, input;
    cout << "Enter Circle Radius: ";
    cin >> radius;
    this->radius = radius;
    cout << "Enter Circle Center X: ";
    cin >> input;
    this->set_center_x(input);
    cout << "Enter Cirlce Center Y: ";
    cin >> input;
    this->set_center_y(input);
}
double Circle::get_environment() const {
    return radius * radius * 3.14;
}
double Circle::get_area() const {
    return 2 * radius * 3.14;
}
float Circle::get_edge() const{
    return 0;
}
Shp Circle::get_id() const {
    return CIRLCLE; 
}
