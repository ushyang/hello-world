#include <iostream>
#include <string> 

using namespace std;

/*

main()
{
	
    // C�y����malloc���t�O����Cfree����A����� 
	char *Ptr = NULL; 
	Ptr = (char *)malloc(100 * sizeof(char)); 
	if (NULL == Ptr) 
    { 
	exit (1); 
    } 
	gets(Ptr); 
	cout <<Ptr <<endl ;
	free(Ptr); 
	Ptr = NULL; 


	cout << "input: ";
	char upgrade_char;
	cin >> upgrade_char;
	upgrade_char = upgrade_char+1;
	cout << upgrade_char << endl;
	
	cout << "input 3 times number:";
	int grade [5];
	grade [4] = 0;
	
	for (int i = 0; i<3; i++){
	cout << endl << "input " << i+1 << " times ";
	cin >> grade [i];	
	//cout << endl << "1st " << grade [4] ;
	grade [4] = grade [4] + grade [i];
	//cout << endl << "2nd " << grade [4] ;
	}
	double grade_avg;
	grade_avg = (double) grade [4] / 3;
	cout << grade_avg << endl <<endl;
	
	int abc [5] = {1,2,3,4,5};
	cout << abc [0] << endl;
	
	int evan;
	evan = abc [0] + abc [1];
	cout << evan << endl;
	
	char name_1 [11] = "sean huang";
	for (int i=0; i < 11; i++){
	cout << name_1 [i];
	}
	
	
	string name_2 = "Sean Huang";
	cout << name_2;
	
	struct product_1 {
		char type_p1;
		int weight_p1;
		double length_p1;
	};
	
	//struct
	product_1 apple;
	apple.type_p1 = 'a';
	apple.weight_p1 = 5;
	apple.length_p1 = 1.1; 
	
	cout << endl << apple.type_p1 << apple.weight_p1 << apple.length_p1;
	
	//�ʺAstruct 
	product_1 * banana = new product_1;
	banana->type_p1 = 'b';
	banana->weight_p1 = 2;
	banana->length_p1 = 2.5;
	
	cout << endl << banana->type_p1 << banana->weight_p1 << banana->length_p1;
	
	delete banana;
	cout << endl << banana->type_p1 << " " << banana->weight_p1 << " " << banana->length_p1;
	
	enum product_2 {No, Yes, Maybe};
	product_2 p1 = No;
	product_2 p2 = Yes;

	cout << endl << p1 << p2 << endl; 
	
	double ted = 1.5;
	double * pted = &ted;
	cout << *pted << " " << pted ; 
	
	float treacle [10];
	float * ptreacle = &treacle[0];
	cout << endl << sizeof (treacle[0]) ;
	cout << endl << treacle << " " << treacle +10;
	
	cout << endl << "q14 " << (int *) "Home of the jolly bytes";
	
	
	// �ʺA�}�C�A�ϥΫ��� 
	int *q13 = NULL;
	int num = 0;
	cout << endl << "input num: ";
	cin >> num;
	q13 = new int [num];
	cout << q13 << " " << q13 + num ;
	q13 [0] = 25;
	cout << endl << q13 [0];
	delete [] q13;
	
	// �T��R���F 
	cout << endl << q13 [0];

	//���������}�٦b�H 
	cout << endl << q13;
	//���w�R���P��Ŷ�����C�R���@�ӫ���p�]delete p;�^��ڷN��O�R���Fp�ҫ����ؼС]�ܼƩΪ��󵥡^�A
	//����F���ҥe����Ŷ��A�Ӥ��O�R��p�����]����p�����èS���M�P�A���ۤv���M�s�b�A�ӫ��Щҥe�O����Ŷ��å�����^�A�����Ŷ���Ap���F�ū��w�C
	
	
	
	
	int * q13n = new int [10];
	q13n [0] = 50;
	cout << endl << q13n [0];
	delete [] q13n;
	cout << endl << q13n [0];
	cout << endl <<q13n;
	
	//�R�A�}�C�A�]�i�H�b����{�������X�}�C�j�p�A������delete 
	int num_1 = 0;
	cout << endl << "input num: ";
	cin >> num_1;
	int q13a [num_1];
	cout << q13a << " "<< q13a + num_1; 
	
	
	
	
	char actor [30];
	cin.get (actor,30);
	cout << actor << endl;
	
	short betsie [100];
	cin >> betsie [0];
	cin >> betsie [1];
	cout << betsie [0] ;
	

	
	
	return 0;
	
}
*/

