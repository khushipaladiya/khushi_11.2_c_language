#include<stdio.h>
main(){
	int i;
	int n;
	int a[n];

	
	printf("Enter the array size: ");
	scanf("%d",&n);

printf("Enter elements: \n");
    for(i=0;i<n;i++){
    	printf("Enter a[%d]: ",i);
    	scanf("%d",&a[i]);
    }
    int *p[n];
    int j;

	for(i<n;i>=0;i--){
        for(j=1;j<n;j++){
	 	p[i]=&a[i];
	 	
        }  
	 }
	
printf("Reversed Array elements:\n");
	for(i=n-1;i>=0;i--){
		printf("%d\n",*p[i]);
	}
}

