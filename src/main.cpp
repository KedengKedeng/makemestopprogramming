#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "../lib/clock.hpp"

#define SHELLSCRIPT "\
#/bin/bash \n\
killall code \n\
"

int main(){
    while(true){
        const int currentHour = getHour();
        if (currentHour >= 17 || currentHour < 8) {
            std::cout << "Code detected outside of office hours!!!" << std::endl;
            system(SHELLSCRIPT);
            delay(10);
        }else {
            std::cout << "Within office hours... Safe for now..." << std::endl;
            delay(600);
        }
    }
}