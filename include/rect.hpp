#include "shape.hpp"
#include <string>
#pragma once

class Rectangle : public Shape {
public:
    Rectangle();
    virtual void add_shape() final;
    virtual double get_environment() const final;
    double get_area() const final;
    virtual float get_edge(int = 0) const;
    virtual Shp get_id() const final;

private:
    float edges[2] = {};
};