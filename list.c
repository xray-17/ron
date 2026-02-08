#include<stdlib.h>
#include<stdio.h>

typedef struct m_nodo{
	int val;
	struct m_list* next;
}nodo;



int main(void){
	
	nodo * head;
	head->val = 0;
	head->next = NULL;
	
	while(head != NULL){
		printf("\n%d\n",head->val);
		head = head->next; 
	}
	
	exit(EXIT_SUCCESS);
}
