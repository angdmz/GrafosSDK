#include "gtest-1.8.1/gtest.h"
#include "../src/GrafoSimple.h"
#include <vector>
#include <cstdio>

using namespace std;

/**
 * Para correr valgrind:
 * - Seleccionar arriba a la derecha la opción "correrValgrind"
 * - Hacer build del proyecto (Ctrl+F9)
 */

TEST(grafo_simple_tests, test_grafo_vacio) {
    auto o = new GrafoSimple<int>();
    auto cardinalVertices = o->cardinalVertices();
    auto cardinalAristas = o->cardinalAristas();
    auto esConexo = o->esConexo();
    auto tieneCiclos = o->tieneCiclos();

    ASSERT_EQ(0,cardinalVertices);
    ASSERT_EQ(0,cardinalAristas);
    ASSERT_EQ(true, esConexo);
    ASSERT_EQ(false,tieneCiclos);
}

TEST(grafo_simple_tests, test_un_vertice_solo) {
    auto vertices = new set<vector<int>>();
    vector<int> a;
    vertices->insert(a);
    auto o = new GrafoSimple<vector<int>>(*vertices);
    auto cardinalVertices = o->cardinalVertices();
    auto cardinalAristas = o->cardinalAristas();
    auto esConexo = o->esConexo();
    auto tieneCiclos = o->tieneCiclos();

    ASSERT_EQ(1,cardinalVertices);
    ASSERT_EQ(0,cardinalAristas);
    ASSERT_EQ(true,esConexo);
    ASSERT_EQ(false,tieneCiclos);
}

TEST(grafo_simple_tests, test_constructor_aristas) {
    auto eje = new Arista<int>(1,2);
    auto ejes = new set<Arista<int>>();
    ejes->insert(*eje);
    auto o = new GrafoSimple<int>(*ejes);
    auto cardinalVertices = o->cardinalVertices();
    auto cardinalAristas = o->cardinalAristas();
    auto esConexo = o->esConexo();
    auto tieneCiclos = o->tieneCiclos();

    ASSERT_EQ(2,cardinalVertices);
    ASSERT_EQ(1,cardinalAristas);
    ASSERT_EQ(true,esConexo);
    ASSERT_EQ(false,tieneCiclos);
}