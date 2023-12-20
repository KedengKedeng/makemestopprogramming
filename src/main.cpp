#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "../lib/clock.hpp"

int main(){
    while(true){
        const int currentHour = getHour();
        const int currentDay = getDay();
        if (currentHour >= 17 || currentHour < 8 || currentDay == 0 || currentDay == 6) {
            int status = system("killall code");
            if (status == 0)
                system("notify-send 'Code detected outside of office hours!!!'");
            delay(10);
        }else {
            std::cout << "Within office hours... Safe for now..." << std::endl;
            delay(600);
        }
    }
}
