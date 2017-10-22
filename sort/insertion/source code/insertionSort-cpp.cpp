#include <iostream>
#include <vector>

template <class T>
void insertionSort(std::vector<T>& vec){
    for (int i = 0; i < vec.size(); i++) {
        for (int j = i - 1; j >= 0; j--) {
            if (vec[j+1] < vec[j]) {
                T tmp = vec[j+1];
                vec[j + 1] = vec[j];
                vec[j] = tmp;
            }
        }
    }
}

int main(int argc, char const *argv[]) {
    // int n[] = {1,7, 3, 6, 3, 5};
    // std::vector<int> v(n, n + sizeof(n) / sizeof(int));
    // insertionSort(v);
    // for (auto &i : v) {
    //     std::cout << i << " ";
    // }
    // std::cout << "\n";

    char c[] = {'z', 'b', 't', 'r'};
    std::vector<char> v(c, c + sizeof(c) / sizeof(char));
    insertionSort(v);
    for (auto &i : v) {
        std::cout << i << " ";
    }
    std::cout << "\n";
    return 0;
}
