#include<stdio.h>
#define MaxSize 10
//声明一个顺序表
typedef struct {
	int data[MaxSize];
	int length;
}SqList;

//初始化表
void InitList(SqList &L)
{
	for(int i;i<MaxSize;i++)
	{
		L.data[i]=0;
		L.length=0;
	}
}

int main()
{
	//声明结构体
	SqList L;
	
	//调用初始化函数
	InitList(L);
	
	//测试打印出顺序表存的元素
	for(int i=0;i<MaxSize;i++)
	{
		printf("顺序表的元素[%d]：%d\n",i,L.data[i]);

	}
	
	return 0;
	
	
}
