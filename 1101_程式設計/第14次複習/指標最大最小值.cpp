#include<iostream>
using namespace std;
void maxmin(int a,int b,int c,int *maxPtr,int *minPtr)
{
    if(a > b && a > c) *maxPtr = a;
    else if(b > a && b > c) *maxPtr = b;
    else *maxPtr = c;

    if(a < b && a < c) *minPtr = a;
    else if(b < a && b < c) *minPtr = b;
    else *minPtr = c;
}

int main(){
	int max,min;
	int n1,n2,n3;
	cin>>n1>>n2>>n3;
	maxmin(n1,n2,n3,&max,&min);
	cout<<max<<" "<<min<<endl;
	system("PAUSE");
}