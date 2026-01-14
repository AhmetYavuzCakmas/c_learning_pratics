#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct candidateInfo{
    char* name;
    char*lastName;
    int age;
    int note;
    float average;
};
struct interview{
    char* interviewer;
    char* interviewDate;
    struct candidateInfo candidate;
    int interviewNote;
};
int main()
{
    struct interview y;
    y.interviewer="Muslum Gun";
    y.interviewDate="25.50.2025";
    y.interviewNote=89;

    y.candidate.name="Ahmet";
    y.candidate.lastName="Cakmas";
    y.candidate.age=21;
    y.candidate.note=80;
    y.candidate.average=2.89;

    printf("Mulakati yapan: %s\n",y.interviewer);
    printf("Mulakat Tarihi: %s\n",y.interviewDate);
    printf("Mulakat Notu: %d\n",y.interviewNote);

   printf("Adayin adi: %s\n",y.candidate.name);
   printf("Adayin soyadi: %s\n",y.candidate.lastName);
   printf("Adayin yasi: %d\n",y.candidate.age);
   printf("Adayin sinav notu: %d\n",y.candidate.note);
   printf("Adayin lisans ortalamasi: %.2f",y.candidate.average);



    return 0;
}
