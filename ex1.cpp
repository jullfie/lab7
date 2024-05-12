// программа, анализирующая объем занимаемой памяти для вектора и списка.
#include <iostream>
#include <vector>
#include <list>

int main() {
    // Создание вектора и списка с элементами типа int
    std::vector<int> vec;
    std::list<int> lst;

    // Добавление элементов в вектор и список
    for (int i = 0; i < 10000; ++i) {
        vec.push_back(i);
        lst.push_back(i);
    }

    // Определение размера в байтах
    size_t vecSize = sizeof(vec);
    size_t lstSize = sizeof(lst);

    std::cout << "Размер вектора (в байтах): " << vecSize << std::endl;
    std::cout << "Размер списка (в байтах): " << lstSize << std::endl;

    return 0;
}
