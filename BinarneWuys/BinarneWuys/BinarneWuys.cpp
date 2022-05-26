#include <iostream>


    int wyszukaj(double* lista, int n, double szukana) {
        int L = 0, P = n - 1, sr = 0;
        while (L <= P) {
            sr = (L + P) / 2;
            if (lista[sr] == szukana)
                return sr;
            if (lista[sr] > szukana)
                P = sr - 1;
            else
                L = sr + 1;
        }
        return -1;
    }


