#include <stdio.h>
#include <string.h>


void int_init(void)
{
	printf("整形初始化\n");
	int num1 = 0;
	long num2 = 0;
	printf("num1 = %d\n",num1);
	printf("num2 = %ld\n",num2);
}	

void char_init(void)
{
	printf("字符型初始化\n");
	char ch1 = '\0';
	char ch2 = 0;
//	char ch3 = '';//error
	printf("ch1 = %c %d\n",ch1,ch1);
	printf("ch2 = %c %d\n",ch2,ch2);
}

void double_init(void)
{
	printf("浮点型初始化\n");
	double num1 = 0;
	double num2 = 0.00;
	float num3 = 0.00f;
	float num4 = 0.00;
	printf("num1 = %lf\n",num1);
	printf("num2 = %lf\n",num2);
	printf("num3 = %f\n",num3);
	printf("num4 = %f\n",num4);
}

void array_init(void)
{
	printf("一维整形数组初始化\n");
	int num1[5] = {0};
	int num2[5] = {};
	int num3[5] = {1,2};
	//int num4[5] = 0;//error
	printf("num1 %d %d %d %d %d\n",num1[0],num1[1],num1[2],num1[3],num1[4]);
	printf("num2 %d %d %d %d %d\n",num2[0],num2[1],num2[2],num2[3],num2[4]);
	printf("num3 %d %d %d %d %d\n",num3[0],num3[1],num3[2],num3[3],num3[4]);


	printf("一维字符数组初始化\n");
	char array1[5] = "";
	char array2[5] = " ";
	printf("array1 %d %d %d %d %d\n",array1[0],array1[1],array1[2],array1[3],array1[4]);
	printf("array2 %d %d %d %d %d\n",array2[0],array2[1],array2[2],array2[3],array2[4]);

	printf("二维整形数组初始化\n");
	int num5[2][3] = {0};
	int num6[2][3] = {{1}};
	int num7[2][3] = {};
	//int num8[2][3] = 0;//error
	int i = 0,j = 0;
	for(i = 0;i < 2;++i)
	{
		for(j = 0;j < 3;++j)
		{
			printf("%d ",num5[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i = 0;i < 2;++i)
	{
		for(j = 0;j < 3;++j)
		{
			printf("%d ",num6[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i = 0;i < 2;++i)
	{
		for(j = 0;j < 3;++j)
		{
			printf("%d ",num7[i][j]);
		}
		printf("\n");
	}

	printf("二维字符数组初始化\n");
	//char array3[2][3] = "";//error
	char array4[2][3] = {'\0'};
	char array5[2][3] = {{'a'}};
	char array6[2][3] = {};

	for(i = 0;i < 2;++i)
	{
		for(j = 0;j < 3;++j)
		{
			printf("%d ",array4[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i = 0;i < 2;++i)
	{
		for(j = 0;j < 3;++j)
		{
			printf("%d ",array5[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i = 0;i < 2;++i)
	{
		for(j = 0;j < 3;++j)
		{
			printf("%d ",array6[i][j]);
		}
		printf("\n");
	}
}
void string_init(void)
{
	printf("字符串初始化\n");
	char str1[20] = "";
	//char str2[20] = NULL;//error
	char str3[20] = "helloworld";
	printf("str1 %s\n",str1);
	printf("str3 %s\n",str3);
}

void point_init(void)
{
	printf("指针初始化\n");
	int *p1 = NULL;
	printf("p1 %p\n",p1);
}

typedef struct student{
	int id;
	char name[20];
}Stu;
typedef struct studentLink{
	Stu data;
	struct studentLink *next;
}StuLink;
void struct_init(void)
{
	printf("普通结构体初始化\n");
	Stu stu1 = {};
	Stu stu2 = { };
	Stu stu3 = {0};
	printf("%d %s\n",stu1.id,stu1.name);
	printf("%d %s\n",stu2.id,stu2.name);
	printf("%d %s\n",stu3.id,stu3.name);
	Stu stu4;
	memset(&stu4,0,sizeof(Stu));
	printf("%d %s\n",stu4.id,stu4.name);

	printf("普通结构体数组初始化\n");
	Stu stu_array1[5] = {};
	Stu stu_array2[5] = { }; 
	Stu stu_array3[5] = {0};
	Stu stu_array4[5] = {{1}};
	int i = 0;
	for(i = 0;i < 5;++i)
	{
		printf("%d %s\n",stu_array1[i].id,stu_array1[i].name);
	}
	for(i = 0;i < 5;++i)
	{
		printf("%d %s\n",stu_array2[i].id,stu_array2[i].name);
	}
	for(i = 0;i < 5;++i)
	{
		printf("%d %s\n",stu_array3[i].id,stu_array3[i].name);
	}
	for(i = 0;i < 5;++i)
	{
		printf("%d %s\n",stu_array4[i].id,stu_array4[i].name);
	}
	Stu stu_array5[5];
	memset(&stu_array5,0,sizeof(Stu) * 5);
	for(i = 0;i < 5;++i)
	{
		printf("%d %s\n",stu_array5[i].id,stu_array5[i].name);
	}
	

	printf("带指针结构体初始化\n");
	StuLink stulink1 = {};
	StuLink stulink2 = { };
	StuLink stulink3 = {0};
	printf("%d %s %p\n",stulink1.data.id,stulink1.data.name,stulink1.next);
	printf("%d %s %p\n",stulink2.data.id,stulink2.data.name,stulink2.next);
	printf("%d %s %p\n",stulink3.data.id,stulink3.data.name,stulink3.next);
	StuLink stulink4;
	memset(&stulink4,0,sizeof(StuLink));
	printf("%d %s %p\n",stulink4.data.id,stulink4.data.name,stulink4.next);
}
int main(void)
{
	printf("各种数据类型的初始化，第一个为最长用的方式\n");
	int_init();
	char_init();
	double_init();
	array_init();
	string_init();
	point_init();
	struct_init();


	return 0;
	
}
