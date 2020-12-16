#include "shape.hpp"
#pragma once

class Triangle : public Shape {
public:
    Triangle();
    virtual void add_shape() final;
    virtual double get_environment() const final;
    double get_area() const final;
    virtual float get_edge(int = 0) const;
    virtual Shp get_id() const final;
private:
    float edges[3] = {};
};
