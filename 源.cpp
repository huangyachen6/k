// //------------------第一题-----------
//#include <stdio.h>
//
//void bubbleSort(int arr[], int n) {
//    int i, j, temp;
//    for (i = 0; i < n - 1; i++) {
//        for (j = 0; j < n - i - 1; j++) {
//            if (arr[j] > arr[j + 1]) {
//                temp = arr[j];
//                arr[j] = arr[j + 1];
//                arr[j + 1] = temp;
//            }
//        }
//    }
//}
//
//int main() {
//    int arr[] = { 8, 98, 65, 3, 22, 5, 9 };
//    int n = sizeof(arr) / sizeof(arr[0]);
//    bubbleSort(arr, n);
//    printf("排序后的答案: \n");
//    for (int i = 0; i < n; i++) {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}
//------------------------------第二题------------------------
//#include <stdio.h>
//
//#define MAX_SIZE 100
//
//void insertElement(int arr[], int* n, int pos, int value) {
//    if (*n >= MAX_SIZE) {
//        printf("数组已满，无法插入\n");
//        return;
//    }
//    if (pos < 0 || pos > *n) {
//        printf("插入失败\n");
//        return;
//    }
//    for (int i = *n; i > pos; i--) {
//        arr[i] = arr[i - 1];
//    }
//    arr[pos] = value;
//    (*n)++;
//}
//
//void deleteElement(int arr[], int* n, int pos) {
//    if (*n == 0) {
//        printf("数组为空，不能删除\n");
//        return;
//    }
//    if (pos < 0 || pos >= *n) {
//        printf("指定位置无效，无法删除\n");
//        return;
//    }
//    for (int i = pos; i < *n - 1; i++) {
//        arr[i] = arr[i + 1];
//    }
//    (*n)--;
//}
//
//void modifyElement(int arr[], int n, int pos, int value) {
//    if (pos < 0 || pos >= n) {
//        printf("指定位置无效，操作失败\n");
//        return;
//    }
//    arr[pos] = value;
//}
//
//int main() {
//    int arr[MAX_SIZE] = { 1, 2, 3, 4, 5 };
//    int n = 5;
//    insertElement(arr, &n, 2, 8);
//    printf("在数组的第二个位置插入8以后: ");
//    for (int i = 0; i < n; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    deleteElement(arr, &n, 3);
//    printf("删除在数组位置3上的元素: ");
//    for (int i = 0; i < n; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    modifyElement(arr, n, 1, 9);
//    printf("将数组第一个位置上的元素修改为9: ");
//    for (int i = 0; i < n; i++) {
//        printf("%d ", arr[i]);
//    }
//    printf("\n");
//    return 0;
//}
//#include <stdio.h>
//
//int main() {
//    int arr1[] = { 1, 2, 3, 4, 5 };
//    int arr2[] = { 6, 7, 8, 9, 10 };
//    int size1 = sizeof(arr1) / sizeof(arr1[0]);
//    int size2 = sizeof(arr2) / sizeof(arr2[0]);
//
//    // 计算新数组的大小
//    int newSize = size1 + size2;
//
//    // 创建新数组
//    int newArr[newSize];
//
//    // 将arr1复制到newArr
//    for (int i = 0; i < size1; i++) {
//        newArr[i] = arr1[i];
//    }
//
//    // 将arr2复制到newArr
//    for (int i = 0; i < size2; i++) {
//        newArr[size1 + i] = arr2[i];
//    }
//
//    // 输出新数组
//    printf("新数组：");
//    for (int i = 0; i < newSize; i++) {
//        printf("%d ", newArr[i]);
//    }
//
//    return 0;
//}
//-----------------第三题---------------
//#include <stdio.h>
//
//int main() {
//    int arr1[] = { 1, 2, 3, 4, 5 };
//    int arr2[] = { 6, 7, 8, 9, 10 };
//    int size1 = sizeof(arr1) / sizeof(arr1[0]);
//    int size2 = sizeof(arr2) / sizeof(arr2[0]);
//
//   
//    int newSize = size1 + size2;
//
//    
//    int newArr[10];
//
//    
//    for (int i = 0; i < size1; i++) {
//        newArr[i] = arr1[i];
//    }
//
//    
//    for (int i = 0; i < size2; i++) {
//        newArr[size1 + i] = arr2[i];
//    }
//
//    
//    printf("新数组：");
//    for (int i = 0; i < newSize; i++) {
//        printf("%d ", newArr[i]);
//    }
//
//    return 0;
//}
// //--------------------------第四题---------
//#include <stdio.h>
//
//#define MAX_SIZE 100
//
//void findTwoSum(int nums[], int n, int target, int* index1, int* index2) {
//    for (int i = 0; i < n; i++) {
//        for (int j = i + 1; j < n; j++) {
//            if (nums[i] + nums[j] == target) {
//                *index1 = i;
//                *index2 = j;
//                return;
//            }
//        }
//    }
//}
//
//int main() {
//    int nums[MAX_SIZE] = { 6, 3, 11, 15 };
//    int n = 4;
//    int target = 9;
//    int index1, index2;
//    findTwoSum(nums, n, target, &index1, &index2);
//    printf("和为 %d的 元素位置是: %d and %d\n", target, index1, index2);
//    return 0;
//}
