#define _CRT_SECURE_NO_WARNINGS

#include "seqlist.h"



//˳���ĳ�ʼ��
void IniSeqlist(SeqList *seqlist, int capacity){
	assert(seqlist != NULL);

	seqlist->array = (SDataType *)malloc(sizeof(SDataType)* capacity);
	assert(seqlist->array);

	seqlist->size = 0;
	seqlist->capacity = capacity;
}

//˳����ӡ
void ShowSeqlist(struct Seqlist *seqlist, int size){
	while (size--){
		printf("%d->");
	}
	printf("\n");
}


int main(){
	return 0;
}
