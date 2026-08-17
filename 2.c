#include<stdio.h>
int main() {
int arr[] = {1,2,2,2,2,3,4,5};
int i, j;
int n = sizeof(arr) / sizeof(arr[0]);
int found = 0;

for (i = 0; i < n; i++) {
for (j = i + 1; j < n; j++) {
if (arr[i] == arr[j]) {
printf("The first repeated element is %d\n", arr[i]);
found = 1;
break;
}
}
if (found) {
break;
}
}
if (!found) {
printf("No repeated element\n");
}
return 0;
}

