#include<stdlib.h>
#include<stdio.h>

typedef struct m_nodo{
	int val;
	struct m_nodo* next;
}nodo;



int main(void){
	
	nodo * head = malloc(sizeof(nodo));
	head->val = 0;
	head->next = NULL;

	nodo *second = malloc(sizeof(nodo));
	second->val = 1;
	second->next = NULL;

	head->next = second;

	while(head != NULL){
		printf("\n%d\n",head->val);
		head = head->next; 
	}
	
	exit(EXIT_SUCCESS);
}
