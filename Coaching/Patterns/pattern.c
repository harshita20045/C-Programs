#include <stdio.h>
void Patterns();
void  RHP();
void LHP();
void FP();
void IRHM();
void  ILHF();
void IFP();
void    PP();
void DP();


int main()
{
    int a = 1;
    printf("\n-------------%c%c--%c%c--%c%c--%c%c-- PATTERNS --%c%c--%c%c--%c%c--%c%c------------\n", a, a, 2, 2, a, a, 2, 2, a, a, 2, 2, a, a, 2, 2);
    Patterns();

    return 0;
}
void Patterns()
{
    char p;
    printf("\n---------------Which Type Of Pyramid You Want To Print -------------------\n"
           "\n------------------a -> Right Half Pyramid-----------------------------------"
           "\n------------------b -> Left Half Pyramid------------------------------------"
           "\n------------------c -> Full Pyramid-----------------------------------------"
           "\n----------------- d -> Inverted Right Half Pyramid--------------------------"
           "\n----------------- e -> Inverted Left Half Pyramid---------------------------"
           "\n----------------- f -> Inverted Full Pyramid--------------------------------"
           "\n------------------g -> Rhombus Pattern--------------------------------------"
           "\n------------------h -> Diamond Pattern--------------------------------------");
    printf("\n \n Enter any value :");
    scanf("%d", &p);
    switch (p)
    {
    case 'a':
        RHP();
        break;
    case 'b':
        LHP();
        break;
    case 'c':
        FP();
        break;
    case 'd':
        IRHM();
        break;
    case 'e':
        ILHF();
        break;
    case 'f':
        IFP();
        break;
    case 'g':
        PP();
        break;
    case 'h':
       DP();
        break;

    default:
        break;
    }
}
void  RHP(){
    
}
void LHP();
void FP();
void IRHM();
void  ILHF();
void IFP();
void    PP();
void DP();
