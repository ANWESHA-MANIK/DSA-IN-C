#include <stdio.h>
int main() {
    int a[50], size, num, pos;

    printf("Enter size of array: ");
    scanf("%d", &size);

    if (size > 50) {
        printf("Overflow condition!\n");
    } else {
        // Input array
        printf("Enter %d elements: ", size);
        for (int i = 0; i < size; i++) {
            scanf("%d", &a[i]);
        }

        // Element to insert
        printf("Enter data you want to insert: ");
        scanf("%d", &num);

        // Position to insert
        printf("Enter position at which number to be inserted : ");
        scanf("%d", &pos);

        // Validation
        if (pos <= 0 || pos > size + 1) {
            printf("INVALID POSITION\n");
        } else {
            // Shift elements to the right
            for (int i = size - 1; i >= pos - 1; i--) {
                a[i + 1] = a[i];
            }

            // Insert element
            a[pos - 1] = num;
            size++;   // IMPORTANT: update size

            // Print updated array
            printf("Array after insertion: ");
            for (int i = 0; i < size; i++) {
                printf("%d ", a[i]);
            }
            printf("\n");
        }
    }

    return 0;
}
