#include<stdio.h>

int main()
{
    int num = 45,*pnum;
    char  ch = 'a', *pch;
    float  fnum = 2.314, *pfnum;
    double  dnum = 23.4567388;
    double *pdnum;

    pnum = &num;
    pch = &ch;
    pfnum = &fnum;
    pdnum = &dnum;
    printf("The value of num is %d\n", *pnum);
    printf("The value of ch is %c\n", *pch);
    printf("The value of fnum is %.4lf\n", *pfnum);
    printf("The value of dnum is %lf\n", *pdnum);

    return 0;

}