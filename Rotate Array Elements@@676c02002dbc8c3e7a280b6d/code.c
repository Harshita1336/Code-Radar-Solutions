// // Your code here...
// #include<stdio.h>
// int main(){
//     int n,i;
//     scanf("%d",&n);
//     int arr[n];
//     for (i = 0; i < n; i++) {
//         scanf("%d", &arr[i]);
//     }
//     for (i=n-1; i>=0; i--){
//         printf("%d\n", arr[i]);
//     }
//     return 0;
// }


#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);  // n is the length of array
	
	int a[n];
	int i;
	for (i=0;i<n;i++)
	{scanf("%d ", &a[i]);   // extra space after %d was the mistake 
	}
	for (i=n-1;i>=0;i--){
		printf("%d/n", a[i]);
	}
	return 0;
}