#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void soma(int a, int b) {
    printf("%d + %d = %d\n", a, b, a + b);
}
void data_hora(){
 time_t t = time(NULL);
    struct tm tm = *localtime(&t);
    printf("Agora: %d-%02d-%02d %02d:%02d:%02d\n\n", tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour -3, tm.tm_min, tm.tm_sec);
}

int main() {
	data_hora();
    printf("Olá, Estudante!\n");
    soma(5, 3);
    return 0;
}
