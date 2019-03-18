#include<iostream>

using namespace std;


int Sort(int low,int high,int *x)
{
     int i,h=high,l=low,pivot,t;
     pivot=x[low];
     while(low<high)
     {
        while(x[l]<pivot)
            {
              l++;
            }
        while(x[h]>pivot)
            {
               h--;
            }
            if(l<h)
             {
               t=x[l];
               x[l]=x[h];
               x[h]=t;
             }
             else
              {
                t=pivot;
                pivot=x[l];
                x[l]=t;
                break;
                }
     }
              return h;
}

void quickSort(int l,int h,int *x)
{
  int index,i;
  if(l<h)
  {
          index=Sort(l,h,x);
          quickSort(l,index-1,x);
          quickSort(index+1,h,x);
  }
}

int main()
{
      int x[100],n,l,h,i;
      cout<<"How many elements do you want to enter :";
      cin>>n;
      cout<<"Enter the elements:";
      for(i=0;i<n;i++)
      cin>>x[i];

      h=n-1;
      l=0;
      quickSort(l,h,x);
      cout<<"\nAfter Sorting using Quick sort :\n";
      for(i=0;i<n;i++)
      {
        cout<<x[i]<<"  ";
      }

      return 0;
}
