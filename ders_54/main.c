#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
struct students{
    char myLetter;
    char* name;
    char* lastName;
    int no;
    float score;
    char parentName[30];

};
int main()
{
    struct students x;
    x.myLetter='A';
    x.name="Yavuz";
    x.lastName="Cakmas";
    x.no=122;
    x.score=85,7;
    strcpy(x.parentName,"Ahmet"); //struct ta array bu þekilde çaðrýlýr

    printf("letter:%d\n",x.myLetter);
    printf("name:%s\n",x.name);
    printf("last name:%s\n",x.lastName);
    printf("no:%d\n",x.no);
    printf("score:%.2f\n",x.score);
    printf("parent name:%s\n\n",x.parentName);

    printf("*********************************\n\n");

    //daha kýsayolu var
    struct students y={'B',"Adem","Cakmas",451,98.1,"Maruf"};

    printf("letter:%d\n",y.myLetter);
    printf("name:%s\n",y.name);
    printf("last name:%s\n",y.lastName);
    printf("no:%d\n",y.no);
    printf("score:%.2f\n",y.score);
    printf("parent name:%s\n",y.parentName);




    return 0;
}
