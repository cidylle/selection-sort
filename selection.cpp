// Selection Sort
// Author:: Christian Idylle (idylle.christian@gmail.com)
// License:: The MIT License (MIT) Copyright (c) 2015 Christian Idylle

#include <iostream>
using namespace std;

void selection(int a[]);

int main() {

	int a[5] = {3,1,5,2,4}; 
	
	for(int i=0;i<5;i++)
	{
		int min = a[i];
		int min_index=i;
		for(int j=i+1;j<5;j++)
		{
			if(min>a[j]) {min=a[j];min_index=j;}
		}
		if(a[i]>min) 
		{
			int temp = a[i];
			a[i] = a[min_index];
			a[min_index] = temp;
		}
	}
		
	for(int i=0;i<5;i++) cout << a[i]; 
	cout << endl;
	return 0;
}


			
