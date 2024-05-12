// ���������, ������������� ����� ���������� ������ ��� ������� � ������.
#include <iostream>
#include <vector>
#include <list>

int main() {
    // �������� ������� � ������ � ���������� ���� int
    std::vector<int> vec;
    std::list<int> lst;

    // ���������� ��������� � ������ � ������
    for (int i = 0; i < 10000; ++i) {
        vec.push_back(i);
        lst.push_back(i);
    }

    // ����������� ������� � ������
    size_t vecSize = sizeof(vec);
    size_t lstSize = sizeof(lst);

    std::cout << "������ ������� (� ������): " << vecSize << std::endl;
    std::cout << "������ ������ (� ������): " << lstSize << std::endl;

    return 0;
}
