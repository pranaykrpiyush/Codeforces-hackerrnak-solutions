#include <stdio.h>

//using namespace std;
int main(){
    int array[100],c,first,last,middle,n, search;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    printf("Enter %d integers\n", n);
    for (int i=0;i<n;i++){
        scanf("%d", &array[i]);
    }
    printf("Enter value to find\n");
    scanf("%d", &search);
    first=0;
    last=n-1;

    middle=(first+last)/2;
    while(first<=last){
        if (array[middle]<search){
         first=middle+1;
        }
        else if (array[middle]>search){
            last=middle-1;
        }
        else if (array[middle]==search){
             printf("%d found at location %d.\n", search, middle+1);
            break;
        }
        middle=(first+last)/2;
    }
    if (first>last){
        printf("Not Found! %d isn't present in the list.", search );
    }
}