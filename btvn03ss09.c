#include<stdio.h>
int main(){
	int array[100];
	int n,j,currentlength,position,i;
	printf("nhap so phan tu muon nhap cua mang\n");
	scanf("%d",&n);
	if(n<0||n>100){
		printf("so luong phan tu khong hop le \n");
		
	}else{
		currentlength=n;
		for(i=0;i<currentlength;i++){
			printf("hay nhap tung phan tu cua mang\n");
			scanf("%d",&array[i]);
		}
	}
	printf("hay nhap vi tri ban mun xoa\n");
	scanf("%d",&position);
	if(position<0||position>100){
		printf("vi tri ban muon xoa khong hop le \n");
		
	}else{
		for(i=position-1;i<currentlength-1;i++){
			array[i]=array[i+1];
		}
		currentlength--;
	}
	printf("mang sau khi in la\n");
	for(i=0;i<currentlength;i++){
		printf("%d\n",array[i]);
		
	}
	printf("\n");
	
	return 0;
}
