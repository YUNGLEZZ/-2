#include <stdio.h>
#include <stdbool.h> 
int main(void) {
    int flags_sum, module_ready1, fault_state1; 
    scanf("%d %d", &module_ready1, &fault_state1);
    bool module_ready = module_ready1;
    bool fault_state = fault_state1;
    flags_sum = module_ready + fault_state;
    printf("MODULE_READY: %d\n", module_ready);
    printf("FAULT_STATE: %d\n", fault_state); 
    printf("BOOL_SIZE: %zu\n", sizeof(bool)); 
    printf("FLAGS_SUM: %d\n", flags_sum);
    return 0;
}