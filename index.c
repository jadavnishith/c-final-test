//-------- question 1-----------

// #include <stdio.h>
// int main (){
//     int num;
//     printf("Enter a Number ");
//     scanf("%d",&num);
//     switch (num)
// {
// case 1:
// case 2:
// case 3:
// case 5:
// case 7:
// printf("%d prime number\n",num);
//     break;
// case 4:
// case 6:
// case 8:
// case 9:
// printf("%d composite number\n",num);
//     break;
// case 0:
// printf("%d no composite no prime\n",num);
// default:
// printf("%d composite number\n",num);
//     break;
// }
// return 0;    
    
// }

//------------- Question 2------------

// #include <stdio.h>
// int main(){

//     int arr[100],n,i;
//     printf("Enter The Number of Element in Array : ");
//     scanf("%d",&n);
//     printf("Enter %d Element\n",n);
//     for(i=0; i<n; i++){
//         scanf("%d",&arr[i]);
//     }
//     int small = arr[0];
//     for(i=1; i<n; i++){
//         if(arr[i]<small){
//             small=arr[i];
//         }
//     }
//     printf("Small Element in Array : %d\n",small);
//     return 0;
// }

//------------ Question 3------------

// #include <stdio.h>

// int reverseNumber(int num){
//         int digit1;
//         int digit2;
//         int digit3;

//         digit1=num%10;
//         num/=10;
//         digit2=num%10;
//         num/=10;
//         digit3=num;
//         int reverseNumber= digit1*100 + digit2*10 + digit3;
//     }
// int main(){
//     int num;
//     printf("Enter 3-digit Number : ");
//     scanf("%d",&num);
//     if(num>=100&&num<=999){
//        int reversed = reverseNumber(num);
//        printf("The Reverse of %d is : %d\n",num,reversed);
//     }else{
//         printf("Plese Enter a Valid 3-digit Number\n");
//     }
//     return 0;
// }

//---------- Question 4-----------
#include <stdio.h>

void squareArray(int *arr, int size) {
    for (int i = 0; i < size; i++) 
    {
        *(arr + i) = (*(arr + i)) * (*(arr + i));
    }
}

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    squareArray(arr, size);

    printf("Square of each element:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
