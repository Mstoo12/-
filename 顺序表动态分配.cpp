//头文件可以使用malloc函数
#include<stdlib.h>
#include<stdio.h>

//定义顺序表的初始表长
#define initList 10

//定义顺序表
typedef struct{

	int *data;//表的变化指针
	int MaxSize;//表的最大容量
	int length;//表的当前长度
	
}SqList;

//初始化顺序表
void InitList(SqList &L)
{
	L.data=(int *)malloc(initList*sizeof(int));
	for(int i;i<initList;i++)
	{
		L.data[i]=0;
	}
	L.length=0;
	L.MaxSize=initList;
}

//动态增加顺序表
void IncreaseSize(SqList &L,int len)
{
	int *p=L.data;
	L.data=(int *)malloc((L.MaxSize+len)*sizeof(int));
	for(int i=0;i<=L.length;i++){
		L.data[i]=p[i];
	}
	L.MaxSize=L.MaxSize+len;
	
	//释放掉原来的空间
	free(p);		
}

int main()
{
	SqList L;
	InitList(L);
	IncreaseSize(L,5);
	
	for(int i=0;i<L.MaxSize;i++)
	{
		printf("数据[%d]：%d\n",i,L.data[i]);
	}
	return 0;
}
