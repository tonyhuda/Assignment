#include <iostream>
using namespace std;

int main()
{
	     int index,i,j,temp, num,arr[100];

	     cout<<"How many elements do you want to enter? "<<endl;
	     cin>>num;

      cout<<"Enter the elements: "<<endl;
	      for(i=0;i<num;i++)
	{
		  cin>>arr[i];
	}

	for(j=1;j<num;j++)
	{
		index=arr[j];
		i=j-1;
		while((i>=0)&&(arr[i]>=index))
		{
			temp=arr[i+1];
			arr[i+1]=arr[i];
			arr[i]=temp;
			i=i-1;
		}
		arr[i+1]=index;
	}

	cout<<"\nElements after sorting using insertion:  "<<endl;
	for(i=0;i<num;i++)
	{
		cout<<" "<<arr[i]<<endl;
	}

	return 0;
}
