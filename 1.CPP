#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int i,j,n,a[10],b[10];
	cout<<"Enter the no. of elements you want to enter "<<endl;
	cin>>n;
	cout<<"Enter array elements ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	cout<<"Enter the array elements for 2nd array ";
	for(i=0;i<n;i++)
	{
		cin>>b[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]!=b[i])
		{
			break;
		}
	}
	if(i==n)
	{
		cout<<"Elements of both the array are same ";
	}
	else
	{
		cout<<"Elements of both the array are not same\n";
	}
	getch();
}