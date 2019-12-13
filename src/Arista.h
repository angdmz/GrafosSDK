//
// Created by adorda on 12/12/19.
//

#ifndef GRAFOSSDK_ARISTA_H
#define GRAFOSSDK_ARISTA_H

template <typename T>
class Arista {
    private:
        T v;
        T u;
    public:
        const T & U() const;
        const T & V() const;

public:
        Arista(T v, T u): v(v), u(u){}

};



#include "Arista.hpp"

#endif //GRAFOSSDK_ARISTA_H
