//
// Created by adorda on 12/12/19.
//

#ifndef GRAFOSSDK_GRAFOSIMPLE_H
#define GRAFOSSDK_GRAFOSIMPLE_H

#include <Arista.h>

template <typename T>
class GrafoSimple {
private:
    std::vector<T>& vertices;
    std::vector<Arista<T>>& aristas;
    std::vector<std::vector<Arista<T>>> listaAdyacencias;

public:
    bool tieneCiclos();
    bool esConexo();
    int cardinalVertices();
    int cardinalAristas();

    GrafoSimple();
    GrafoSimple(const std::vector<T>& _vertices, const std::vector<Arista<T>>& _aristas);
};


#include "GrafoSimple.hpp"

#endif //GRAFOSSDK_GRAFOSIMPLE_H
