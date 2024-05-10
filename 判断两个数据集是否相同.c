#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a[100],b[100],c[100],d[100]={0},e[100],n1=0,n2=0,k=0,i=0,j=1,x=1;
	scanf("%d",&n1);
	for(i=0;i<n1;i++){
		scanf("%d,",&a[i]);
	}
	scanf("%d",&n2);
	for(i=0;i<n2;i++){
		scanf("%d,",&b[i]);
	}
	for(i=0;i<n1;i++){
		for(j=0;j<n1;j++){
		int temp=0;
		if(a[i]<a[j]){
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	}
	}
for(i=0;i<n2;i++){
		for(j=0;j<n2;j++){
		int temp=0;
		if(b[i]<b[j]){
			temp=b[i];
			b[i]=b[j];
			b[j]=temp;
		}
	}
	}
	if(n1==n2){
		for(i=0;i<n1;i++){
	if(a[i]!=b[i]){
		x=0;
	}
}
	}else{
		x=0;
	}
printf("%d\n",x);
j=1;
	for(i=0;i<(n1-1);i++){
		
		if(a[i]!=a[i+1]){
			c[k]=a[i];
			k++;
			d[j]=i+1;
			j++;
		}
	}
	c[k]=a[n1-1];
	d[j]=n1;
	for(i=0;i<k;i++){
		e[i]=d[i+1]-d[i];
	}
	e[k]=d[j]-d[j-1];
for(i=0;i<=k;i++){
	printf("%d %d\n",c[i],e[i]);
}
	return 0;
}