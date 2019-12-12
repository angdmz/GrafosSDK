#include <gtest/gtest.h>
#include <GrafoSimple.h>
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
    auto cardinalAristas = o->cardinalVertices();
    auto esConexo = o->esConexo();
    auto tieneCiclos = o->tieneCiclos();

    ASSERT_EQ(0,cardinalVertices);
    ASSERT_EQ(0,cardinalAristas);
    ASSERT_EQ(true,esConexo);
    ASSERT_EQ(false,tieneCiclos);
}

TEST(grafo_simple_tests, test_un_vertice_solo) {
    auto v1 = new vector<int>();
    v1->emplace_back(1);

    auto adjList = new vector<vector<int>>;

    auto o = new GrafoSimple<vector<int>>();
    auto cardinalVertices = o->cardinalVertices();
    auto cardinalAristas = o->cardinalVertices();
    auto esConexo = o->esConexo();
    auto tieneCiclos = o->tieneCiclos();

    ASSERT_EQ(1,cardinalVertices);
    ASSERT_EQ(0,cardinalAristas);
    ASSERT_EQ(true,esConexo);
    ASSERT_EQ(false,tieneCiclos);
}
