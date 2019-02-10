//QUICKSORT
//LIBRARY
#include<iostream>
using namespace std;


//function to partition
int part(int ar[],int low,int high)
{
	int i=low;
	int temp;
	int pivot=high;	//selecting pivot high
	while(i<pivot)
	{
if(ar[i]>ar[pivot])	//comparing with pivot
		{	
			temp=ar[i];	//storing the value 
			ar[i]=ar[pivot-1]; //swaping
			ar[pivot-1]=ar[pivot];
			ar[pivot]=temp;
			pivot=pivot-1;}
		else 
		i++;	//do not swap
}
	return pivot;}
//calling the quicksort
void QS(int ar[],int low,int high)
{if (low>=high)
	return;
	else
	{int j = part(ar,low,high);
	QS(ar,low,j-1);
		QS(ar,j+1,high);
	}	
}
//driving function
int main()
{	int ar[5]={2,1,5,4,3};
	QS(ar,0,4);
	cout<<"sorted"<<endl;
	for(int i=0;i<5;i++)
	cout<<ar[i]<<",";
	cout<<endl;
	return 0;//terination
}
