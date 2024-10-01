#include <stdio.h>
#include <stdlib.h> 
#include <time.h>


int main() {
    int arr[1000];

    for (int i = 0; i < 1000; i++) {
        arr[i] = i+1;
    }







    int s = 420;
    int length = 1000;
    int f = 0;
    int l = length -1;
    int j = (l - f) /2;

    while(1) {
        int j = (l - f) / 2 + f;
        printf("f=%d, l=%d, j=%d, v=%d\n", f, l, j, arr[j]);
        if(arr[j]==s) {
            printf("%d", arr[j]);
            break;
        }
        if(arr[j]<s) {
            f = j;
        }
        if(arr[j]>s) {
            l = j;
        }
    }





    return 0;
}
