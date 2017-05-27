//mukunth eshwaran 103116097

#include<iostream.h>
#include<conio.h>
void main()
{
  clrscr();
  int arr[7]={7,4,8,3,-1,2,-4};
  int temp;
  for(int i=1;i<7;++i)
  {
    cout<<'\n';
    temp=arr[i];
    for(int j=i-1;j>=0;--j)
    {
      if(temp<arr[j])
	arr[j+1]=arr[j];
      else
	break;
    }
    arr[j+1]=temp;
    for(int d=0;d<7;++d)
    cout<<arr[d]<<' ';
  }
  getch();
}
