#include "loop.h"
#include <stdio.h>


void loop_execute(void){
    printf("X:%d r:%d Y:%d\n",
           loop_variable_value('X'),
           loop_variable_value('r'),
           loop_variable_value('Y'));

           if ((loop_variable_value('X')+loop_variable_value('r')+loop_variable_value('Y')) % 5 == 0) {
        printf("JUST MAGIC OF FIVE HAPPENED!...Continuing with next ’r’ value.\n");
        loop_continue('r');
    }
}
