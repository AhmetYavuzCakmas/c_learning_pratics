#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct books{
    char* bookname;
    char* writer;
    int page;
};
void printMe(struct books*);
int main()
{
    struct books x;
    struct books* y;
    y=&x;
    (*y).bookname="Bu Ulke";
    (*y).writer="Cemil Meric";
    (*y).page=256;
    printMe(y);


    return 0;
}

void printMe(struct books* ptr){
    printf("book name:%s\n",(*ptr).bookname);
    printf("writer: %s\n",(*ptr).writer);
    printf("page: %d",(*ptr).page);
}
