#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

void
main(void){
    int free_m ,occupied_m ,total_m ;
    free_m = kfreememory();
    occupied_m = koccupiedmemory();

    total_m = occupied_m + free_m  ;
    printf("system memory : %d\n", total_m);
    printf("occupied memory: %d\n",occupied_m);
    printf("free memory: %d\n", free_m);
}}