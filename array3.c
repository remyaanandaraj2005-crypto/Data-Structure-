#include <stdio.h>
int main() {
int arr[100], n, i, pos, element, choice;

printf("Enter Number of Elements in array:");
scanf("%d", &n);

printf("Enter %d elements:\n", n);
for (i = 0; i < n; i++){
scanf("%d", &arr[i]);
}
while(1) {
printf("\n\nArray Operations Menu:\n");
printf("1. Display Array\n");
printf("2. Insert Element\n");
printf("3. Delete Element\n");
printf("4. Exit\n");
printf("Enter Your Choice:");
scanf("%d", &choice);


if (choice == 1) {
printf("Array Elements are:\n");
for(i = 0; i < n; i++) {
printf("%d",arr[i]);
}
printf("\n");
}
else if (choice==2){
printf("Enter the position to insert(1 to %d):",n+1);
scanf("%d",&pos);
if (pos<1 || pos >n+1){
printf("Invalid Position!\n");
}
else {
printf("Enter the element to insert:");
scanf("%d",&element);
for(i=n; i>=pos; i--){
arr[i]=arr[i-1];
}
arr[pos-1]=element;
n++;
printf("Element Inserted\n");
}
}
else if (choice==3){
printf("enter Position to delete (1 to %d):",n);
scanf("%d",&pos);
if (pos<1||pos>n){
printf("Invalid postion\n");
}
else{
for(i=pos-1; i<n-1; i++){
arr[i]=arr[i+1];
}
n--;
printf("Element Deleted\n");
}
}
else if (choice==4){
printf("Exiting Program\n");
break;
}
else{
printf("Invalid choice!please try again\n");

}

}
return 0;

}