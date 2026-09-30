#include "time.h"
#include <ctime>

std::string helloDepOnTime() {
    std::time_t now = std::time(nullptr);
    std::tm* local = std::localtime(&now);

    int hour = 12;
    if (local != nullptr) {
        hour = local->tm_hour;
    }
    if (hour < 6) return "Good night";
    if (hour < 12) return "Good morning";
    if (hour < 18) return "Good afternoon";
    return "Good evening";
}
