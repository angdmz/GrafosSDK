//
// Created by adorda on 12/12/19.
//

#ifndef GRAFOSSDK_GRAFOSIMPLE_H
#define GRAFOSSDK_GRAFOSIMPLE_H

#include "Arista.h"

template <typename T>
class GrafoSimple {
    private:
        std::set<T> vertices;
        std::set<Arista<T>> aristas;
        std::map<T, std::set<T>> mapaAdyacencias;

    public:
        bool tieneCiclos();
        bool esConexo();
        int cardinalVertices();
        int cardinalAristas();

        GrafoSimple();
        GrafoSimple(const std::set<T>& vertices, const std::set<Arista<T>>& aristas);
        GrafoSimple(const std::set<T>& vertices);
        GrafoSimple(const std::set<Arista<T>>& aristas);
};


#include "GrafoSimple.hpp"

#endif //GRAFOSSDK_GRAFOSIMPLE_H
