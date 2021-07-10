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
void scopy(struct person a, struct person b); //结构体拷贝
void mainmenu();							  //*主菜单*//
void newrecord();							  //*新增记录*//
void xiugaimenu();							  //*修改菜单*//
void xiugaibyname();						  //*按名字修改*//
void searchmenu();							  //*查询菜单*//
void searchbyname();						  //*按姓名查询*//
void searchbyQQ();							  //*按QQ号查询*//
void deletemenu();							  //*删除菜单*//
void deleteone();							  //*删除单个*//
void showall();								  //*输入全部信息*//
void readfromfile();						  //*读取文件*//
void writetofile();							  //*写入文件*//
void deletebyname();						  //*按名字删除*//
void listbyname();							  //*排序菜单*//
void deleteall();							  //*删除所有信息*//
void listmenu();
void main()
{
	system("cls");	//清空系统
	readfromfile(); //读取文件
	while (1)
	{
		mainmenu(); //主菜单
	}
}
void mainmenu() //*主菜单函数*//
{
	int a;
	system("cls");
	system("color 2a"); //更改背景板为绿色
	printf("\n\t  您好！欢使用通讯录！\n");
	printf("1：添 加 个 人 信 息\n");
	printf("2：查 询 个 人 信 息\n");
	printf("3：删 除 个 人 信 息\n");
	printf("4：修 改 个 人 信 息\n");
	printf("5：信息 排 序\n");
	printf("6：输 入 全 部 信 息\n");
	printf("7：写 入 文 件\n");
	printf("8：读 取 文 件\n");
	printf("9：删 除 所 有\n");
	printf("0：退 出 \n");
	printf("\n请输入您的数字选择： \n");
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
		printf("对不起，您的输入有误！请重新输入：  \n");
		goto loopl;
	}
}
void newrecord() /*添加纪录*/
{
	int a;
	system(" cls ");
	system(" color 2a");
loop:
	printf(" \n\n\n\t\t 请输入您要添加的联系人的信息: \n ");
	printf(" \n 请输入姓名: \n");
name:
	scanf("%s", &per[num].name);
	if (strlen(per[num].name) > 15)
	{
		printf(" \n 对不起!您的输入有误!请重新输入");
		goto name;
	}
	printf(" \n 请输入性别: \n ");
sex:
	scanf("%s", &per[num].sex);
	if (strlen(per[num].sex) == 0)
	{
		printf(" \n 对不起!您的输入有误!请重新输入 \n ");
		goto sex;
	}
	printf(" \n 请输入手机号码: \n ");
celephone:
	scanf("%s", &per[num].celephone);
	if (strlen(per[num].celephone) != 11)
	{

		printf(" \n 对不起!您的输入有误!请重新输入 \n ");
		goto celephone;
	}
	printf(" \n 输入电子邮箱:");
email:
	scanf("%s", &per[num].email);
	if (strlen(per[num].email) > 3 || strlen(per[num].email) < 4)
	{
		printf(" in 对不起!您的输入有误!请重新输入 in ");
		goto email;
	}
	printf(" \n 输入 QQ 号码: \n ");
QQ:
	scanf("%ld", &per[num].QQ);
	if (per[num].QQ > 1600000000 || per[num].QQ < 10000000)
	{
		printf(" \n 对不起!您的输入有误!请重新输入 \n ");
		goto QQ;
	}
	num++;
	printf(" \n 是否继续添加?\n");
	printf(" \n 请按1和2(1代表继续:2代表不继续) \n ");
	printf(" \n 请输入您的选择 \n ");
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
void searchmenu() //*査询萊单*/ /
{
	int a;
	system(" cls ");
	system(" color 2a");
	printf(" \n\t\t 欢迎使用查询菜单");
	printf("\n\t\t   1—按姓名查询");
	printf("\n\t\t   2—按 QQ 查询");
	printf("\n\t\t   3—返回主菜单");
	printf(" \n\t\t ");
	printf(" \n 请输入您的选择 \n ");
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
{ //*按 QQ 査询*//
	int mark = 0;

	int i, j;
	long int QQ;
	printf(" \n 按00号码查找\n");
	printf("n 请输入 QQ 号码:");
	scanf("%ld", &QQ);
	for (i = 0; i < num; i++)
	{
		if (per[i].QQ == QQ)
		{
			printf(" \n\t\t     以下是您查找的联系人的信息");
			printf("\n\t\t________________________");
			printf(" \n\t\t 名字:  %s", per[i].name);
			printf(" \n\t\t 性别: %s", per[i].sex);
			printf("\n\t\t 手机号码:%s", per[i].celephone);
			printf(" \n\t\t 电了邮件:%s", per[i].email);
			printf("\n\t\t QQ号码:%ld", per[i].QQ);
			printf("\n\t\t________________________");
			printf(" \n\t\t 请按任意数字键返回主菜单");
			mark++;
			scanf("%d", &j);
			return;
		}
	}
	if (mark == 0)
	{
		printf(" \n\t\t 对不起!没有该联系人的信息!");
		printf(" \n\t\t 请按任意数字键返回主菜单");
		scanf("%d", &j);
		return;
	}
}
void searchbyname() //*按姓名查询*//
{
	int mark = 0;
	int i, j, findmark = 0;
	int a = 0;
	char name[15];
	printf(" \n 按姓名查找 \n");
	printf(" \n 请输入姓名:");
	scanf("%s", &name);
	for (i = a; i < num; i++)
	{
		if (strcmp(per[i].name, name) == 0)
		{
			findmark++;
			printf("\n\t\t  以下是您查找的联系人的信息  ");
			printf("\n\t\t______________________________");
			printf("\n\t\t  名字:   %s", per[i].name);
			printf("\n\t\t  性别:   %s", per[i].sex);
			printf("\n\t\t  手机号码:   %s", per[i].celephone);
			printf("\n\t\t  电子邮件:   %s", per[i].email);
			printf("\n\t\t  QQ 号码:    %ld", per[i].QQ);
			printf("\n\t\t______________________________");
			if ((i + 1) < num)
			{
				printf(" \n 是否继续查找相同名字的联系人的信息?(1代表继续:2代表不继续)");
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
				printf(" \n 请按任意数字键返回主菜单");
				scanf("%d", &j);
				return;
			}
		}
	}
	if (mark != 0)
	{
		printf("\n 对不起!没有相同名字的该联系人的信息!!");
		printf(" \n 请按任意数字键返回主菜单");
		scanf("%d", &j);
		return;
	}
	else if (findmark == 0)
	{
		printf(" \n 对不起!没有该联系人的信息!");
		printf(" \n 请按任意数字键返回主菜单");
		scanf("%d", &j);
		return;
	}
}
void deletebycelephone()
{ //*按手机号码删除*//
	int i, j, h, m;
	int deletemark = 0;
	char celephone[11];
	printf(" \n\t\t 请输入要删除的联系人的手机号码:");
	scanf("%s", &celephone);
	for (i = 0; i < num; i++)
	{
		if (strcmp(per[i].celephone, celephone) == 0)
			deletemark++;
		printf(" \n\t\t 以下是您要删除的联系人的纪录:");
		printf("\n\t\t_________________________________");
		printf("\n\t\t 名字:    %s", per[i].name);
		printf("\n\t\t 性别:    %s", per[i].sex);
		printf("\n\t\t 手机号码:    %s", per[i].celephone);
		printf("\n\t\t 电子邮件:    %s", per[i].email);
		printf("\n\t\t QQ 号码:     %ld", per[i].QQ);
		printf("\n\t\t_________________________________");
		printf("\n\t\t 是否测除?(1代表删除;2代表不删除) \n ");
		printf(" \n 请输入您的数字选择:\n");
		scanf("%d", &h);
		if (h == 1)
		{
			for (j = i; j < num - 1; j++)
				per[j] = per[j + 1];
			num--;
			printf("\n\t\t 删除成功");
			printf(" \n 是否继续删除?(代表继续;2代表不继续) \n");
			printf("\n请输入您的数字选择:\n ");
			scanf("%d", &h);
			if (h == 1)
				deletebycelephone();
		}
	}
	if (deletemark == 0)
	{
		printf("\n\t\t 对不起!没有该联系人的纪录!");
		printf("\n\t\t 是否继续删除?(1代表继续;2代表不继续) \n ");
		printf("\n请输入您的数字选择: \n ");
		scanf("%d", &m);
		if (m == 1)
			deletebycelephone();
	}
}
void deletemenu()
{ //*删除菜单*//
	int i, j;
	system(" cls ");
	system(" color 3b");
	if (num == 0)
	{
		printf("\n\t\t 对不起!文件中无任何纪录!");
		printf("\n\t\t 请先添加个人信息!");
		printf("\n\t\t 请按任意数字健返回主菜单");
		scanf("%d", &j);
		return;
	}
	else
	{
		printf("\n\t\t       删除菜单    ");
		printf("\n\t\t     1—删除单个    ");
		printf("\n\t\t     2—返回主菜单   ");
		printf("\n\t\t                     ");
		printf("\n\t\t 请输入您的数字选择:   ");
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
			printf(" \n 对不起!您的输入有误!请重新输入: \n");
			goto loop4;
		}
	}
}
void deleteone()
{ //*删除单个*//
	int i;
	printf("\n\t\t l—按手机号码删除 2—按姓名删除");
	printf("\n\t\t 请输入您的选择:");
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
		printf("\n 对不起！您的输入有误，请重新输入！");
		goto loop5;
	}
}
void deletebyname()
{ //*姓名刪除*//
	int a = 0;
	int findmark = 0;
	int i, j, k;
	int deletemark = 0;
	char name[15];
	printf("\n\t\t 请输入您要删除的联系人的姓名:");
	scanf("%s", name);
	for (i = a; i < num; i++)
	{
		if (strcmp(per[i].name, name) == 0)
		{
			printf("\n\t\t 以下是您要删除的联系人的纪录:");
			findmark++;
			printf("\n\t\t____________________________");
			printf("\n\t\t 名字: %s", per[i].name);
			printf("\n\t\t 性别: %s", per[i].sex);
			printf("\n\t\t 手机号码: %s", per[i].celephone);
			printf("\n\t\t 电子邮件: %s", per[i].email);
			printf("\n\t\t QQ号码: %ld", per[i].QQ);
			printf("\n\t\t____________________________");
			printf("\n\t\t 是否删除?(1代表删除;2代表不删除)\n");
			printf("\n\t\t 请输入您的数字选择");
			scanf("%d", &k);
			if (k == 1)
			{
				for (j = i; j < num - 1; j++)
					per[j] = per[j + 1];
				num--;
				deletemark++;
				printf(" \n\t\t 删除成功");
				if ((i + 1) < num)
					printf("\n\t\t 是否继续删除相同姓名的联系人的信息?(1代表删除:2代表不删除)");
				printf("\n\t\t 请输入您的数字选择:");
				scanf("%d", &k);
				if (k == 1)
				{
					a = i;
					findmark++;
					continue;
				}
			}
			printf("\n\t\t 是否继续删除?(1代表继续;2代表不继续)");
			printf("\n\t\t 请输入您的数字选择:");
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
		printf("\n\t\t 对不起!没有该联系人的纪录!");
	printf("\n\t\t 是否继续删除?(1代表继续;2代表不继续)");
	printf("\n 请输入您的数字选择: \n ");
	scanf("%d", &k);
	if (k == 1)
	{
		deleteone();
	}
	else if (findmark != 0)
	{
		printf("\n\t\t 对不起!没有重名信息!");
		printf("\n\t\t 是否继续删除?(1代表继续:2代表不继续)");
		printf("\n 请输入您的数字选择: \n ");
		scanf("%d", &k);
		if (k == 1)
		{
			deleteone();
		}
	}
}
void xiugaimenu() //*修改菜单*//
{
	int i, j;
	system(" cls ");
	system(" color 3");
	if (num == 0)
	{
		printf("\n\t\t 对不起!文件中无任何纪录!");
		printf(" \n\t\t 请按任意数字返回主菜单");
		scanf("%d", &j);
		return;
	}
	else
	{
		printf("\n\t\t 1—按姓名修改 \n ");
		printf("\n 请输入您的数字选择: \n");
	loop6:
		scanf("%d", &i);
		switch (i)
		{
		case 1:
			xiugaibyname();
			break;
		default:
			printf(" \n 对不起!您的输入有误!请重新输入: \n ");
			goto loop6;
		}
	}
}
void xiugaixiangmu(int a)
{ //*修改项目*//
	int i;
	system(" cls ");
	system(" color c0 ");
	printf(" \n\t\t 请输入您要修改的项目");
	printf(" \n\t\t\n ");
	printf("\n\t\t 1—手机号码 \n ");
	printf("\n\t\t 2-姓名 \n ");
	printf("\n\t\t 3—QQ号码 \n ");
	printf("\n\t\t 4-电子邮件 \n ");
	printf("\n 5—回主菜单 \n ");
	printf(" \n\t\t\n ");
	printf("\n请输入您的数字选择:");
	scanf("%d", &i);
loop9:
	switch (i)
	{
	case 1:
		printf("请输入手机号码: ");
		scanf("%s", &per[a].celephone);
		break;
	case 2:
		printf("请输入姓名:");
		scanf("%s", &per[a].name);
		break;
	case 3:
		printf("请输入 QQ 号码:");
		scanf("%s", &per[a].QQ);
		break;
	case 4:
		printf("请输入 email :");
		scanf("%s", &per[a].email);
		break;
	case 5:
		mainmenu();
		break;
	default:
		printf(" \n 对不起!您的输入有误!请重新输入: \n");
		goto loop9;
	}
}
void xiugaibyname() //*按姓名修改*//
{
	int a = 0;
	int findmark = 0;
	int xiugaimark = 0;
	int i, j;
	char name[15];
	printf("\n\t\t 请输入要修改联系人的姓名:");
	scanf("%s", name);
	for (i = a; i < num; i++)
	{
		if (strcmp(per[i].name, name) == 0)
		{
			printf("\n\t\t 以下是您要修改的联系人的纪录:");
			findmark++;
			printf("\n\t\t______________________________");
			printf("\n\t\t 名字:  %s", per[i].name);
			printf("\n\t\t 性别:  %s", per[i].sex);
			printf("\n\t\t 手机号码:  %s", per[i].celephone);
			printf("\n\t\t 电子邮件:  %s", per[i].email);
			printf("\n\t\t QQ 号码:   %ld", per[i].QQ);
			printf("\n\t\t______________________________");
			printf(" \n 是否修改?(1代表修改;2代表不修改)");
			printf(" \n 请输入您的数字选择:\n ");
			scanf("%d", &j);
			if (j == 1)
			{
				xiugaixiangmu(i);
				xiugaimark++;
				printf("\n\t\t 修改成功");
				if ((i + 1) < num)
				{
					printf("\n\t\t 是否继续修改相同姓名的联系人的信息?(1代表继续;2代表不继续)");
					printf(" \n 请输入您的数字逸择:\n");
					scanf("%d", &j);
					if (j == 1)
					{
						a = i;
						findmark++;
						continue;
					}
				}
				printf("\n\t\t 是否继续修改?(1代表继续:2代表不继续)");
				printf("请输入您的数字选择:");
				scanf("%d", &j);
				if (j == 1)
					xiugaibyname();
				return;
			}
		}
	}
	if ((xiugaimark == 0) && (findmark == 0))
	{
		printf("\n\t\t 没有该联系人的纪录");
		printf("\n\t\t 是否继续修改?(1代表继续:2代表不继续)");
		printf(" \n 请输入您的数字选择:\n");
		scanf("%d", &j);
		if (j == 1)
			xiugaibyname();
		return;
	}
	else if (findmark != 0)
	{
		printf("\n\t\t 没有重名信息");
		printf("\n\t\t 是否继续修改?(1代表继续;2代表不继续)");
		printf(" \n 请输入您的数字选择: \n ");
		scanf("%d", &j);
		if (j == 1)
			xiugaibyname();
		return;
	}
}
void listmenu() //*排序萊单*//
{
	int i, j;
	system(" cls ");
	system(" color b0");
	if (num == 0)
	{
		printf("\n\t\t 对不起,文件中无任何纪录");
		printf("\n\t\t 请按任意数字键返回主菜单");
		scanf("%d", &j);
		return;
	}
	else
	{
		system(" cls ");
		system(" color 12");
		printf("\n\t\t 排序菜单");
		printf("\n\t\t 1—按姓名排序 ");
		printf("\n\t\t 2—返回主菜单 ");
		printf(" \n 请输入您的数字选择:  \n");
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
			printf(" \n 对不起!您的输入有误!请重新输入: \n ");
			goto loop10;
		}
	}
}
void scopy(struct person a, struct person b)
{
	//结构体拷贝
	a.age = b.age;
	strcpy(a.celephone, b.celephone);
	strcpy(a.name, b.name);
	strcpy(a.email, b.email);
	strcpy(a.sex, b.sex);
	a.QQ = b.QQ;
}
void listbyname()
{ //*按姓名排序*//
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
		printf("\n 排序成功,是否显示?(1代表继续:2代表不继续)");
		printf("\n请输入您的数字选择: \n ");
		scanf("%d", &k);
		if (k == 1)
			showall();
		return;
	}
}
void showalI()
{ //*输出全部信息*//
	int i, j;
	system(" cls ");
	system(" color 3b");
	if (num != 0)
	{
		printf("\n\t\t**********以下为通讯录所有信息**********");
		for (i = 0; i < num; i++)
		{
			printf("\n\t\t______________________________");
			printf("\n\t\t名字:%s", per[i].name);
			printf("\n\t\t性别:%s", per[i].sex);
			printf("\n\t\t手机号码:%s", per[i].celephone);
			printf("\n\t\t电子邮件:%s", per[i].email);
			printf("\n\t\tQQ号码;%ld", per[i].QQ);
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
		printf("\n\t\t对不起!通讯录中无任何纪录!");
	printf("\n\t\t请按任意数字键返回主菜单");
	scanf("%d", &j);
	return;
}
void writetofile() //*写入文件*//
{
	int i, k;
	FILE *fp;
	system(" cls ");
	system("color 84");
	if ((fp = fopen("per.bin", " wb ")) == NULL)
	{
		printf("\n\t\t 文件打开失败");
	}
	for (i = 0; i < num; i++)
	{
		if (fwrite(&per[i], sizeof(struct person), 1, fp) != 1)
		{
			printf("\n\t\t写入文件错误!\n");
		}
	}
	fclose(fp);
	printf("\n\t\t 通讯录文件已保存");
	printf("\n\t\t请按任意数字键返回主菜单");
	scanf("%d", &k);
	return;
}
void readfromfile() //*读取文件*//
{
	int i, j, k;
	system(" cls ");
	system(" color 2b");
	if ((fp = fopen("per.bin", " rb ")) == NULL)
	{
		printf("\n\t\t****************************************");
		printf("\n\t\t*                                      *");
		printf("\n\t\t*                                      *");
		printf("\n\t\t*          通讯录文件不存在!           *");
		if ((fp = fopen("per.bin", "wb")) == NULL)
		{
			printf("\n*          建立失败!           *");
			printf("\n*                              *");
			printf("\n*                              *");
			printf("\n********************************");
			exit(0);
		}
		else
		{
			printf("\n\t\t*        通讯录文件已建立!      *");
			printf("\n\t\t*                               *");
			printf("\n\t\t*                               *");
			printf("\n\t\t*********************************");
			printf("\n\t\t     按任意键进入主菜单          ");
			printf("\n\t\t     请输入您的数字选择：        ");
			scanf("%d", &k);
			return;
		}
		exit(0);
	}
	fseek(fp, 0, 2);   //*文件位置指针移动到文件末尾*//
	if (ftell(fp) > 0) //*文件不为空*//
	{
		rewind(fp); //*文件位置指针移动到文件开始位置*//
		for (num = 0; !feof(fp) && fread(&per[num], sizeof(struct person), 1, fp); num++)
		{
			printf("\n\t\t***************************");
			printf("\n\t\t*                         *");
			printf("\n\t\t*                         *");
			printf("\n\t\t*     文件导入成功!       *");
			printf("\n\t\t*                         *");
			printf("\n\t\t*                         *");
			printf("\n\t\t***************************");
			printf("\n\t\t     按1显示所有信息,按2回主菜单!   ");
			printf("\n\t\t     请输入您的数字选择:    ");
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
				printf("\n\t\t*     文件导入成功!       *");
				printf("\n\t\t*  通讯录文件中无任何记录!*");
				printf("\n\t\t*                         *");
				printf("\n\t\t*                         *");
				printf("\n\t\t*                         *");
				printf("\n\t\t***************************");
				printf("\n\t\t请按任意数字键返回主菜单   ");
				scanf("%d", &i);
				return;
			}
		}
	}
}
void deleteall() //*删除所有信息*//
{
	int i, j;
	system("cls");
	system(" color 50");
	printf("\n\t\t 确认删除?\n");
	printf("请按1和2(1代表确认;2代表不删除)\n");
	scanf("%d", &i);
	if (i == 1)
	{
		fclose(fp);
		if ((fp = fopen("per.bin", " wb "))==NULL)
			{
				printf("\n\t\t 不能打开文件,删除失败");
				readfromfile();
			}
		num = 0;
		printf("\n\t\t 纪录已删除!");
		printf("\n\t\t请按任意数字健返回主菜单");
		scanf("%d", &j);
		return;
	}
}
