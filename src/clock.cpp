#include "../lib/clock.hpp"
#include <thread>
#include <chrono>
#include <ctime>

void delay(int seconds){
    std::this_thread::sleep_for(std::chrono::seconds(seconds));
}

int getHour(){
    const time_t now = time(0);
    tm *local = localtime(&now);
    return local->tm_hour;
}