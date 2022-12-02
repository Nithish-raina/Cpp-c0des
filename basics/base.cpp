#include <iostream>
using namespace std;
int main()
{
	// int arr[][] = {{1,2},{2,33}}; invalid declaration
	int arr2[][2] = {{1,2}};
	int arr3[] = {};
	int arr1[]{1,2,3,5};
	int n = sizeof(arr1) / sizeof(arr1[0]);
	int a = 23;
	double d = 124.234234;
	float f = 123.32;
	char c = 'a';
	string s = "ewger";
	for(int i = 0; i < n; i++) // arr size can be computed via an expression using sizeof operator beauty of sizeof
	{
		cout<<arr1[i]<<" "; // also works for empty arrays {}
	}
	cout<<endl;
	cout<<sizeof(a + d - f * c)<<endl;
	cout<<sizeof(arr3) / sizeof(arr3[0])<<endl;
	int x = 10;
	float ff = 23.45;
	int &y = x;
	y = ff;
	// int &z = &y; /* error */
	int z = y; 
	z = z + 10;
	cout<< x <<" "<< y <<" " << z << " " <<endl;
	string s1 = "efe",s2 = s1 + "eddwfe";
	string &&s3 = s1 + s2;
	s3 = "modified";
	cout << "s3 :" << s3 << endl << "s2 :" << s2 << endl << "s1 : " << s1 << endl;
	return 0;
}
