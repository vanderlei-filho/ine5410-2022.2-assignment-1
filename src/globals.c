#include <stdlib.h>

#include "globals.h"


virtual_clock_t *global_virtual_clock = NULL;
conveyor_belt_t *global_conveyor_belt = NULL;

void globals_set_virtual_clock(virtual_clock_t *virtual_clock)
{
    global_virtual_clock = virtual_clock;
}

virtual_clock_t *globals_get_virtual_clock()
{
    return global_virtual_clock;
}

void globals_set_conveyor_belt(conveyor_belt_t *conveyor_belt)
{
    global_conveyor_belt = conveyor_belt;
}

conveyor_belt_t *globals_get_conveyor_belt()
{
    return global_conveyor_belt;
}

/**
 * @brief Finaliza todas as variáveis globais.
 * Se criar alguma variável global que faça uso de mallocs, lembre-se sempre 
 * de usar o free dentro dessa função.
 */
void globals_finalize() {
    virtual_clock_finalize(global_virtual_clock);
    conveyor_belt_finalize(global_conveyor_belt);
}