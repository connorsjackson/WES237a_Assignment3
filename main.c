#include "cycletime.h"

//wrap the init_counter(x,y) function
void initialize_counter(int32_t reset, int32_t divider) {
    init_counters(reset, divider);
}

//wrap the get_cycle_count function
unsigned int getcount() {
    return get_cyclecount();
}