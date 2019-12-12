#include <gtest/gtest.h>
#include <Arista.h>
#include <vector>
#include <cstdio>

using namespace std;

/**
 * Para correr valgrind:
 * - Seleccionar arriba a la derecha la opción "correrValgrind"
 * - Hacer build del proyecto (Ctrl+F9)
 */

TEST(arista_test, test_constructor_arista) {
    auto a1 = new Arista<int>(1,2);
    auto a2 = new Arista<int>(2,1);
    ASSERT_EQ(a1,a2);
    ASSERT_EQ(a1->V(),1);
    ASSERT_EQ(a1->U(),2);
}
