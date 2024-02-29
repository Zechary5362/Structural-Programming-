/* Zechary ENE212-0094/2021 Arrays_Add_Delete_Sort_Elements*/
#include <stdio.h>

int main() {
    // The original array with 5 elements 
    int arr[5] = {2, 3, 5, 1, 6 };
    int size = 5;
    int i, j, k;

    // To print the contents of the original array
    printf("The original array contents are:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
        }
    printf("\n");

    // To Add a 6th element, 4, in the array
    arr[5] = 4;
    size++;

    // Print the array after adding the 6th element
    printf("\nThe array after adding the 6th element is:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // To arrange the elements of the array in ascending order
    for (i = 0; i < size - 1; i++) {
        for (j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                k = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = k;
                                     }
                                           }
                                    }

    // To print the contents of the array after sorting
    printf("\nThe array after sorting in ascending order is:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Delete the element 4 from the array
    for (i = 0; i < size; i++) {
        if (arr[i] == 4) {
            for (j = i; j < size - 1; j++) {
                arr[j] = arr[j + 1];
                                           }
           size--;
            break;
                         }
                               }

    // To print the contents of the array after deleting the element 4
    printf("\nThe array after deleting the element 4 is:\n");
    for (i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
