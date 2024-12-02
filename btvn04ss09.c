#include <stdio.h>

int main() {
    int arr[100];
    int n = 0;
    int menu;
    int i;
    int value, index;

    while (1) {
        printf("\nMENU\n");
        printf("1. Nhap vao mang\n");
        printf("2. Hien thi mang\n");
        printf("3. Them phan tu\n");
        printf("4. Sua phan tu\n");
        printf("5. Xoa phan tu\n");
        printf("6. Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d",&menu);

        switch(menu) {
            case 1:
                printf("Nhap so phan tu trong mang: ");
                scanf("%d", &n);
                for(i = 0; i < n; i++) {
                    printf("Phan tu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;
            case 2:
                printf("mang ban da nhap la: ");
                for( i = 0; i < n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
            case 3:
                
                printf("Nhap gia tri muon them: ");
                scanf("%d", &value);
                printf("Nhap vi tri muon them (0 - %d): ", n);
                scanf("%d", &index);
                if(index < 0 || index > n) {
                    printf("Vi tri khong hop le!\n");
                    break;
                }
                for(i = n; i > index; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[index] = value;
                n++;
                break;
            case 4:
                printf("Nhap vi tri muon sua (0 - %d): ", n - 1);
                scanf("%d", &index);
                if(index < 0 || index >= n) {
                    printf("Vi tri khong hop le!\n");
                    break;
                }
                printf("Nhap gia tri moi: ");
                scanf("%d", &value);
                arr[index] = value;
                break;
            case 5:
                printf("Nhap vi tri muon xoa (0 - %d): ", n - 1);
                scanf("%d", &index);
                if(index < 0 || index >= n) {
                    printf("Vi tri khong hop le!\n");
                    break;
                }
                for(i = index; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }
                n--;
                break;
            case 6:
                printf("Thoat chuong trinh.\n");
                return 0;
            default:
                printf("Lua chon khong hop le. Vui long chon lai!\n");
        }
    }

    return 0;
}

