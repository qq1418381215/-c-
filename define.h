#pragma once
typedef float ElemType;
typedef struct LinkNode {
	ElemType coefficient;
	int power;
	LinkNode *next;
}*LinkList;
