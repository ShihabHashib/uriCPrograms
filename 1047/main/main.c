#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sh, sm, eh, em, dh, dm;
    scanf("%d %d %d %d", &sh, &sm, &eh, &em);

    if (sh == eh && sm == em) {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    if (sh == eh && sm != em) {
        if(sm < em) {
            dh = (eh - sh);
            dm = em - sm;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dh, dm);
        } else if(sm > em) {
            dh = 24 + (eh - sh);
            dm = 60 + (em - sm);
            dh--;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dh, dm);
        }
    }
    if (sh != eh && sm == em) {
        if(sh < eh) {
            dh = 24 + (eh - sh);
            dm = (em - sm);
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dh, dm);
        } else if(sh > eh) {
            dh = 24 + (eh - sh);
            dm = (em - sm);
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dh, dm);
        }
    }
    if (sh != eh && sm != em) {
        if(sh < eh && sm < em) {
            dh = (eh - sh);
            dm = (em - sm);
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dh, dm);
        } else if(sh < eh && sm > em) {
            dh = (eh - sh);
            dm =60 + (em - sm);
            dh--;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dh, dm);
        } else if(sh > eh && sm > em) {
            dh = 24 + (eh - sh);
            dm =60 + (em - sm);
            dh--;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dh, dm);
        } else if(sh > eh && sm < em) {
            dh = 24 + (eh - sh);
            dm = (em - sm);
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", dh, dm);
        }
    }

    return 0;
}
