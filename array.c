#include<stdio.h>
void main(){
  int n;
  printf("Enter The Size of Array : ");
  scanf("%d",&n);
  int a[n];
  int b[n];
  int c[n];
  int i;
  
 printf("Enter the elements of A \n");
 for(i=0;i<n;i++){
 	printf("enter a[%d] : ",i);
 	scanf("%d",&a[i]);
}
 printf("Enter the elements of B \n");
 for(i=0;i<n;i++){
 	printf("Enter b[%d] : ",i);
 	scanf("%d",&b[i]);
 }
 
 for(i=0;i<n;i++){
 	c[i]=a[i]+b[i];
 }
 
 printf("Sum of A and B elements are below \n");
 
 for(i=0;i<n;i++){
 	printf("%d\n",c[i]);
 }

}
