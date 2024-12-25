#include<stdio.h>
void display(int arr[],int size)
{
for (int i=0;i<size;i++)
{
printf("%d ",arr[i]);
}
printf("\n");
}
int indDeletion(int arr[],int size,int index,int element,int capacity)
{
if (size>=capacity)
{
return -1;
}
for (int i=index;i<=size-1;i++)
{
arr[i]=arr[i+1];
}
}
int main()
{
int arr[51]={45,18,17,63,25,33,8,20,73,93,2,64,3,6,23};
int size=15,element=73,index=8;
display(arr,size);
indDeletion(arr,size,index,element,51);
size-=1;
display(arr,size);
indDeletion(arr,size,index=11,element,51);
size-=1;
display(arr,size);
indDeletion(arr,size,index=11,element,51);
size-=1;
display(arr,size);
indDeletion(arr,size,index=10,element,51);
size-=1;
display(arr,size);
return 0;
}
