#include <stdio.h>
#include <stdlib.h>
#include "../lib/clock.hpp"

#define SHELLSCRIPT "\
#/bin/bash \n\
killall code \n\
"

int main(){
    while(true){
        system(SHELLSCRIPT);
        delay(10);
    }
}