#include <stdio.h>
#include <stdlib.h>


int main() {
	
	int fabrika[2][5];
	int i,j;
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<5;j++) // ilk önce bu döngü çalýþýr
		{
			printf("%d fabrikanin %d. elemaninin maasi: ",i+1,j+1);
			scanf("%d",&fabrika[i][j]);
			if(fabrika[i][j]>0 && fabrika[i][j]<1000)
			{
				fabrika[i][j]+=fabrika[i][j]*0.10;  // 0-1000 lira maaþ arasýna %10 para ekleme
			}
		}
	}
	
	printf("\n\n***************************************************\n\n");
	
	for(i=0;i<2;i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%d fabrikanin %d. elemaninin maasi: %d TL dir.\n",i+1,j+1,fabrika[i][j]);
		}
	}
	
	
	
	
	
	
	return 0;
}
