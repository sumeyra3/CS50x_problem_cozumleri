#include <cs50.h>
#include <stdio.h>

void boslukYaz(int a){
    for (int i=0; i<a; i++) printf(" ");
}
void yildizYaz(int a){
    for (int i=0; i<a; i++) printf("#");
}

void makePyramid(int a){
    if (a < 1 || a > 8)
        a = get_int("lutfen 0-8 arasinda bir sayi girin\n");
    int yildiz = 1;
    for (int i=1; i<=a; i++ , yildiz++){
        boslukYaz(a-i);
        yildizYaz(yildiz);
        printf("  ");
        yildizYaz(yildiz);
        printf("\n");
    }
}

int main(void)
{
    int a = get_int("lutfen 0-8 arasinda bir sayi girin\n");
    makePyramid(a);
}
