/*
#include <iostream>
#include <vector>
#include "templates.h"

int main() {

    std::vector <int> v1;
    v1.push_back(100);
    v1.push_back(5);
    v1.push_back(120);
    v1.push_back(160);
    v1.push_back(10);
    v1.push_back(80);
    v1.push_back(1);

    for (int i = v1.size(); i > 0; i--)
        std::cout << v1[v1.size()-i] << " ";

    std::cout << std::endl;
    QuickSort(v1);
    std::cout << ContainerToString(v1);

    for (int i = v1.size(); i > 0; i--)
        std::cout << v1[v1.size()-i] << " ";

    double L[7];
    L[0] = 100.2525;
    L[1] = 5.2525;
    L[2] = 120.2525;
    L[3] = 160.2525;
    L[4] = 10.2525;
    L[5] = 80.2525;
    L[6] = 1.2525;

    std::cout << std::endl;

    for (int i = 0; i < 7; i++)
        std::cout << L[i] << " ";

    std::cout << std::endl;
    QuickSort(L);
    std::cout << ContainerToString(L);

    for (int i = 0; i < 7; i++)
        std::cout << L[i] << " ";

    return 0;
}
*/