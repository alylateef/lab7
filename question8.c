#include <stdio.h>

int main() {
    int numbers[] = {1, 2, 3, 4, 5};
    int count = 5;
    int rotate_by,i;
    
    printf("Array before rotation: ");
    for(i = 0; i < count; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");
    
    printf("How many positions to rotate? ");
    scanf("%d", &rotate_by);
    
    rotate_by = rotate_by % count;
    
    int temp[count];
    
    int index = 0;
    for( i = count - rotate_by; i < count; i++) {
        temp[index] = numbers[i];
        index++;
    }
    
    for(i = 0; i < count - rotate_by; i++) {
        temp[index] = numbers[i];
        index++;
    }
    
    for(i = 0; i < count; i++) {
        numbers[i] = temp[i];
    }
    
    printf("Array after rotation: ");
    for(i = 0; i < count; i++) {
        printf("%d ", numbers[i]);
    }
    
    return 0;
}
