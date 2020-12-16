#include "../include/func.hpp"

long double get_environment_all( Shp type, vector <Shape *> my_vec){
    long double env = 0;
    if ( type == ALL ){
        for ( auto const & it : my_vec )
            env += it->get_environment();
        return env;
    }
    for ( auto const & it : my_vec ){
        if( it->get_id() == type ){
            env += it->get_environment();
        }
    }
    return env;
}

long double get_area_all( Shp type, vector <Shape *> my_vec ){
    long double area = 0;
    if ( type == ALL ){
        for ( auto const & it : my_vec )
            area += it->get_area();
        return area;
    }
    for ( auto const & it : my_vec ){
        if( it->get_id() == type ){
            area += it->get_area();
        }
    }
    return area;
}
