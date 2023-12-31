#include <stdio.h>
int main() {
    int arr[7] = {3, 2, 5, 7, 9, 8, 1}, i, j = 0;
    int *leftV_ptr = &arr[0], *rightV_ptr = &arr[6];

    for(i=0; i < 3; i++) {
        printf("%d %d\n", i, j);
        *(leftV_ptr + i) = *(leftV_ptr + i) + *(rightV_ptr + j);
        *(rightV_ptr + j) = *(leftV_ptr + i) - *(rightV_ptr + j);
        *(leftV_ptr + i) = *(leftV_ptr + i) - *(rightV_ptr + j);

        j--;

    }

    for(i=0; i<7; i++) {
        //printf("%d ", arr[i]);
    }

    return 0;
}