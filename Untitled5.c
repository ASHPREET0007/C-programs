#include <stdio.h>
int func(int m,int n,int a[m][n+1]){
	int i,j,k,l,flag;
	for(i=0;i<m;i++){
		l=0;
		flag=0;
		for(j=0;j<n;j++){
			l+=a[i][j];
		}
		if(l==2){
			a[i][n]=1;
		}else{
			for(k=2;k<=(l/2);k++){
				if(l%k==0){
					flag=1;
					break;
				}
			}
			if(flag==0){
				a[i][n]=1;
			}else{
				a[i][n]=0;
			}
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<=n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

int main(){
	int i,j,m,n;
	scanf("%d %d",&m,&n);
	int a[m][n+1];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	func(m,n,a);
	return 0;
}

