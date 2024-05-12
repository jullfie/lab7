#include <iostream>
#include <vector>
#include <list>
#include <chrono>

int main() {
    const int size = 1000000;
    std::vector<int> vec(size);
    std::list<int> lst(size);

    // Заполнение вектора и списка значениями от 0 до size-1
    for (int i = 0; i < size; ++i) {
        vec[i] = i;
        lst.push_back(i);
    }

    // Измерение времени доступа ко всем элементам вектора
    auto startVec = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < size; ++i) {
        int val = vec[i];
    }
    auto endVec = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> vecDuration = endVec - startVec;

    // Измерение времени доступа ко всем элементам списка
    auto startList = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < size; ++i) {
        int val = lst.front();
        lst.pop_front();
    }
    auto endList = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> listDuration = endList - startList;

    std::cout << "Время доступа ко всем элементам вектора: " << vecDuration.count() << " секунд" << std::endl;
    std::cout << "Время доступа ко всем элементам списка: " << listDuration.count() << " секунд" << std::endl;

    return 0;
}
