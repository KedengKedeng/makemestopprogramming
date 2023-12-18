#include <stdio.h>
#include <stdlib.h>

#define SHELLSCRIPT "\
#/bin/bash \n\
killall code \n\
"

int main(){
    system(SHELLSCRIPT);
}