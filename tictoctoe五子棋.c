#include <stdio.h>

int main()
{
	const int SIZE = 3;
	int board[SIZE] [SIZE];
	int i, j;
	int numX1, numX2;
	int numO1, numO2;
	int result = -1;     //-1:û��Ӯ�� 1��XӮ�� 0:OӮ
	
	//�������
	for ( i=0; i<SIZE; i++ ) {
		for( j=0; j<SIZE; j++ ) {
			scanf("%d", &board[i][j]);
		}
	}
	
	//����к���
	 for ( i=0; i<SIZE && result==-1; i++ ) {
	 	numX1 = numX2 = 0;
	 	numO1 = numO2 = 0;
		for(j=0; j<SIZE; j++){
			if ( board[i][j] == 1 ) {
				numX1 ++;
			} else {
				numO1 ++;
			}
			if ( board[j][i] == 1 ) {
				numX2 ++;
			} else {
				numO2 ++;
			}
		}
		if ( numX1==SIZE || numX2==SIZE ) {
			result = 1;
		}else if ( numO1==SIZE || numO2==SIZE )  {
			result = 0;
		}
	}
	
	//���Խ���
	 numX1 = numX2 = 0;
	 numO1 = numO2 = 0;
	 for ( i=0; i<SIZE; i++ ){
	 	if( board[i][i] == 1 ) {
	 		numX1 ++;
		 } else {
		 	numO1 ++;
		 }
		 if( board[i][SIZE-i-1] == 1 ) {
	 		numX2 ++;
		 } else {
		 	numO2 ++;
		 }
		 if ( numX1==SIZE || numX2==SIZE ) {
			result = 1;
		}else if ( numO1==SIZE || numO2==SIZE )  {
			result = 0;
		}
	 }
	 
	 //������ 
	 if( result == -1){
	 	printf("���˻�ʤ\n");
	 } else if ( result == 1) {
	 	printf("X��ʤ\n");
	 } else {
	 	printf("O��ʤ\n");
	 }
	 
	return 0;
}

