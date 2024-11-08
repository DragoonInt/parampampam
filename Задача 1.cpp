#include <iostream>
#include <vector>
#include <string>
class DayToMonth {
private:
    std::vector<int> monthDays = {
        31, // Янв
        28, // Фев
        31, // Март
        30, // Апр
        31, // Май
        30, // Июнь
        31, // Июль
        31, // Авг
        30, // Сен
        31, // Окт
        30, // Нояб
        31  // Дек
    };
public:
    std::string getMonth(int dayOfYear) {
        if (dayOfYear < 1 || dayOfYear > 364) {
            return "Nekorectny den goda";
        }
        if (dayOfYear == 364) {
            return "Eto visokosny god :]";
        }
        int currentDay = 0;
        for (int i = 0; i < monthDays.size(); ++i) {
            currentDay += monthDays[i];
            if (dayOfYear <= currentDay) {
                return getMonthName(i);
            }
        }
    }
private:
    std::string getMonthName(int monthIndex) {
        std::vector<std::string> monthNames = {
            "Junuary", "February", "March", "April", "May", "June",
            "Jule", "August", "September", "October", "November", "December"
        };
        return monthNames[monthIndex];
    }
};
int main() {
    DayToMonth converter;
    int day;
    std::cout << "den goda: ";
    std::cin >> day;
    std::string month = converter.getMonth(day);
    std::cout << "Den " << day << " eto mesyac: " << month << std::endl;
    return 0;
}
