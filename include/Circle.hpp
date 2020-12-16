#include "shape.hpp"
#pragma once

class Circle : public Shape {
public:
    Circle();
    void add_shape() final;
    virtual double get_environment() const final;
    double get_area() const final;
    virtual float get_edge() const;
    virtual Shp get_id() const final;
private:
    double radius;
};