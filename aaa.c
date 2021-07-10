#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
struct person
{
	char name[15];
	char sex[2];
	int age;
	char celephone[22];
	char email[40];
	long int QQ;
} per[501];
int num = 0;
FILE *fp;
void scopy(struct person a, struct person b); //�ṹ�忽��
void mainmenu();							  //*���˵�*//
void newrecord();							  //*������¼*//
void xiugaimenu();							  //*�޸Ĳ˵�*//
void xiugaibyname();						  //*�������޸�*//
void searchmenu();							  //*��ѯ�˵�*//
void searchbyname();						  //*��������ѯ*//
void searchbyQQ();							  //*��QQ�Ų�ѯ*//
void deletemenu();							  //*ɾ���˵�*//
void deleteone();							  //*ɾ������*//
void showall();								  //*����ȫ����Ϣ*//
void readfromfile();						  //*��ȡ�ļ�*//
void writetofile();							  //*д���ļ�*//
void deletebyname();						  //*������ɾ��*//
void listbyname();							  //*����˵�*//
void deleteall();							  //*ɾ��������Ϣ*//
void listmenu();
void main()
{
	system("cls");	//���ϵͳ
	readfromfile(); //��ȡ�ļ�
	while (1)
	{
		mainmenu(); //���˵�
	}
}
void mainmenu() //*���˵�����*//
{
	int a;
	system("cls");
	system("color 2a"); //���ı�����Ϊ��ɫ
	printf("\n\t  ���ã���ʹ��ͨѶ¼��\n");
	printf("1���� �� �� �� �� Ϣ\n");
	printf("2���� ѯ �� �� �� Ϣ\n");
	printf("3��ɾ �� �� �� �� Ϣ\n");
	printf("4���� �� �� �� �� Ϣ\n");
	printf("5����Ϣ �� ��\n");
	printf("6���� �� ȫ �� �� Ϣ\n");
	printf("7��д �� �� ��\n");
	printf("8���� ȡ �� ��\n");
	printf("9��ɾ �� �� ��\n");
	printf("0���� �� \n");
	printf("\n��������������ѡ�� \n");
loopl:
	scanf("%d", &a);
	switch (a)
	{
	case 1:
		newrecord();
		break;
	case 2:
		searchmenu();
		break;
	case 3:
		deletemenu();
		break;
	case 4:
		xiugaimenu();
		break;
	case 5:
		listmenu();
		break;
	case 6:
		showall();
		break;
	case 7:
		writetofile();
		break;
	case 8:
		readfromfile();
		break;
	case 9:
		deleteall();
		break;
	case 0:
		exit(1);
	default:
		printf("�Բ������������������������룺  \n");
		goto loopl;
	}
}
void newrecord() /*��Ӽ�¼*/
{
	int a;
	system(" cls ");
	system(" color 2a");
loop:
	printf(" \n\n\n\t\t ��������Ҫ��ӵ���ϵ�˵���Ϣ: \n ");
	printf(" \n ����������: \n");
name:
	scanf("%s", &per[num].name);
	if (strlen(per[num].name) > 15)
	{
		printf(" \n �Բ���!������������!����������");
		goto name;
	}
	printf(" \n �������Ա�: \n ");
sex:
	scanf("%s", &per[num].sex);
	if (strlen(per[num].sex) == 0)
	{
		printf(" \n �Բ���!������������!���������� \n ");
		goto sex;
	}
	printf(" \n �������ֻ�����: \n ");
celephone:
	scanf("%s", &per[num].celephone);
	if (strlen(per[num].celephone) != 11)
	{

		printf(" \n �Բ���!������������!���������� \n ");
		goto celephone;
	}
	printf(" \n �����������:");
email:
	scanf("%s", &per[num].email);
	if (strlen(per[num].email) > 3 || strlen(per[num].email) < 4)
	{
		printf(" in �Բ���!������������!���������� in ");
		goto email;
	}
	printf(" \n ���� QQ ����: \n ");
QQ:
	scanf("%ld", &per[num].QQ);
	if (per[num].QQ > 1600000000 || per[num].QQ < 10000000)
	{
		printf(" \n �Բ���!������������!���������� \n ");
		goto QQ;
	}
	num++;
	printf(" \n �Ƿ�������?\n");
	printf(" \n �밴1��2(1�������:2��������) \n ");
	printf(" \n ����������ѡ�� \n ");
	scanf("%d", &a);
	if (a == 1)
	{
		goto loop;
	}
	else
	{
		return;
	}
}
void searchmenu() //*��ѯ�R��*/ /
{
	int a;
	system(" cls ");
	system(" color 2a");
	printf(" \n\t\t ��ӭʹ�ò�ѯ�˵�");
	printf("\n\t\t   1����������ѯ");
	printf("\n\t\t   2���� QQ ��ѯ");
	printf("\n\t\t   3���������˵�");
	printf(" \n\t\t ");
	printf(" \n ����������ѡ�� \n ");
	scanf("%d", &a);
	switch (a)
	{
	case 1:
		searchbyname();
		break;
	case 2:
		searchbyQQ();
		break;
	case 3:
		mainmenu();
		break;
	}
}
void scarchbyQQ()
{ //*�� QQ ��ѯ*//
	int mark = 0;

	int i, j;
	long int QQ;
	printf(" \n ��00�������\n");
	printf("n ������ QQ ����:");
	scanf("%ld", &QQ);
	for (i = 0; i < num; i++)
	{
		if (per[i].QQ == QQ)
		{
			printf(" \n\t\t     �����������ҵ���ϵ�˵���Ϣ");
			printf("\n\t\t________________________");
			printf(" \n\t\t ����:  %s", per[i].name);
			printf(" \n\t\t �Ա�: %s", per[i].sex);
			printf("\n\t\t �ֻ�����:%s", per[i].celephone);
			printf(" \n\t\t �����ʼ�:%s", per[i].email);
			printf("\n\t\t QQ����:%ld", per[i].QQ);
			printf("\n\t\t________________________");
			printf(" \n\t\t �밴�������ּ��������˵�");
			mark++;
			scanf("%d", &j);
			return;
		}
	}
	if (mark == 0)
	{
		printf(" \n\t\t �Բ���!û�и���ϵ�˵���Ϣ!");
		printf(" \n\t\t �밴�������ּ��������˵�");
		scanf("%d", &j);
		return;
	}
}
void searchbyname() //*��������ѯ*//
{
	int mark = 0;
	int i, j, findmark = 0;
	int a = 0;
	char name[15];
	printf(" \n ���������� \n");
	printf(" \n ����������:");
	scanf("%s", &name);
	for (i = a; i < num; i++)
	{
		if (strcmp(per[i].name, name) == 0)
		{
			findmark++;
			printf("\n\t\t  �����������ҵ���ϵ�˵���Ϣ  ");
			printf("\n\t\t______________________________");
			printf("\n\t\t  ����:   %s", per[i].name);
			printf("\n\t\t  �Ա�:   %s", per[i].sex);
			printf("\n\t\t  �ֻ�����:   %s", per[i].celephone);
			printf("\n\t\t  �����ʼ�:   %s", per[i].email);
			printf("\n\t\t  QQ ����:    %ld", per[i].QQ);
			printf("\n\t\t______________________________");
			if ((i + 1) < num)
			{
				printf(" \n �Ƿ����������ͬ���ֵ���ϵ�˵���Ϣ?(1�������:2��������)");
				scanf("%d", &j);
				if (j == 1)
				{
					a = i;
					mark++;
					continue;
				}
				else
					break;
			}
			else
			{
				printf(" \n �밴�������ּ��������˵�");
				scanf("%d", &j);
				return;
			}
		}
	}
	if (mark != 0)
	{
		printf("\n �Բ���!û����ͬ���ֵĸ���ϵ�˵���Ϣ!!");
		printf(" \n �밴�������ּ��������˵�");
		scanf("%d", &j);
		return;
	}
	else if (findmark == 0)
	{
		printf(" \n �Բ���!û�и���ϵ�˵���Ϣ!");
		printf(" \n �밴�������ּ��������˵�");
		scanf("%d", &j);
		return;
	}
}
void deletebycelephone()
{ //*���ֻ�����ɾ��*//
	int i, j, h, m;
	int deletemark = 0;
	char celephone[11];
	printf(" \n\t\t ������Ҫɾ������ϵ�˵��ֻ�����:");
	scanf("%s", &celephone);
	for (i = 0; i < num; i++)
	{
		if (strcmp(per[i].celephone, celephone) == 0)
			deletemark++;
		printf(" \n\t\t ��������Ҫɾ������ϵ�˵ļ�¼:");
		printf("\n\t\t_________________________________");
		printf("\n\t\t ����:    %s", per[i].name);
		printf("\n\t\t �Ա�:    %s", per[i].sex);
		printf("\n\t\t �ֻ�����:    %s", per[i].celephone);
		printf("\n\t\t �����ʼ�:    %s", per[i].email);
		printf("\n\t\t QQ ����:     %ld", per[i].QQ);
		printf("\n\t\t_________________________________");
		printf("\n\t\t �Ƿ���?(1����ɾ��;2����ɾ��) \n ");
		printf(" \n ��������������ѡ��:\n");
		scanf("%d", &h);
		if (h == 1)
		{
			for (j = i; j < num - 1; j++)
				per[j] = per[j + 1];
			num--;
			printf("\n\t\t ɾ���ɹ�");
			printf(" \n �Ƿ����ɾ��?(�������;2��������) \n");
			printf("\n��������������ѡ��:\n ");
			scanf("%d", &h);
			if (h == 1)
				deletebycelephone();
		}
	}
	if (deletemark == 0)
	{
		printf("\n\t\t �Բ���!û�и���ϵ�˵ļ�¼!");
		printf("\n\t\t �Ƿ����ɾ��?(1�������;2��������) \n ");
		printf("\n��������������ѡ��: \n ");
		scanf("%d", &m);
		if (m == 1)
			deletebycelephone();
	}
}
void deletemenu()
{ //*ɾ���˵�*//
	int i, j;
	system(" cls ");
	system(" color 3b");
	if (num == 0)
	{
		printf("\n\t\t �Բ���!�ļ������κμ�¼!");
		printf("\n\t\t ������Ӹ�����Ϣ!");
		printf("\n\t\t �밴�������ֽ��������˵�");
		scanf("%d", &j);
		return;
	}
	else
	{
		printf("\n\t\t       ɾ���˵�    ");
		printf("\n\t\t     1��ɾ������    ");
		printf("\n\t\t     2���������˵�   ");
		printf("\n\t\t                     ");
		printf("\n\t\t ��������������ѡ��:   ");
	loop4:
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			deleteone();
			break;
		case 2:
			mainmenu();
			break;
		default:
			printf(" \n �Բ���!������������!����������: \n");
			goto loop4;
		}
	}
}
void deleteone()
{ //*ɾ������*//
	int i;
	printf("\n\t\t l�����ֻ�����ɾ�� 2��������ɾ��");
	printf("\n\t\t ����������ѡ��:");
loop5:
	scanf("%d", &i);
	switch (i)
	{
	case 1:
		deletebycelephone();
		break;
	case 2:
		deletebyname();
		break;
	default:
		printf("\n �Բ������������������������룡");
		goto loop5;
	}
}
void deletebyname()
{ //*�����h��*//
	int a = 0;
	int findmark = 0;
	int i, j, k;
	int deletemark = 0;
	char name[15];
	printf("\n\t\t ��������Ҫɾ������ϵ�˵�����:");
	scanf("%s", name);
	for (i = a; i < num; i++)
	{
		if (strcmp(per[i].name, name) == 0)
		{
			printf("\n\t\t ��������Ҫɾ������ϵ�˵ļ�¼:");
			findmark++;
			printf("\n\t\t____________________________");
			printf("\n\t\t ����: %s", per[i].name);
			printf("\n\t\t �Ա�: %s", per[i].sex);
			printf("\n\t\t �ֻ�����: %s", per[i].celephone);
			printf("\n\t\t �����ʼ�: %s", per[i].email);
			printf("\n\t\t QQ����: %ld", per[i].QQ);
			printf("\n\t\t____________________________");
			printf("\n\t\t �Ƿ�ɾ��?(1����ɾ��;2����ɾ��)\n");
			printf("\n\t\t ��������������ѡ��");
			scanf("%d", &k);
			if (k == 1)
			{
				for (j = i; j < num - 1; j++)
					per[j] = per[j + 1];
				num--;
				deletemark++;
				printf(" \n\t\t ɾ���ɹ�");
				if ((i + 1) < num)
					printf("\n\t\t �Ƿ����ɾ����ͬ��������ϵ�˵���Ϣ?(1����ɾ��:2����ɾ��)");
				printf("\n\t\t ��������������ѡ��:");
				scanf("%d", &k);
				if (k == 1)
				{
					a = i;
					findmark++;
					continue;
				}
			}
			printf("\n\t\t �Ƿ����ɾ��?(1�������;2��������)");
			printf("\n\t\t ��������������ѡ��:");
			scanf("%d", &k);
			if (k == 1)
				deleteone();
			else
				break;
		}
		else
			continue;
	}
	if ((deletemark == 0) && (findmark == 0))
		printf("\n\t\t �Բ���!û�и���ϵ�˵ļ�¼!");
	printf("\n\t\t �Ƿ����ɾ��?(1�������;2��������)");
	printf("\n ��������������ѡ��: \n ");
	scanf("%d", &k);
	if (k == 1)
	{
		deleteone();
	}
	else if (findmark != 0)
	{
		printf("\n\t\t �Բ���!û��������Ϣ!");
		printf("\n\t\t �Ƿ����ɾ��?(1�������:2��������)");
		printf("\n ��������������ѡ��: \n ");
		scanf("%d", &k);
		if (k == 1)
		{
			deleteone();
		}
	}
}
void xiugaimenu() //*�޸Ĳ˵�*//
{
	int i, j;
	system(" cls ");
	system(" color 3");
	if (num == 0)
	{
		printf("\n\t\t �Բ���!�ļ������κμ�¼!");
		printf(" \n\t\t �밴�������ַ������˵�");
		scanf("%d", &j);
		return;
	}
	else
	{
		printf("\n\t\t 1���������޸� \n ");
		printf("\n ��������������ѡ��: \n");
	loop6:
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			xiugaibyname();
			break;
		default:
			printf(" \n �Բ���!������������!����������: \n ");
			goto loop6;
		}
	}
}
void xiugaixiangmu(int a)
{ //*�޸���Ŀ*//
	int i;
	system(" cls ");
	system(" color c0 ");
	printf(" \n\t\t ��������Ҫ�޸ĵ���Ŀ");
	printf(" \n\t\t\n ");
	printf("\n\t\t 1���ֻ����� \n ");
	printf("\n\t\t 2-���� \n ");
	printf("\n\t\t 3��QQ���� \n ");
	printf("\n\t\t 4-�����ʼ� \n ");
	printf("\n 5�������˵� \n ");
	printf(" \n\t\t\n ");
	printf("\n��������������ѡ��:");
	scanf("%d", &i);
loop9:
	switch (i)
	{
	case 1:
		printf("�������ֻ�����: ");
		scanf("%s", &per[a].celephone);
		break;
	case 2:
		printf("����������:");
		scanf("%s", &per[a].name);
		break;
	case 3:
		printf("������ QQ ����:");
		scanf("%s", &per[a].QQ);
		break;
	case 4:
		printf("������ email :");
		scanf("%s", &per[a].email);
		break;
	case 5:
		mainmenu();
		break;
	default:
		printf(" \n �Բ���!������������!����������: \n");
		goto loop9;
	}
}
void xiugaibyname() //*�������޸�*//
{
	int a = 0;
	int findmark = 0;
	int xiugaimark = 0;
	int i, j;
	char name[15];
	printf("\n\t\t ������Ҫ�޸���ϵ�˵�����:");
	scanf("%s", name);
	for (i = a; i < num; i++)
	{
		if (strcmp(per[i].name, name) == 0)
		{
			printf("\n\t\t ��������Ҫ�޸ĵ���ϵ�˵ļ�¼:");
			findmark++;
			printf("\n\t\t______________________________");
			printf("\n\t\t ����:  %s", per[i].name);
			printf("\n\t\t �Ա�:  %s", per[i].sex);
			printf("\n\t\t �ֻ�����:  %s", per[i].celephone);
			printf("\n\t\t �����ʼ�:  %s", per[i].email);
			printf("\n\t\t QQ ����:   %ld", per[i].QQ);
			printf("\n\t\t______________________________");
			printf(" \n �Ƿ��޸�?(1�����޸�;2�����޸�)");
			printf(" \n ��������������ѡ��:\n ");
			scanf("%d", &j);
			if (j == 1)
			{
				xiugaixiangmu(i);
				xiugaimark++;
				printf("\n\t\t �޸ĳɹ�");
				if ((i + 1) < num)
				{
					printf("\n\t\t �Ƿ�����޸���ͬ��������ϵ�˵���Ϣ?(1�������;2��������)");
					printf(" \n ������������������:\n");
					scanf("%d", &j);
					if (j == 1)
					{
						a = i;
						findmark++;
						continue;
					}
				}
				printf("\n\t\t �Ƿ�����޸�?(1�������:2��������)");
				printf("��������������ѡ��:");
				scanf("%d", &j);
				if (j == 1)
					xiugaibyname();
				return;
			}
		}
	}
	if ((xiugaimark == 0) && (findmark == 0))
	{
		printf("\n\t\t û�и���ϵ�˵ļ�¼");
		printf("\n\t\t �Ƿ�����޸�?(1�������:2��������)");
		printf(" \n ��������������ѡ��:\n");
		scanf("%d", &j);
		if (j == 1)
			xiugaibyname();
		return;
	}
	else if (findmark != 0)
	{
		printf("\n\t\t û��������Ϣ");
		printf("\n\t\t �Ƿ�����޸�?(1�������;2��������)");
		printf(" \n ��������������ѡ��: \n ");
		scanf("%d", &j);
		if (j == 1)
			xiugaibyname();
		return;
	}
}
void listmenu() //*�����R��*//
{
	int i, j;
	system(" cls ");
	system(" color b0");
	if (num == 0)
	{
		printf("\n\t\t �Բ���,�ļ������κμ�¼");
		printf("\n\t\t �밴�������ּ��������˵�");
		scanf("%d", &j);
		return;
	}
	else
	{
		system(" cls ");
		system(" color 12");
		printf("\n\t\t ����˵�");
		printf("\n\t\t 1������������ ");
		printf("\n\t\t 2���������˵� ");
		printf(" \n ��������������ѡ��:  \n");
	loop10:
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			listbyname();
			break;
		case 2:
			mainmenu();
			break;
		default:
			printf(" \n �Բ���!������������!����������: \n ");
			goto loop10;
		}
	}
}
void scopy(struct person a, struct person b)
{
	//�ṹ�忽��
	a.age = b.age;
	strcpy(a.celephone, b.celephone);
	strcpy(a.name, b.name);
	strcpy(a.email, b.email);
	strcpy(a.sex, b.sex);
	a.QQ = b.QQ;
}
void listbyname()
{ //*����������*//
	int i, j, k;
	struct person tmp;
	for (i = 1; i < num; i++)
	{
		if (strcmp(per[i].name, per[i - 1].name) < 0)
		{
			per[500] = per[i];
			j = i - 1;
			do
			{
				per[j + 1] = per[j];
				j--;
				per[j + 1] = per[500];
			} while ((strcmp(tmp.name, per[j].name) < 0 && j > 0));
		}
		printf("\n ����ɹ�,�Ƿ���ʾ?(1�������:2��������)");
		printf("\n��������������ѡ��: \n ");
		scanf("%d", &k);
		if (k == 1)
			showall();
		return;
	}
}
void showalI()
{ //*���ȫ����Ϣ*//
	int i, j;
	system(" cls ");
	system(" color 3b");
	if (num != 0)
	{
		printf("\n\t\t**********����ΪͨѶ¼������Ϣ**********");
		for (i = 0; i < num; i++)
		{
			printf("\n\t\t______________________________");
			printf("\n\t\t����:%s", per[i].name);
			printf("\n\t\t�Ա�:%s", per[i].sex);
			printf("\n\t\t�ֻ�����:%s", per[i].celephone);
			printf("\n\t\t�����ʼ�:%s", per[i].email);
			printf("\n\t\tQQ����;%ld", per[i].QQ);
			printf("\n\t\t_______________________________");
			printf("\t\t");
			if (i + 1 < num)
			{
				printf("\n\t\t___________________________");
				system(" pause ");
			}
		}
		printf(" \n\t\t***************************************");
	}
	else
		printf("\n\t\t�Բ���!ͨѶ¼�����κμ�¼!");
	printf("\n\t\t�밴�������ּ��������˵�");
	scanf("%d", &j);
	return;
}
void writetofile() //*д���ļ�*//
{
	int i, k;
	FILE *fp;
	system(" cls ");
	system("color 84");
	if ((fp = fopen("per.bin", " wb ")) == NULL)
	{
		printf("\n\t\t �ļ���ʧ��");
	}
	for (i = 0; i < num; i++)
	{
		if (fwrite(&per[i], sizeof(struct person), 1, fp) != 1)
		{
			printf("\n\t\tд���ļ�����!\n");
		}
	}
	fclose(fp);
	printf("\n\t\t ͨѶ¼�ļ��ѱ���");
	printf("\n\t\t�밴�������ּ��������˵�");
	scanf("%d", &k);
	return;
}
void readfromfile() //*��ȡ�ļ�*//
{
	int i, j, k;
	system(" cls ");
	system(" color 2b");
	if ((fp = fopen("per.bin", " rb ")) == NULL)
	{
		printf("\n\t\t****************************************");
		printf("\n\t\t*                                      *");
		printf("\n\t\t*                                      *");
		printf("\n\t\t*          ͨѶ¼�ļ�������!           *");
		if ((fp = fopen("per.bin", "wb")) == NULL)
		{
			printf("\n*          ����ʧ��!           *");
			printf("\n*                              *");
			printf("\n*                              *");
			printf("\n********************************");
			exit(0);
		}
		else
		{
			printf("\n\t\t*        ͨѶ¼�ļ��ѽ���!      *");
			printf("\n\t\t*                               *");
			printf("\n\t\t*                               *");
			printf("\n\t\t*********************************");
			printf("\n\t\t     ��������������˵�          ");
			printf("\n\t\t     ��������������ѡ��        ");
			scanf("%d", &k);
			return;
		}
		exit(0);
	}
	fseek(fp, 0, 2);   //*�ļ�λ��ָ���ƶ����ļ�ĩβ*//
	if (ftell(fp) > 0) //*�ļ���Ϊ��*//
	{
		rewind(fp); //*�ļ�λ��ָ���ƶ����ļ���ʼλ��*//
		for (num = 0; !feof(fp) && fread(&per[num], sizeof(struct person), 1, fp); num++)
		{
			printf("\n\t\t***************************");
			printf("\n\t\t*                         *");
			printf("\n\t\t*                         *");
			printf("\n\t\t*     �ļ�����ɹ�!       *");
			printf("\n\t\t*                         *");
			printf("\n\t\t*                         *");
			printf("\n\t\t***************************");
			printf("\n\t\t     ��1��ʾ������Ϣ,��2�����˵�!   ");
			printf("\n\t\t     ��������������ѡ��:    ");
			scanf("%d", &j);
			if (j == 1)
			{
				showall();
			}
			else
			{
				printf("\n\t\t***************************");
				printf("\n\t\t*                         *");
				printf("\n\t\t*                         *");
				printf("\n\t\t*     �ļ�����ɹ�!       *");
				printf("\n\t\t*  ͨѶ¼�ļ������κμ�¼!*");
				printf("\n\t\t*                         *");
				printf("\n\t\t*                         *");
				printf("\n\t\t*                         *");
				printf("\n\t\t***************************");
				printf("\n\t\t�밴�������ּ��������˵�   ");
				scanf("%d", &i);
				return;
			}
		}
	}
}
void deleteall() //*ɾ��������Ϣ*//
{
	int i, j;
	system("cls");
	system(" color 50");
	printf("\n\t\t ȷ��ɾ��?\n");
	printf("�밴1��2(1����ȷ��;2����ɾ��)\n");
	scanf("%d", &i);
	if (i == 1)
	{
		fclose(fp);
		if ((fp = fopen("per.bin", " wb "))==NULL)
			{
				printf("\n\t\t ���ܴ��ļ�,ɾ��ʧ��");
				readfromfile();
			}
		num = 0;
		printf("\n\t\t ��¼��ɾ��!");
		printf("\n\t\t�밴�������ֽ��������˵�");
		scanf("%d", &j);
		return;
	}
}
