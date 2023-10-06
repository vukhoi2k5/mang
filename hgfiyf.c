#include "stdio.h"

int main()
{

    int sv;
    int count=0;

    printf("nhap so luong sv :");
    scanf("%d",&sv);
    float diem[sv];
    for(int i=0;i<sv;i++)
    {
        printf("nhap diem cho sv %d : \n",i+1);
        scanf("%f",&diem[i]);


    }

    for(int i=0;i<sv;i++)
    {
        if(diem[i] <5.0)
        {
            count++;
        }
    }

    printf("so luong hoc sinh truot la %d",count);
    return  0;
}