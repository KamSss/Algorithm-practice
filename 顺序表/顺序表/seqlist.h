#define _CRT_SECURE_NO_WARNINGS

typedef int	SDataType;


typedef struct SeqList {
	SDataType	*array;		// ָ����ϵĿռ�
	int size;		// ��ʾ��ǰ˳������ж��ٸ���
	// ˳��Ҳ��ʾ�˼���������±�
	int	capacity;	// ����
}	SeqList;

//��ʼ��
void IniSeqlist(SeqList *seqlist, int capacity);
//ͷɾ
void SeqListPopFront(SeqList *seqlist);
//βɾ
void SeqListPopBack(SeqList *seqlist);