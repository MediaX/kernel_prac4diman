#include <inc/vsyscall.h>
#include <inc/lib.h>

static inline uint64_t
vsyscall(int num) {
    // LAB 12: Your code here
    if (num >= NVSYSCALLS){
        return -1;
    } else {
        return vsys[num]; 
    }
}

int
vsys_gettime(void) {
    return vsyscall(VSYS_gettime);
}
