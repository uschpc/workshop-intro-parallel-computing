#include <stdio.h>
#include <omp.h>

int main(int argc, char** argv) {
    #pragma omp parallel
    {
    // printf() displays the string inside quatation
    printf("Hello, OMP C World! from process: %d\n", omp_get_thread_num()); 
    }
    return 0;
}

