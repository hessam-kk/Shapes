#include "../include/triangle.hpp"
#include <iostream>
#include <math.h>
using std::cout;
using std::cin;
using std::endl;

Triangle::Triangle() { 
    add_shape();
}
void Triangle::add_shape(){
    float input;
    cout << "Enter Triangle Edges In a Row With an Space: (a b c): ";
    cin >> edges[0] >> edges[1] >> edges[2];
    cout << "Enter Triangle Center X: ";
    cin >> input;
    this->set_center_x(input);
    cout << "Enter Traingle Center Y: ";
    cin >> input;
    this->set_center_y(input);
}
float Triangle::get_edge(int a) const {
    if( a < 0 || a > 2) return edges[0];
    return edges[a];
}
double Triangle::get_area() const {
    double area, p; 
    // masahat == (p(p-a)(p-b)(p-c))^1/2
    // p == mohit / 2
    cout << edges[0] << ' ' << edges[1] << ' ' << edges[2] << endl;
    p = (edges[0] + edges[1] + edges[2] ) / 2;
    area = p * (p - edges[0]) * (p - edges[1]) * (p - edges[2]);
    return pow( area, 0.5 );
}

double Triangle::get_environment() const {
    return edges[0] + edges[1] + edges[2];
}
Shp Triangle::get_id() const {
    return TRIANGLE;
}
