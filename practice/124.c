#include<stdio.h>
int main ()
{
    int i;
    char *poem[4]={"一叶轻舟向东流,","帆稍轻握杨柳手,","风险碧波微起舞,","顺水人从牙科有."};
    char mean[10];
    for (i=0;i<4;i++)
    {
        mean [2*i]=*(poem[i]);
        mean [2*i+1]=*(poem[i]+1);
    }
    mean [2*i]='\0';
    printf("%s\n",mean);
    return 0;
}