#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Length sizeof(struct student) //�������ٿռ�
int n = 0;
struct student
{
	char name[20];	//����
	char num[20];	//ѧ��
	char Class[20]; //�༶
	char major[20]; //רҵ
	int age;		//����
	int score;		//�ɼ�
	struct student *next;
} * head, *p, *p1, *p2; //head��ʾ��ͷ  p��ʾ��ͬλ�õ�����
void add()				//���
{
	p1 = (struct student *)malloc(Length); //���ٴ洢�ռ�
	if (n == 0)							   //�ж�����ͷ
		head = p1;						   //n=0����������ǵ�һ������     //p2�Ľ�β��ָ��ĵ�ַ��p1
	else
		p2->next = p1; //n!=0 ��������������
	system("cls");
	printf("������ѧ��������Ϣ��\n������");
	scanf("%s", &p1->name);
	printf("ѧ�ţ�");
	scanf("%s", &p1->num);
	printf("���䣺");
	scanf("%d", &p1->age);
	printf("�༶��");
	scanf("%s", &p1->Class);
	printf("רҵ��");
	scanf("%s", &p1->major);
	printf("�ɼ���");
	scanf("%d", &p1->score);
	p2 = p1;		 //p2ָ��p1���ڵĵ�ַ
	p2->next = NULL; //���������־
	n += 1;			 //n�ж��ǲ��ǵ�һ������
	system("pause");
	system("cls");
}
void print()
{
	if (n != 0)
	{
		p = head; //p��ָ��ͷ
		system("cls");
		printf("����\tѧ��\t\t�༶\t����\tרҵ\t\t�ɼ�\n");
		do
		{
			printf("%-8s%-16s%-8s%-8d%-16s%-8d\n", p->name, p->num, p->Class, p->age, p->major, p->score);
			p = p->next;	 //p��ӡ���� ��pָ��next���ж���һ��������û������
		} while (p != NULL); //ֻҪpָ����ڴ����������� �ʹ�ӡ����
	}
	else
		printf("******����û���������.\n");
	system("pause");
	system("cls");
}
void find() //����
{
	void find1();
	void find2();
	if (n != 0)
	{
		int a;
		system("cls");
		printf("1.����������\n2.��ѧ�Ų�ѯ\n");
		scanf("%d", &a);
		switch (a)
		{
		case 1:
			find1();
			break;
		case 2:
			find2();
			break;
		}
	}
	else
	{
		printf("******����û���������Ӵ!\n");
		system("pause");
	}
}
void Delete()
{
	if (n != 0)
	{
		struct student *f, *l; //�����µ�ָ�� fʹ����ָ��Ҫɾ�������������ͷ��ڴ�!
		char a[20];
		printf("������Ҫɾ����������");
		scanf("%s", &a);
		p = head;
		if (strcmp(head->name, a) == 0)
		{
			f = head;
			head = head->next;
			free(f);
		}
		else
		{
			do
			{
				if (strcmp(p->name, a) == 0)
				{
					f = p;
					l->next = p->next;
					free(f);
					break;
				}
				l = p; //������if��ʾ�ⲻ��Ҫɾ������һ���ڵ㣬l��ʱָ��p  ֮��p��ָ����һ���ڵ㣬��������Ҫɾ���Ľڵ���ôlָ������ڵ��next�ĵ�ַ
				p = p->next;
			} while (p != NULL);
		}
	}
	else
		printf("******����û���������Ӵ!\n");
	printf("�����Ѿ���ɾ��\n");
	system("pause"); //�ȴ�����
	system("cls");
}
void amend()
{
	if (n != 0)
	{
		int c;
		char a[20];
		printf("������Ҫ�޸ĵ�������");
		scanf("%s", &a);
		p = head;
		do
		{
			if (strcmp(a, p->name) == 0)
			{
				printf("\n���޸�����Ϣ���£�\n����\tѧ��\t\t�༶\t����\tרҵ\t\t�ɼ�\n");
				printf("%-8s%-16s%-8s%-8d%-16s%-8d\n", p->name, p->num, p->Class, p->age, p->major, p->score);
				break;
			}
			p = p->next; //ָ��ָ����һ���ڵ�
		} while (p != NULL);
		printf("\n\n1.�޸�����\n2.�޸�ѧ��\n3.�޸İ༶\n4.�޸�����\n5.�޸�רҵ\n6.�޸ĳɼ�\n7.�˳��޸�\n\n");
		scanf("%d", &c);
		switch (c)
		{
		case 1:
			printf("�����޸�Ϊ��");
			scanf("%s", &p->name);
			break;
		case 2:
			printf("ѧ���޸�Ϊ��");
			scanf("%s", &p->num);
			break;
		case 3:
			printf("�༶�޸�Ϊ��");
			scanf("%s", &p->Class);
			break;
		case 4:
			printf("�����޸�Ϊ��");
			scanf("%d", &p->age);
			break;
		case 5:
			printf("רҵ�޸�Ϊ��");
			scanf("%s", &p->major);
			break;
		case 6:
			printf("�ɼ��޸�Ϊ��");
			scanf("%d", &p->score);
			break;
		case 7:
			break;
		}
		printf("\n\n�����ɹ�!\n\n");
	}
	else
		printf("******����û���������Ӵ!\n");
	system("pause");
	system("cls");
}
void save()
{
	FILE *fp;
	struct student *p;
	if ((fp = fopen("D:\\data.txt", "wb")) == NULL)
		printf("Can not open the file!");
	p = head;
	while (p != NULL)
	{
		if (fwrite(p, Length, 1, fp) != 1)
		{
			printf("д�����ݳ���\n");
			fclose(fp);
			break;
		}
		p = p->next;
	}
	fclose(fp);
	printf("�洢���\n");
	system("pause");
	system("cls");
}
void read()
{
	FILE *fp;
	if ((fp = fopen("D:\\data.txt", "rb+")) == NULL)
	{
		printf("Can not open file!");
		exit(0);
	}
	do
	{
		p1 = malloc(Length);
		if (n == 0)	   //�ж�����ͷ
			head = p1; //n=0����������ǵ�һ������     //p2�Ľ�β��ָ��ĵ�ַ��p1
		else
			p2->next = p1;
		;
		fread(p1, Length, 1, fp);
		p2 = p1;
		n += 1;
	} while (p2->next != NULL);
	fclose(fp);
	printf("��ȡ���!\n\n");
	system("pause");
	system("cls");
}
void main() //������
{
	int a = 1;
	while (a != 0)
	{
		system("cls");
		printf("��������������������   ��   ѧ �� �� �� �� �� ϵ  ͳ     ��  ��������������������\n");
		printf("������������������  ��  ��          1.����ѧ����Ϣ        ��  ��    ������������������\n");
		printf("������������������  ��  ��          2.��ʾȫ����Ϣ        ��  ��    ������������������\n");
		printf("������������������  ��  ��          3.����ѧ����Ϣ        ��  ��    ������������������\n");
		printf("������������������  ��  ��          4.ɾ��ѧ����Ϣ        ��  ��    ������������������\n");
		printf("������������������  ��  ��          5.�޸�ѧ����Ϣ        ��  ��    ������������������\n");
		printf("������������������  ��  ��          6.����ѧ����Ϣ        ��  ��    ������������������\n");
		printf("������������������  ��  ��          7.��ȡѧ����Ϣ        ��  ��    ������������������\n");
		printf("������������������  ��  ��          0.  �˳�ϵͳ          ��  ��    ������������������\n");
		printf("��ѡ��");
		scanf("%d", &a);
		if (a >= 0 && a <= 9)
		{
			switch (a)
			{
			case 1:
				add();
				break;
			case 2:
				print();
				break;
			case 3:
				find();
				break;
			case 4:
				Delete();
				break;
			case 5:
				amend();
				break;
			case 6:
				save();
				break;
			case 7:
				read();
				break;
			}
		}
		else
		{
			printf(" ������Ĳ�����Ҫ�󣬽��������˵�!\n");
			system("pause");
		}
	}
}
void find1()
{
	char a[20];
	printf("������Ҫ���ҵ�������");
	scanf("%s", &a);
	p = head;
	do
	{
		if (strcmp(a, p->name) == 0)
		{
			printf("\n��Ϣ�ѱ��ҵ���\n����\tѧ��\t\t�༶\t����\tרҵ\t\t�ɼ�\n");
			printf("%-8s%-16s%-8s%-8d%-16s%-8d\n\n", p->name, p->num, p->Class, p->age, p->major, p->score);
		}
		p = p->next; //ָ��ָ����һ���ڵ�
	} while (p != NULL);
	system("pause");
	system("cls");
}
void find2()
{
	char a[20];
	printf("������Ҫ���ҵ�ѧ�ţ�");
	scanf("%s", &a);
	p = head;
	do
	{
		//ָ��ָ��ͷ
		if (strcmp(a, p->num) == 0)
		{
			printf("\n��Ϣ�ѱ��ҵ���\n����\tѧ��\t\t�༶\t����\tרҵ\t\t�ɼ�\n");
			printf("%-8s%-16s%-8s%-8d%-16s%-8d\n\n", p->name, p->num, p->Class, p->age, p->major, p->score);
		}
		p = p->next; //ָ��ָ����һ���ڵ�
	} while (p != NULL);
	system("pause");
	system("cls");
}
