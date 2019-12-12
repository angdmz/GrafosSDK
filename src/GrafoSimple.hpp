//
// Created by adorda on 12/12/19.
//

#include "Arista.h"

template<typename T>
bool GrafoSimple<T>::tieneCiclos() {
    return false;
}

template<typename T>
bool GrafoSimple<T>::esConexo() {
    return false;
}

template<typename T>
int GrafoSimple<T>::cardinalVertices() {
    return 0;
}

template<typename T>
int GrafoSimple<T>::cardinalAristas() {
    return 0;
}

template<typename T>
GrafoSimple<T>::GrafoSimple() {
    // vertices = new std::vector<T>();
    // aristas = new std::vector<Arista<T>>;
    // listaAdyacencias = new std::vector<std::vector<Arista<T>>>();
}

template<typename T>
GrafoSimple<T>::GrafoSimple(const std::vector<T>& _vertices, const std::vector<Arista<T>>& _aristas): vertices(_vertices), aristas(_aristas){
    std::vector<std::vector<Arista<T>>> adj(_vertices.size());
    for(Arista<T> e : _aristas){
        adj[e.u].push_back(e);
        adj[e.v].push_back(e);
    }
    listaAdyacencias = adj;
}