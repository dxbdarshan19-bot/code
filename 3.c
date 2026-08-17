#include<stdio.h>
#include<string.h>
 char Findlastrepeatedchar(char arr[], int n){
 for (int i =n-1;i>=0;i--){
 for (int j = 0;j<i;j++){
 if (arr[i]==arr[j]){
 return arr[i];
}
}
}
return '\0';
}
int main(){
char arr[] = {'a','b','c','b','c','b','e'};
int n = sizeof(arr) / sizeof(arr[0]);
char result = Findlastrepeatedchar(arr, n);    
if (result != '\0') {
printf("Last repeated character: %c\n", result);
} else {
printf("No repeated character found\n");
}
return 0;
}
