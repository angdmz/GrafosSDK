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

        Arista(T v, T u): v(v), u(u){}

        bool operator==(const Arista& e) const {
            return (v == e.v and u == e.u) or (v == e.u and u == e.v);
        }

        T V();
        T U();
};


#endif //GRAFOSSDK_ARISTA_H
