#include<stdio.h>
#include<conio.h>
void main()
{
int arr1[3][3],i,j;
printf("\n\n Read a array of size 3*3 and print the matrix:\n");
printf("Input elements in the matrix:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("element -[%d],[%d]:",i,j);
scanf("%d",&arr1[i][j]);
}
}
printf("\n The matrix is :\n");
for(i=0;i<3;i++)
{
printf("\n");
for(j=0;j<3;j++)
printf("%d\t",arr1[i][j]);
}
printf("\n\n");
getch();
}


