#include <stdio.h>

#define MAX_SIZE 10

typedef struct {
	int data[MAX_SIZE];
	int length;
} SeqList;

void Delete(SeqList *list, int index) {
	if (index < 0 || index >= list->length) {
		printf("删除位置不合法\n");
		return;
	}
	for (int i = index; i < list->length - 1; i++) {
		list->data[i] = list->data[i + 1];
	}
	list->length--;
}

int main() {
	SeqList list = {{1, 2, 3, 4, 5}, 5};
	Delete(&list, 2);
	for (int i = 0; i < list.length; i++) {
		printf("%d ", list.data[i]);
	}
	printf("\n");
	return 0;
}
