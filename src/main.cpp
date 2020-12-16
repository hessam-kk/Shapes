#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>
#include "../include/shape.hpp"
#include "../include/Circle.hpp"
#include "../include/rect.hpp"
#include "../include/triangle.hpp"
#include "../include/polygon.hpp"
#include "../include/func.hpp"

using namespace std;
// vector < Shape *> my_vec;
// This could be defined here to be accessed in add_shape() function
// to auto-add itself into the vector, but due to security reason and
// Less-Privilages-Principle, this mode was aborted. 
int main(){
    system("clear");
    vector < Shape *> my_vec;
    // Circle c1;
    // my_vec.push_back( & c1 );
    // cout << my_vec.size() << endl;

    Rectangle rec1;
    // my_vec.push_back( & rec1 );
    // Rectangle rec2;
    // my_vec.push_back( & rec2 );
    // cout << get_area_all(RECTANGLE, my_vec) << endl;
    // cout << get_environment_all(RECTANGLE, my_vec) << endl;
    // cout << "Rect Environment: " << rec1.get_environment() << endl;
    // cout << "Rect Area: " << my_vec.at(0)->get_area() << endl;

    // Triangle tr1;
    // my_vec.push_back( & tr1 );
    // Triangle tr2;
    // my_vec.push_back( & tr2 );
    // cout << get_environment_all(TRIANGLE, my_vec) << endl;
    // cout << "Area: " << tr1.get_area() << endl;

    // Polygon pol;
    // cout << pol.get_id() << endl;
    return 0;
}
