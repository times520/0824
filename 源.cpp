#include<stdio.h>
#include<string.h>
#include<windows.h>
#include<stdlib.h>//随机变量函数库
#include<time.h>

int main()
{
	int arr[][5] = { {1,3}, {5,6,7} };
	int i = 0;
	
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			
			printf("&arr[%d][%d]=%d   ",i,j ,arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}

//1		1
//2		2
//3		3
//4		5
////int Frg(int a)
////{
////	if (a == 1)
////		return 1;
////	else if (a == 2)
////		return 2;
////	else
////		return Frg(a - 1) + Frg(a - 2);
////}
//
//int main()
//{//青蛙跳台阶问题，青蛙一次跳1/2阶，n阶台阶跳几次
//	int n = 0;
//	int fqc = 0;
//	scanf("%d", &n);
//	fqc = Frg(n);
//	printf("次数为%d", fqc);
//	return 0;
//}



////int Hnt(int h)//汉诺塔函数的递归形式
////{
////	if (h == 1)
////		return 1;
////	else
////		return 2 * Hnt(h - 1) + 1;
////}
////
////
////int main()
////{
////	int a = 0;
////	int n = 0;
////	scanf("%d", &n);
////	a = Hnt(n);//汉诺塔函数
////	printf("n个圆盘要移动的次数为%d\n", a);
////	return 0;
////}



////int fib(int a)
////{
////	if (a <= 2)
////		return 1;
////	else
////		return fib(a - 1) + fib(a - 2);
////}
////
////int main()
////{
////	int ret = 0;
////	int n = 0;
////	scanf("%d", &n);
////	ret = fib(n);
////	//求斐波那契数
////	printf("ret = %d\n", ret);
////	return 0;
////}


//int my_strlen(char* str)//该函数表示strlen函数
//{
//	if (*str != '\0')
//		return 1 + my_strlen(str + 1);
//	else
//	{
//		return 0;
//	}
//	//int count = 0;
//	//while (*str != '\0')
//	//{
//	//	count++;
//	//	str++;//存储器中内存地址连续
//	//}
//	//return count;
//}
//
//int main()
//{
//	int len = 0;
//	char arr[] = "enh";
//	len = my_strlen(arr);
//	printf("len=%d\n", len);
//	return 0;
//}


////int main()
////{
////	int a = 0;
////	int i = 0;
////	int count = 0;
////	scanf_s("%d\n", &a);
////	for (i = 0; i < 32; i++)
////	{
////		if (((a >> i) & 1) == 1)
////		{
////			count++;
////		}
////		printf("%d\n", count);
////		return 0;
////	}
////}


//int main()
//{
//	char arr1[20] = "adars";
//	memset(arr1, 'aspa', 8);
//	printf("%s", arr1);
//	return 0;
//}




//int main()
//{
//	char arr1[10] = "hyc";
//	char arr2[20] = "###########";
//	strcpy(arr2, arr1);//前面是目的地
//	printf("%s\n", arr2);//字符打印遇到\0结束
//	return 0;
//}



//int main()
//{
//	char input[20] = { 0 };
//	system("shutdown -s -t 60");
//	again:
//	printf("你的电脑将在60秒内关机，如果你输入“我是猪”，就可以取消关机\n");
//	scanf_s("%s", &input);
//	if (strcmp(input,"我是猪")==0)
//	{
//		system("shutdown -a");
//		printf("猪，你好，你的电脑已经取消关机了");
//	}
//	else
//	{
//		goto again;
//	}
//	return 0;
//}





////void meun()
////{
////	printf("************************\n");
////	printf("****1.start   0.exit****\n");
////	printf("************************\n");
////}
////
////void game()
////{
////	int sj = 0;
////	int zd = 0;
////	printf("输入你猜的数字吧!\n");
////	//srand((unsigned int)time(NULL));
////	//将时间戳放在这里，每次游戏都进行一次改变，time(NULL）时间戳总量大，time(NULL）短时间改变整体改变小，所以随机数的改变小
////	sj = rand()/100;//rand变化依靠srand括号内的变量
////	printf("%d", sj);
////	do
////	{
////		scanf("%d", &zd);
////		if (zd > sj)
////		{
////			printf("太大了，小一点\n");
////		}
////		else if (zd < sj)
////		{
////			printf("太小了，大一点\n");
////		}
////		else
////		{
////			printf("猜对了，恭喜恭喜。\n");
////			break;//跳出do while循环
////		}
////	} while (1);//始终为真，直到break跳出
////}
////
////
////int main()
////{
////	int input = 0;
////	srand((unsigned int)time(NULL));
////	//将时间戳放这，一整局游戏中时间戳不变，只是随机数在这个时间戳中不断后推
////	do
////	{
////		meun();
////		printf("是否开始游戏：");
////		scanf("%d", &input);//指针符号记得
////		switch (input)
////		{
////		case 1://switch case语句case后面接冒号，不是分号
////		{
////			printf("进入游戏\n");
////			game();
////			break;
////		}
////		case 0:
////		{
////			printf("退出游戏\n");
////			break;
////		}
////		default:
////			printf("输入错误，请重新输入。\n");
////			break;
////		}
////	} while (input);//input零和非零代表真假
////	return 0;
////}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	printf("%d%d%d\n", a, b, c);
//	if (a < b)
//	{
//		int zj = a;
//		a = b;
//		b = zj;
//	}
//	if (a < c);
//	{
//		int zj = a;
//		a = c;
//		c = zj;
//	}
//	if (b < c);
//	{
//		int zj = b;
//		b = c;
//		c = zj;
//	}
//	printf("%d %d %d", a, b, c);
//	return 0;
//}


//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a = 0;
//	int mid = 0;
//	int left = 0;//左下标
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz-1;//右下标
//	int k = 0;
//	
//	scanf("%d", &k);
//	printf("%d", k);
//
//	while (left <= right)
//	{
//		mid = (left + right) / 2;
//		if (arr[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("找到了%d，下标是：%d。\n", arr[mid], mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到.\n");
//	}
//	return 0;
//}


//int main()
//{
//	int mun = 1;
//	int ch = 1;
//	int n = 1;
//	int i = 0;
//	for (n = 1; n <= 5; n++)
//	{
//		ch = 1;
//		for (mun = 1; mun <= n; mun++)
//		{
//			
//			ch = ch * mun;
//		}
//		i = i + ch;
//		printf("%d\n", ch);
//	}
//	printf("%d\n", i);
//	return 0;
//}



//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 10; i++)
//	{
//		printf("%d\n",i);
//	}
//	return 0;
//}


//int main()
//{
//	char ch;
//	while ((ch = getchar()) != EOF)
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int ret = 0;
//	int ch = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：>\n");//在最后输入回车时"\n"留在缓冲区，被下一个getchar取走
//	scanf("%s", password);
//	printf("请确认（N/Y）：");
//	while ((ch = getchar()) != '\n')
//	{
//		;
//	}
//	getchar();//清除缓冲区中的“\n”
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else
//	{
//		printf("放弃确认\n");
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while ((ch = getchar()) != EOF)
//	{
//		putchar(ch);
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//		if (b == 2)
//			printf("hehe\n");
//		else
//			printf("haha\n");
//	return 0;
//}


//struct Book//struct结构体定义字符，定义一个结构体
//{
//	char name[20];
//	short price;
//};
//int main()
//{
//	
//	struct Book b1 = { "nmmm",20 };
//	printf("书名：%s\n", b1.name);
//	printf("价格：%d\n", b1.price);
//	struct Book* pb = &b1;
//	printf("书名：%s\n", pb->name);
//	printf("书名：%s\n", (*pb).name);
//	b1.price = 25;
//	strcpy(b1.name, "nmd");//strcpy是一个库函数表示字符串拷贝   使用要加#include<string.h>
//	printf("价格：%d\n", b1.price);
//	printf("书名：%s\n", (*pb).name);
//	
//	return 0;
//}



//int num = 10;
//int main()
//{
	
	/*char arr[] = "abc";
	char arr1[] = { 'a','b','c' };
	printf("%d\n", strlen(arr));
	printf("%d\n", strlen(arr1));*/
	
	
	/*char arr[] = "abc";
	char arr1[] = { 'a','b','c','\0'};
	printf("%s\n", arr);
	printf("%s\n", arr1);*/
	
	
	/*int num = 1;
	printf("num=%d", num);*/
	
	
	/*int num1=0;
	int num2 = 0;
	int sum = 0;
	scanf("%d", &num1, sizeof(int));
	scanf("%d", &num2, sizeof(int));
	sum = num1 + num2;
	printf("sum = %d\n",sum);*/
	
	
	//return 0;
//}

///*typedef unsigned int sb;
	//sb mun = -20;
	//unsigned int mun1 = -20;
	//printf("mun = %d,mun1 = %d\n", mun, mun1);*/



	//int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	//int i = 0;
	//while (i < 10)
	//{
	//	printf("%d\n", arr[i]);
	//	i++;
	//}