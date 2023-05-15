#include<stdio.h>

#define MAXSIZE 10  // 定义静态顺序表的最大长度
typedef struct {
	int data[MAXSIZE];  // 存储数据元素
	int length;  // 当前长度
} SqList;  // 静态顺序表类型定义


void InitList(SqList &L) {
	L.length = 8;
	for(int i=0;i<L.length;i++)
	{
		L.data[i]=0;
	}
	
}

void InsertElem(SqList &L, int elem, int pos) {
	if (pos < 1 || pos > L.length + 1) {
		printf("插入位置不合法！\n");
		return;
	}
	if (L.length >= MAXSIZE) {
		printf("顺序表已满，无法插入！\n");
		return;
	}
	for (int i = L.length - 1; i >= pos - 1; i--) {
		L.data[i + 1] = L.data[i];
	}
	L.data[pos - 1] = elem;
	L.length++;
}

// 在第三个位置插入数字6
int main()
{
	SqList L;
	InitList(L);
	InsertElem(L, 6, 3);
	for(int i=0;i<L.length;i++)
	{
		printf("%d\n",L.data[i]);
	}
	
}

