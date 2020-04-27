#include <stdio.h>
#include <stdlib.h>

int main()
{
    int st, et, dt;
    scanf("%d %d", &st, &et);
    if(st > et) {
        dt = (24 - st) + et;
        printf("O JOGO DUROU %d HORA(S)\n", dt);
    } else if(st < et) {
        dt = et - st;
        printf("O JOGO DUROU %d HORA(S)\n", dt);
    } else if (st == et) {
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    return 0;
}
