#include <iostream>

using namespace std; 

#define MaxSize 100

/*

int Sqlistx [MaxSize];
int len;
int bread;

void InserElem (int Sqlistx[],int &n, int i, int item)
{
	int t;
	if (n == MaxSize || i < 1 || i > n+1)
		exit (0);
	for (t = n-1;t >= i-1; t--)
		Sqlistx[t+1] = Sqlistx [t];
	Sqlistx[i-1] = item;
	n=n+1;
}

int main()
{
	cin >> len;
	cin >> bread;
	for (int i = 0; i < len; i++)
	{
		Sqlistx [i] = i+1;
	}
	
	InserElem (Sqlistx, len , 3, bread);
	
	for (int i = 0; i < len+5; i++)
	{
		cout << Sqlistx [i] << " ";
	}
	
	return 0;
}


typedef struct{
	int *elem;
	int length;
	int listsize;
}Sqlist;

void initsqlist (Sqlist *L)
{
	L->elem = (int *) malloc (MaxSize*sizeof(int));
	if (!L->elem) exit (0);
	L->length=0;
	L->listsize = MaxSize;
}

*/
