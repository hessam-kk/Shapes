#include "shape.hpp"
#include <string>
#pragma once

class Polygon : public Shape {
public:
    Polygon();
    virtual void add_shape() final;
    virtual double get_environment() const final;
    double get_area() const final;
    virtual float get_edge() const;
    virtual Shp get_id() const final;
private:
    float edge;
};