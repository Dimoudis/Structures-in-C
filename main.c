#include <stdio.h>
#include <stdlib.h>
#define N 2
#define AR 0.6

typedef struct  {
    int cwNum;
    char title[100];
    int firstRelativity;
    int firstGrade;
    int secondRelativity;
    int secondGrade;
    float finallyGrade;
    char result[10];
}submission;

float sinolikosBathmos(submission sub);
void display_max(submission pin[]);
int main() {
    submission pin[N];
    char titlos[100];
    int firstRelativity;
    int firstGrade;
    int secondRelativity;
    int secondGrade;
    float finallyGrade;
    char result[10];
    for(int i=0;i<N;i++){
        printf("Eisagwgh stoixeiwn gia thn %i ergasia\n",i+1);
        printf("Dwse titlo ergasias\n");
        scanf("%s",&titlos);
        //printf("%s\n",titlos);
        do {
            printf("Dwse thn synafeia toy 1ou krith. Oi apodektes times einai 0, 1, 2, h 3\n");
            scanf("%i",&firstRelativity);
        }while(firstRelativity<0 || firstRelativity>3);
        do {
            printf("Dwse ton vathmo tou 1ou krith. Oi apodektes times einai apo -3 ews kai 3.\n");
            scanf("%i", &firstGrade);
        }while(firstGrade<-3 || firstGrade>3);
        do {
            printf("Dwse thn synafeia toy 2ou krith. Oi apodektes times einai 0, 1, 2, h 3\n");
            scanf("%i", &secondRelativity);
        }while(secondRelativity<0 || secondRelativity>3);
        do {
            printf("Dwse ton vathmo tou 2ou krith. Oi apodektes times einai apo -3 ews kai 3.\n");
            scanf("%i", &secondGrade);
        }while(secondGrade<-3 || secondGrade>3);
        //finallyGrade = (firstRelativity*firstGrade + secondRelativity*secondGrade)/2.0;


        submission temp;
        temp.cwNum=i;
        strcpy (temp.title,titlos);
        temp.firstRelativity=firstRelativity;
        temp.firstGrade=firstGrade;
        temp.secondRelativity=secondRelativity;
        temp.secondGrade=secondGrade;
        temp.finallyGrade=sinolikosBathmos(temp);
        pin[i]=temp;
        printf("Synolikh aksiologish ergasias: %.2f\n\n",pin[i].finallyGrade);

    }

    display_max( pin);



}

float sinolikosBathmos(submission sub){
    double finallyGrade = (sub.firstRelativity*sub.firstGrade + sub.secondRelativity*sub.secondGrade)/2.0;
    return finallyGrade;
}

void display_max(submission pin[]){
    float maxi=pin[0].finallyGrade;
    for (int i=0;i<N;i++){
        if(pin[i].finallyGrade>maxi){
            maxi=pin[i].finallyGrade;
        }
    }
    printf("H ipsiloteri synolih aksiologisi einai %.2f\n",maxi);

}


