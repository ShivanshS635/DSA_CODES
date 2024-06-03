#include<iostream>
using namespace std;

void merge(int[],int,int,int);

void merge_sort(int a[],int l,int h){
	if(l<h){
		int m=l+(h-l)/2;
		merge_sort(a,l,m);
		merge_sort(a,m+1,h);
		merge(a,l,m,h);
	}
}

void merge(int a[],int l,int m,int h){
	int i=l,j=m+1,k=l;
	int b[l+h];
	
	while(i<=m && j<=h){
		if(a[i]<a[j]){
			b[k]=a[i];
			i++;
		}
		else{
			b[k]=a[j];
			j++;
		}
		k++;
	}
	if(i>m){
		for(int p=j;p<=h;p++){
			b[k]=a[p];
			k++;
		}
	}
	else{
		for(int p=i;p<=m;p++){
			b[k]=a[p];
			k++;
		}
	}
	for(k=l;k<=h;k++){
		a[k]=b[k];
	}
}

int main()
{
	int *a,n,i,l,h;
	
	cout<<"ENTER NUMBER OF ELEMENTS:";
	cin>>n;
	
	a=new int[n];
	
	cout<<"ENTER ELEMENTS:";
	
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	l=0;
	h=n-1;
	
	cout<<"-----Array Before Sorting-----\n";
	
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	merge_sort(a,l,h);
	
	cout<<"\n-----Array After Sorting-----\n";
	
	for(i=0;i<n;i++){
		cout<<a[i]<<" ";
	}
	
	delete []a;
	
	return 0;
}

//using namespace std;
//#include<iostream>
//
//void merge(int[],int,int,int);
//
//void merge_sort(int a[],int l,int h)
//{
//	if(l<h)
//	{
//	int m=(l+h)/2;
//	merge_sort(a,l,m);
//	merge_sort(a,m+1,h);
//	merge(a,l,m,h);
//	}
//}
//
//
//void merge(int a[],int l,int m,int h)
//{
//	int i=l,j=m+1,k=l;
//	int b[l+h];
//	while(i<=m && j<=h)
//	{
//		if(a[i]<a[j])
//		{
//			b[k]=a[i];
//			i++;
//		}
//		else
//		{
//			b[k]=a[j];
//			j++;
//		}
//		k++;
//	}
//	if(i>m)
//	{
//		for(int p=j;p<=h;p++)
//		{
//			b[k]=a[p];
//			k++;
//		}
//	}
//	else
//	{
//		for(int p=i;p<=m;p++)
//		{
//			b[k]=a[p];
//			k++;
//		}
//	}
//	for(k=l;k<=h;k++)
//	{
//		a[k]=b[k];
//	}
//}
//
//
//
//
//int main()
//{
//	int a[8]={9,5,2,8,6,1,4,3};
//	merge_sort(a,0,7);
//	int i;
//	cout<<"\nSorted Array is";
//	for(i=0;i<8;i++)
//		cout<<a[i]<<" ";
//	
//	
//	
//	
//	return 0;
//}
