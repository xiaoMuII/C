#ifndef strtlen_h
#define strtlen_h
//�ַ�����ʽ
//char site[10] ="shixin";
//char site[10] ={'s','h','i','x','i','n','\0'};

// �����ж��ַ������ȣ��ؼ����ԡ�\0����β 
int strlen1(char *p)
{
    int i=0;
    //*(p+i) *pΪ��һλ�����μ���ȥ
    for(i=0;*(p+i)!='\0';i++)
    {
        ;
    }
    return  i;
}

#endif