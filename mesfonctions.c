//
// Created by DERIGENT alexandre on 20/09/2021.
//

#include <stdio.h>
#include "mesfonctions.h"
void exo1 (){
    int a,b;
    printf("rentrer a");
    scanf("%d",&a);
    printf("rentrer b");
    scanf("%d",&b);
    if (a>b)
        printf("%d",a);
    else
        printf("%d",b);
    return;
}
void exo2(){
    int lon,lar;
    printf("rentrer la longueur \n");
    scanf("%d",&lon);
    printf("rentrer la largeur \n");
    scanf(" %d",&lar);
    printf("l'aire du rectangle est %d",lon*lar);
}
void exo3(){
    int a;
    printf("rentrer un entier\n");
    scanf("%d",&a);
    if (a%3==0)
        printf("c'est un multiple de 3 et ");
    else
        printf("ce n'est pas un multiple de 3 et ");
    if (a>10)
        printf("est supérieur à 10");
    else
        printf("est inferieur ou egale à 10");
}
void exo4(){
    int a,e;
    printf("ete vous etudiant? si oui taper 1\n");
    scanf("%d",&e);
    printf("quel est votre age?\n");
    scanf(" %d",&a);
    if (a<=12)
        printf("le billet est a 4 euro");
    else if (a>=65||a<27&&e==1)
        printf("le billet est a 6 euro");
    else
        printf("le billet est a 9 euro");
}
void exo5(){
    int b;
    printf("quel boisson souhaitez-vous?\n");
    scanf("%d",&b);
    if (b==1)
        printf("soda ");
    else if (b==2)
        printf("jus");
    else if (b==3)
        printf("eau");
    else if (b==10)
        printf("café");
    else if (b==11)
        printf("soupe");
    else
        printf("pas en stock");
}
int verification(float a){// cette fonction n'est utile que pour l'exo 6
    if (a<=20 && a>=0)
        return 1;
    else
        printf("entrer un note valable a defaut d'etre bonne\n");
        return 0;
}
void exo6(){
    int bon=0;
    float a,b,c;
    printf("entrer votre 1ere valeur\n");
    while (bon==0) {
        scanf("%f", &a);
        bon = verification(a);
    }
    bon=0;
    printf("entrer votre 2nd valeur\n");
    while (bon==0) {
        scanf("%f", &b);
        bon = verification(b);
    }
    bon=0;
    printf("entrer votre 2nd valeur\n");
    while (bon==0){
        scanf("%f",&b);
        bon=verification(b);
    }
    printf("votre moyenne est %f",(a+b+c)/3);
}

void exo7(){
    int i,nbc,nbe,tot=0;
    printf("combien de classe sont ouverte?\n");
    scanf("%d",&nbc);
    for (i=0;i<nbc;i++){
        printf("combiel y a t il d'eleve dans la classe?\n");
        scanf("%d",&nbe);
        tot=nbe+tot;
    }
    printf("il y a %d eleve\n",tot);
}
void exo8(){
    int a;
    printf("saissiser un nombre entier multiple de 7 et de 2\n");
    scanf("%d",&a);
    while (a%7!=0 || a%2!=0) {
        printf("les condition ne sont pas remplis\n");
        scanf("%d",&a);
    }
    printf("c'est un multiple de 2 et 7\n");
}
void exo9(){
    int a,i=0;
    printf("combien de brique avez vous?\n");
    scanf("%d",&a);
    while (a-i*i>0){
        i++;
        a=a-i*i;
    }
    printf("vous pouvez faire une pyramide de %d etage\n",i);
}
void exo10(){
    float tot=0,n=0,c=0;
    printf("saissisez les entier\n");
    while (n>=0){
        tot=tot+n;
        scanf("%f",&n);
        c=c+1;
    }
    c=c-1;
    printf("la moyenne est %f",tot/c);
}