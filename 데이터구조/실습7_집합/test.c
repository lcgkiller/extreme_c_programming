#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	struct node *prev;
	int N;
	struct node *next;
}node;

void insertNode(node *head, int go_right, int num)
{
	node *new_node = (node *)malloc(sizeof(node));
	node *p = head;
    int i=0;
	for ( i = 0; i < go_right; i++)
	{
		p = p->next;
	}

	p->next = new_node;
	new_node->N = num;
	new_node->next = NULL;
}

void printNodes(node *head)
{
	node *p = head->next;
	for (;p;p = p->next)
	{
		printf(" %d", p->N);
	}
}

int compareNodes(node *A, node *C)
{
	node *pA = A->next;
	node *pC = C->next;

	int i = 0, j = 0;
	for (;pA;pA = pA->next) i++;
	for (;pC;pC = pC->next) j++;

	if (i == j) return 1;
	else return 0;
}
void P1(node *A, node *B)
{
	node *pA = A->next;
	node *pB = B->next;
	node *C = (node *)malloc(sizeof(node));

	int i = 0;
	while (pA != NULL && pB != NULL)
	{
		if (pA->N == pB->N)
		{
			insertNode(C, i++, pA->N);
			pA = pA->next;
			pB = pB->next;
		}

		else if (pA->N > pB->N)
		{
			pB = pB->next;
		}

		else if (pA->N < pB->N)
		{
			pA = pA->next;
		}
	}

	//printNodes(A);
	//printNodes(C);

	if (compareNodes(A, C) == 1) printf("%d", 0);
	else printf("%d", pA->N);
}

void P2(node *A, node *B)
{
	node *pA = A->next;
	node *pB = B->next;
	node *C = (node *)malloc(sizeof(node));
	node *D = (node *)malloc(sizeof(node));

	int i = 0;
	int j = 0;
	while (pA != NULL && pB != NULL)
	{
		if (pA->N == pB->N)
		{
			insertNode(C, i++, pA->N);
			insertNode(D, j++, pA->N);
			pA = pA->next;
			pB = pB->next;
		}

		else if (pA->N > pB->N)
		{
			insertNode(D, j++, pB->N);
			pB = pB->next;
		}

		else if (pA->N < pB->N)
		{
			insertNode(D, j++, pA->N);
			pA = pA->next;
		}
	}

	printNodes(D);
	printf("\n");
	printNodes(C);
}

void main()
{
	node *A = (node *)malloc(sizeof(node));
	node *B = (node *)malloc(sizeof(node));

	int An, Bn;
	int Atmp, Btmp;
    int i=0;

	/*A*/
	scanf("%d", &An);
	for ( i = 0; i < An; i++)
	{
		scanf("%d", &Atmp);

		insertNode(A, i, Atmp);
	}

	/*B*/
	scanf("%d", &Bn);
	for ( i = 0; i < Bn; i++)
	{
		scanf("%d", &Btmp);

		insertNode(B, i, Btmp);
	}

	P1(A, B);
}