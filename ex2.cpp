#include <iostream>
#include <vector>
#include <list>
#include <chrono>

int main() {
    const int size = 1000000;
    std::vector<int> vec(size);
    std::list<int> lst(size);

    // ���������� ������� � ������ ���������� �� 0 �� size-1
    for (int i = 0; i < size; ++i) {
        vec[i] = i;
        lst.push_back(i);
    }

    // ��������� ������� ������� �� ���� ��������� �������
    auto startVec = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < size; ++i) {
        int val = vec[i];
    }
    auto endVec = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> vecDuration = endVec - startVec;

    // ��������� ������� ������� �� ���� ��������� ������
    auto startList = std::chrono::high_resolution_clock::now();
    for (int i = 0; i < size; ++i) {
        int val = lst.front();
        lst.pop_front();
    }
    auto endList = std::chrono::high_resolution_clock::now();
    std::chrono::duration<double> listDuration = endList - startList;

    std::cout << "����� ������� �� ���� ��������� �������: " << vecDuration.count() << " ������" << std::endl;
    std::cout << "����� ������� �� ���� ��������� ������: " << listDuration.count() << " ������" << std::endl;

    return 0;
}
