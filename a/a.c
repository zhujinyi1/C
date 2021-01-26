#include<stdio.h>
int main()
{
    FILE *fp;
    int i=20,j=30,n,k;
    fp=fopen("d1.dat","w");
    fprintf(fp,"%d\n",i);
    fprintf(fp,"%d\n",j);
    fclose(fp);
    fp=fopen("d1.dat","r");
    fp=fscanf(fp,"%d%d",&k,&n);
    printf("%d %d",k,n);
    fclose(fp);
    return 0;    
}