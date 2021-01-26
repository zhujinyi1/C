#include<stdio.h>
int main()
{
    char a[10][1000],b[10][1000];
    int n,i,j,k;
    scanf("%d",&n);
    fflush(stdin);
    for(i=0;i<n;i++)
    {
        gets(a[i]);
        fflush(stdin);
        j=0,k=0;
        while(a[i][j]!='\0')
        {
            if((a[i][j]!='I'||a[i][j+1]!=' ')&&(a[i][j]>='A'&&a[i][j]<='Z'))
            {
                b[i][k]=a[i][j]+32;
                j++,k++;
            }
            else if((a[i][j]=='c'||a[i][j]=='C')&&a[i][j+1]=='a'&&a[i][j+2]=='n'&&a[i][j+3]==' '&&a[i][j+4]=='I')
                b[i][k]='I',k+=1,b[i][k]=' ',k+=1,b[i][k]='c',k+=1,b[i][k+3]='a',k+=1,b[i][k+4]='n',i+=5;
            else if((a[i][j]=='c'||a[i][j]=='C')&&a[i][j+1]=='o'&&a[i][j+2]=='u'&&a[i][j+3]=='l'&&a[i][j+4]=='d'&&a[i][j+5]==' '&&a[i][j+6]=='I')
                b[i][k]='I',k+=1,b[i][k]=' ',k+=1,b[i][k]='c',k+=1,b[i][k]='o',k+=1,b[i][k]='u',k+=1,b[i][k]='l',k+=1,b[i][k]='d',k+=1,i+=7;
            else if(a[i][j]=='I')
                b[i][k]='y',k+=1,b[i][k]='o',k++,b[i][k]='u',k++,i++;
            else if(a[i][j]=='m',a[i][j+1]=='e')
                b[i][k]='y',k+=1,b[i][k]='o',k++,b[i][k]='u',k++,i+=2;
            else if(a[i][j]=='?')
                b[i][k]='!',i++,k++;
            else
            {
                b[i][k]=a[i][j];
                i++;
                k++;
                if(b[i][k]==' '&&b[i][k-1]==' ')
                    k--;
            }
        }
        b[i][k]='\0';
    }
    for(i=0;i<n;i++)
    {
    printf("%s\n",a[i]);
    printf("AI: %s\n",b[i]);
    }
    return 0;
}