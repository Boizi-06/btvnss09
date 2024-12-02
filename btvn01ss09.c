#include<stdio.h>
int main(){
	int array[100];
	int n,i,index,number;
	printf("moi ban nhap so phan tu cua mang %d\n");
	scanf("%d",&n);
	printf("nhap tung phan tu vao mang \n");
	for(i=0;i<n;i++){
		printf("phan tu thu %d la : \n",i+1);
		scanf("%",array[i]);
		
	}
	printf("nhap gia tri ban muon them vao trong mang \n");
	scanf("%d",&number);
	printf("nhap vi tri ban muon chen\n");
	scanf("%d",&index);
	for(i = n;i>=index;i--) {
        array[i] = array[i - 1];
    }
    array[index-1] =index;
    n++; 
    printf("Mang sau khi chen:\n");
    for(i = 0; i < n; i++){
        printf("%d ", array[i]);
    }
    printf("\n");

	
	return 0;
}




