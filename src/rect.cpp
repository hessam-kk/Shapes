#include "../include/rect.hpp"
#include <iostream>
using std::cout;
using std::cin;
using std::endl;

Rectangle::Rectangle(){
    add_shape();
}
double Rectangle::get_environment() const {
    return (edges[0]+edges[1])*2;
}
double Rectangle::get_area() const  {
    // Assuming edges are set in a row
    return edges[0] * edges[1];
}
float Rectangle::get_edge(int a) const{
    if( a < 0 || a > 1) return edges[0];// -1  4
    return edges[a];
}
void Rectangle::add_shape() {
    cout <<
    "Enter Two Number As Edges Of Rectangle in a Row With an Space: (a b): ";
    cin  >> edges[0] 
         >> edges[1];
    float input;
    cout << "Enter Circle Center X: ";
    cin >> input;
    this->set_center_x(input);
    cout << "Enter Cirlce Center Y: ";
    cin >> input;
    this->set_center_y(input);
}
Shp Rectangle::get_id() const {
    return RECTANGLE;
}
