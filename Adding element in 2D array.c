#include<stdio.h>
#include<string.h>
int func(int n, int m,int a[n][m],int k,int h, int l)  {
	int i,j;
	a[3][1],a[3][2]=0;
	for(i=3;i>=k;i--){
		for(j=2;j>=0;j--){
			
			if(j==h && i==k){
				break;
			}
			if(j==0){
				a[i][j]=a[i-1][2];
			}else{
				a[i][j]=a[i][j-1];
			}
		}
		
	}
	
	a[k][h]=l;
	for(i=0;i<4;i++){
		for(j=0;j<3;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	
}
int main(){
	int i,j,n,m,k,h,l ;
	scanf("%d %d",&n,&m);
	int a[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}
	printf("enter pos of new eleemnt; and element ");
	scanf("%d %d %d",&k,&h,&l);
	
	func(n,m,a,k-1,h-1,l);
}

