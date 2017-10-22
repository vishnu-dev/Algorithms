#include <iostream>
#include <vector>

template <class T>
void selectionSort(std::vector<T>& v){

    for (size_t i = 0; i < v.size(); i++) {
        int minInd = i;
        for (size_t j = i; j < v.size(); j++) {
            if (v[minInd] > v[j]) minInd = j;
        }
        T tmp = v[minInd];
        v[minInd] = v[i];
        v[i] = tmp;
    }
}

int main(int argc, char const *argv[]) {
    int n[] = { 3, 7, 4, 2, 5, 9};
    std::vector<int> v(n, n + sizeof(n) / sizeof(int));
    selectionSort(v);
    for(auto &i : v){
        std::cout << i << " ";
    }
    std::cout << "\n";
    return 0;
}
