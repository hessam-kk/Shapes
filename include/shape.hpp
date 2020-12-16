#include <vector>
#include <string>
#include <typeinfo>
#pragma once

enum Shp {
    CIRLCLE,
    POLYGON,
    TRIANGLE,
    RECTANGLE,
    ALL
};
struct point{
    float x;
    float y;
};


class Shape {
public:
    virtual float get_edge() const;
    virtual double get_area() const = 0;
    virtual double get_environment() const = 0;
    float get_center_y() const;
    float get_center_x() const;
    virtual Shp get_id() const = 0;
protected:
    virtual void add_shape() = 0;
    virtual void set_center_x( float );
    virtual void set_center_y( float );
    point center;
    int number_of_edges;
};