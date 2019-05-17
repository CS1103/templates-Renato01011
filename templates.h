#ifndef QUICKSORT_TEMPLATES_H
#define QUICKSORT_TEMPLATES_H
#include <vector>

template <typename T, template <typename, typename...> class ContainerType>
void QuickSort (ContainerType <T> &v) {
    for (int i = v.size()-1; i >= 0; i--)
        for(int j = v.size()-1; j >= 0; j--) {
            T pivo = v[i];
            if (pivo > v[j]) {
                v[i] = v[j];
                v[j] = pivo;
            }
        }
}

template <typename T, int N>
void QuickSort (T (&v)[N]) {
    for (int i = N-1; i >= 0; i--)
        for(int j = N-1; j >= 0; j--) {
            T pivo = v[i];
            if (pivo > v[j]) {
                v[i] = v[j];
                v[j] = pivo;
            }
        }
}

template <typename T, template <typename, typename...> class ContainerType>
std::string ContainerToString (ContainerType <T> &v) {
    std::string CTS = "";
    for (int i = 0; i < v.size()-1; i++) {
        CTS += std::to_string(v[i]);
        CTS += " ";
    }
    CTS += std::to_string(v[v.size()-1]);
    return CTS;
}

template <typename T, int N>
std::string ContainerToString (T (&v)[N]) {
    std::string CTS = "";
    for (int i = 0; i < N-1; i++) {
        CTS += std::to_string(v[i]);
        CTS += " ";
    }
    CTS += std::to_string(v[N-1]);
    return CTS;
}

#endif //QUICKSORT_TEMPLATES_H