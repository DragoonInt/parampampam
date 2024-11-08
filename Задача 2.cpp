#include <iostream>
#include <string>
std::string getSeason(int month) {
    switch (month) {
        case 1: // Янв
        case 2: // Фев
        case 12: // Дек
            return "Зима";
        case 3: // Март
        case 4: // Апр
        case 5: // Май
            return "Весна";
        case 6: // Июнь
        case 7: // Июль
        case 8: // Авг
            return "Лето";
        case 9: // Сен
        case 10: // Окт
        case 11: // Нояб
            return "Осень";
        default:
            return "Это не месяц";
    }
}
int main() {
    int month;
    std::cout << "Введите номер месяца (1-12): ";
    std::cin >> month;
    std::string season = getSeason(month);
    std::cout << "Это " << season << std::endl;
    return 0;
}
