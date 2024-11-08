#include <iostream>
#include <string>
std::string getSeason(int month) {
    switch (month) {
        case 1: // ���
        case 2: // ���
        case 12: // ���
            return "����";
        case 3: // ����
        case 4: // ���
        case 5: // ���
            return "�����";
        case 6: // ����
        case 7: // ����
        case 8: // ���
            return "����";
        case 9: // ���
        case 10: // ���
        case 11: // ����
            return "�����";
        default:
            return "��� �� �����";
    }
}
int main() {
    int month;
    std::cout << "������� ����� ������ (1-12): ";
    std::cin >> month;
    std::string season = getSeason(month);
    std::cout << "��� " << season << std::endl;
    return 0;
}
