#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    clock_t start, end;
    double cpu_time_used;
    start = clock();
    system("gedit");
    end = clock();
    cpu_time_used = ((double) (end - start)) / CLOCKS_PER_SEC;
    printf("Tiempo de CPU utilizado: %f segundos\n", cpu_time_used);

    return 0;
}
