//
// Created by adorda on 12/12/19.
//

#include "Arista.h"
#include "GrafoSimple.h"


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
    return vertices.size();
}

template<typename T>
int GrafoSimple<T>::cardinalAristas() {
    return aristas.size();
}

template<typename T>
GrafoSimple<T>::GrafoSimple(const std::set<T> &vertices, const std::set<Arista<T>> &aristas): vertices(vertices), aristas(aristas){
    std::map<T, std::set<T>> adj(vertices.size());
    for(Arista<T> e : aristas){
        adj[e.V()].push_back(e);
        adj[e.U()].push_back(e);
    }
    mapaAdyacencias = adj;
}

template<typename T>
GrafoSimple<T>::GrafoSimple(const std::set<T> &vertices): vertices(vertices){

}

template<typename T>
GrafoSimple<T>::GrafoSimple(const std::set<Arista<T>>& aristas): aristas(aristas){
    for(Arista<T> e : aristas){
        vertices.insert(e.U());
        vertices.insert(e.V());
        mapaAdyacencias[e.V()].insert(e.U());
        mapaAdyacencias[e.U()].insert(e.V());
    }
}

template<typename T>
GrafoSimple<T>::GrafoSimple() = default;
