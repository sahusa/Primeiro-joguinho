#include <stdio.h>
#include <stdlib.h>

int main ()

{
int x,y,z,q,w,e,a,s,d,p1,p2,resul;
printf("Observe a matriz abaixo: \n");
printf("\n\tx | y | z");
printf("\n\tq | w | e");
printf("\n\ta | s | d\n\n");

printf("\n O jogo e o seguinte, voces devem encaixar valores para que\n o determinante final termine em positivo ou negativo");
printf(" Se o determinante for \n positivo o player um ganha, se for negativo o player dois ganha\n vamos brincar???");

printf("\n\n Escolha um valor para x:");
scanf("%d", &x);

while ((x>9)||(x<0))
{
    printf("Valor maior do que nove ou menor que um, escolha outro!!!\n");
    printf("\n\n Escolha um valor para x:");
    scanf("%d", &x);

}

printf("\n\t%d | y | z",x);
printf("\n\tq | w | e");
printf("\n\ta | s | d\n\n");

printf("\n\n Escolha um valor para w:");
scanf("%d", &w);
while ((w>9)||(w<0))
{
    printf("Valor maior do que nove ou menor que zero, escolha outro!!!");
    printf("\n\n Escolha um valor para w:");
    scanf("%d", &w);

}

printf("\n\t%d | y | z",x);
printf("\n\tq | %d | e",w);
printf("\n\ta | s | d\n\n");

printf("\n\n Escolha um valor para z:");
scanf("%d",&z);

while ((z>9)||(z<0))
{
    printf("Valor maior do que nove ou menor que zero, escolha outro!!!");
    printf("\n\n Escolha um valor para z:");
    scanf("%d", &z);

}

printf("\n\t%d | y | %d",x,z);
printf("\n\tq | %d | e",w);
printf("\n\ta | s | d\n\n");

printf("\n\n Escolha um valor para d:");
scanf("%d",&d);
while ((d>9)||(d<0))
{
    printf("Valor maior do que nove ou menor que zero, escolha outro!!!");
    printf("\n\n Escolha um valor para d:");
    scanf("%d", &d);
}

printf("\n\t%d | y | %d",x,z);
printf("\n\tq | %d | e",w);
printf("\n\ta | s | %d\n\n",d);

printf("\n\n Escolha um valor para a:");
scanf("%d",&a);

while ((a>9)||(a<0))
{
    printf("Valor maior do que nove ou menor que zero, escolha outro!!!");
    printf("\n\n Escolha um valor para a:");
    scanf("%d", &a);
}

printf("\n\t%d | y | %d",x,z);
printf("\n\tq | %d | e",w);
printf("\n\t%d | s | %d\n\n",a,d);

printf("\n\n Escolha um valor para q:");
scanf("%d",&q);

while ((q>9)||(q<0))
{
    printf("Valor maior do que nove ou menor que zero, escolha outro!!!");
    printf("\n\n Escolha um valor para q:");
    scanf("%d", &q);
}

printf("\n\t%d | y | %d",x,z);
printf("\n\t%d | %d | e",q,w);
printf("\n\t%d | s | %d\n\n",a,d);

printf("\n\n Escolha um valor para y:");
scanf("%d",&y);
while ((y>9)||(y<0))
{
    printf("Valor maior do que nove ou menor que zero, escolha outro!!!");
    printf("\n\n Escolha um valor para y:");
    scanf("%d", &y);
}

printf("\n\t%d | %d | %d",x,y,z);
printf("\n\t%d | %d | e",q,w);
printf("\n\t%d | s | %d\n\n",a,d);

printf("\n\n Escolha um valor para s:");
scanf("%d",&s);
while ((s>9)||(s<0))
{
    printf("Valor maior do que nove ou menor que zero, escolha outro!!!");
    printf("\n\n Escolha um valor para s:");
    scanf("%d", &s);
}

printf("\n\t%d | %d | %d",x,y,z);
printf("\n\t%d | %d | e",q,w);
printf("\n\t%d | %d | %d\n\n",a,s,d);

printf("\n\n Escolha um valor para e:");
scanf("%d",&e);

while ((e>9)||(e<0))
{
    printf("Valor maior do que nove ou menor que um, escolha outro!!!");
    printf("\n\n Escolha um valor para e:");
    scanf("%d", &e);
}

printf("\n\t%d | %d | %d",x,y,z);
printf("\n\t%d | %d | %d",q,w,e);
printf("\n\t%d | %d | %d\n\n",a,s,d);


p1 = ((x*w*d)+(y*e*a)+(z*q*s));
p2 = ((a*w*z)+(s*e*x)+(d*q*y));
resul = p1-p2;

if (resul > 0) {
    printf("\t\t##########player 1 ganhou############");
    } else { printf("\t\t##########player 2 ganhou#########");}
return 0;
}
