#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#ifndef rand_h
#define rand_h
//�������������


int *getRandom1()
{
    static int r[10];
    int i;

    //����ʱ������
    srand((unsigned)time(NULL));
    for(i=0;i<10;i++)
    {
        //���������
        r[i]=rand();
        printf("r[%d] = %d\n",i,r[i]);
    }

    return r;
}



#endif