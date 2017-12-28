#include<stdio.h>

int main(){
	char a[3][3];
	int i,j;
	char ch='X'; 
	int x,y,m,n,c,d;
	
	scanf("%c %c %c %c %c %c %c %c %c",&a[0][0],&a[0][1],&a[0][2],&a[1][0],&a[1][1],&a[1][2],&a[2][0],&a[2][1],&a[2][2]);
	printf("-------------------\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%c ",a[i][j]);
			if(a[i][j]=='X')
			{
				c=i;
				d=j;
			}
		}
		printf("\n");
	}
	printf("XµÄÎ»ÖÃÊÇa[%d][%d]\n",c,d);
	

	
	
	
	return 0;
}
