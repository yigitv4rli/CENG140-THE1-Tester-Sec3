#include "loop.h"
#include <stdio.h>


void loop_execute(void){
    printf("X:%d r:%d Y:%d z:%d A:%d a:%d c:%d x:%d\n",
           loop_variable_value('X'),
           loop_variable_value('r'),
           loop_variable_value('Y'),
           loop_variable_value('z'),
           loop_variable_value('A'),
           loop_variable_value('a'),
           loop_variable_value('c'),
           loop_variable_value('x'));

            if ((loop_variable_value('A')+loop_variable_value('x')+loop_variable_value('z')) % 3 == 0) {
                printf("JUST MAGIC OF THREE HAPPENED!...Continuing with next ’A’ value.\n");
                loop_continue('A');
            } else if ((loop_variable_value('Y')*loop_variable_value('x')+loop_variable_value('c')) % 3 == 0) {
                printf("JUST NOTHING OF THREE HAPPENED!...Continuing with next ’A’ value.\n");
                loop_continue('A');
            } else if ((loop_variable_value('r')) % 4 == 0) {
                printf("JUST OF THREE HAPPENED!...Continuing with next ’r’ value.\n");
                loop_continue('r');
            }
}
