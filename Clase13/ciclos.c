#include <stdio.h>
#include <time.h>

int main (){
    clock_t start, end;
    double cpu_time_used;
    start = clock();
// codigo a medir 



end = clock();
cpu_time_used = ((double)(end - start))/CLOCKS_PER_SEC;

printf("el codigo tomo %f segundos de tiempo de CPU.\n",cpu_time_used);
}