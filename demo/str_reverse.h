#include <string.h>

#ifndef str_reverse_h
#define str_reverse_h

char *reverse(char *p)
{
    int len = strlen(p);
    //����һ���µ��ַ���
    char *dest = NULL;
    //�����ַ����ĳ���Ϊ��Ӧ����
    dest = (char*)malloc(len+1);
    *dest = &p[len-1];
    while(len--!=0)
    {
        *dest++ = *p--;
    }
    *dest = 0;

    printf("����ַ�����%s\n",dest);

    return dest;
}

#endif