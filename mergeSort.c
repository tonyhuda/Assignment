#include<iostream>

using namespace std;

void sort(int arr[],int x, int y,int r)
{

	int num1=y-x+1,i,j,k;

	int num2=r-y;

	int left[num1], right[num2];

	for(i=0;i<num1;i++)

	{
		left[i]=arr[x+i];
	}

	for(j=0;j<num2;j++)
	{
		right[j]=arr[y+j+1];
	}

	i=0,j=0;

	for(k=x;i<num1 && j<num2;k++)
	{
		if(left[i]<right[j])
		{
			arr[k]=left[i++];
		}
		else
		{
			arr[k]=right[j++];
		}
	}

	while(i<num1)
	{
		arr[k++]=left[i++];
	}

	while(j<num2)
	{
		arr[k++]=right[j++];
	}
}

void mergeSort(int arr[],int x,int r)
{
	int y;

	if(x<r)
	{
		y=(x+r)/2;
		mergeSort(arr,x,y);
		mergeSort(arr,y+1,r);
		sort(arr,x,y,r);
	}

}


int main()
{

	int arrSize;

	cout<<"How many elements do you want to enter : ";

	cin>>arrSize;

	int arr[arrSize];

	cout<<"Enter the elements :";

	for(int i=0;i<arrSize;i++)
	{
		cin>>arr[i];
	}

	mergeSort(arr,0,arrSize-1);

   cout<<"Sorted elements using Merge sort : ";

	for(int i=0;i<arrSize;i++)
	{
		cout<<arr[i]<<" ";
	}

	cout<<endl;
}
