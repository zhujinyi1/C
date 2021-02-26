#include <stdio.h>
struct student
{
    char num[6];
    char name[80];
    int cj1, cj2, cj3;
    int zf;
};
int main()
{
    int n, sum, i;
    struct student students[10];
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%s %s %d %d %d", students[i].num, &students[i].name, &students[i].cj1, &students[i].cj2, &students[i].cj3);
        students[i].zf = students[i].cj1 + students[i].cj2 + students[i].cj3;
    }
    sum = students[0].zf;
    for (i = 0; i < n; i++)
    {
        if (students[i].zf > sum)
            sum = students[i].zf;
    }
    for (i = 0; i < n; i++)
    {
        if (students[i].zf == sum)
            printf("%s %s %d\n", students[i].name, students[i].num, students[i].zf);
    }
}