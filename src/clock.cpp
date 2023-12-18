#include "../lib/clock.hpp"
#include <thread>
#include <chrono>

void delay(int seconds){
    std::this_thread::sleep_for(std::chrono::seconds(seconds));
}