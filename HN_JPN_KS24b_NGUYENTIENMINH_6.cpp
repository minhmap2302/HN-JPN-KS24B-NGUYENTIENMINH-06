#include <stdio.h>
int main() {
        int m, m1;
        int n = 0;
        int index;
        int temp;
        int pos;
        int j, key;
        int arr[100];
        do {
            printf("-------MENU-------\n");
            printf("Moi Ban Nhap Lua Chon Cua Minh\n");
            printf("1.Nhap so phan tu va gia tri cho mang\n");
            printf("2.In ra gia tri cac phan tu trong mang theo dang (arr[0] = 1, arr[1] = 5 …).\n");
            printf("3.Dem so luong cac so hoan hao co trong mang. Biet so hoan hao la so co tong cac uoc bang chinh no\n");
            printf("4.Tim gia tri lon thu 2 trong mang, khong duoc sap xep mang");
            printf("5.Them mot phan tu vao vi tri ngau nhien trong mang, phan tu moi them vao mang va vi tri them vao phai do nguoi dung nhap vao,chi them phan tu do vao mangneu phan tu do chua ton tai trong mang\n");
            printf("6.Xoa phan tu tai mot vi tri cu the (nguoi dung nhap vi tri).\n");
            printf("7.Sap xep mang theo thu tu tang dan (Bubble sort).\n");
            printf("8.Cho nguoi dung nhap vao mot phan tu, tim kiem xem phan tu do co ton tai trong mang hay khong (Linear search).\n");
            printf("9.Sap xep lai mang va hien thi ra toan bo phan tu co trong mang sao cho toan bo so le dung truoc, so chan dung sau.\n");
            printf("10.Kiem tra xem mang co phai mang tang dan hay khong.\n");
            printf("11.Thoat!\n");
            printf("_____MOI BAN NHAP LUA CHON CUA MINH_____: ");
            scanf("%d", &m);
        }while(m > 11 || m < 1);
        switch (m) {
                case 1:
                        do {
                            printf("Nhap so phan tu: ");
                            scanf("%d", &n);
                            if(n < 1 || n > 100) {
                                    printf("sai roi nhap lai di \n");
                            }
                        }while (n < 1 || n > 100);
                        for (int i = 0; i < n; i++) {
                            printf("Moi ban nhap gia tri phan tu arr[%d]: ", i);
                            scanf("%d", &arr[i]);
                        }
                        return 0;
                        break;
                case 2:
                        if( n == 0) {
                            printf("Ban chua nhap mang\n");
                        }
                        for (int i = 0; i < n; i++) {
                                printf("arr[%d]\n", arr[i]);
                        }
                        break;

                case 3:
                        if( n == 0) {
                                printf("Chua nhap mang\n");
                        }
                        index = 0;
                       for (int i = 0; i < n; i++) {
                               temp = 0;
                              for(int j = arr[i]; j > 0; j--) {
                                      if(arr[i] % j == 0) {
                                              temp++;
                                      }
                              }
                               if(temp == 2) {
                                       index++;
                               }
                        }


                        printf(" tong so nguen to la %d", index);
                        break;

                case 4:
                        if( n == 0) {
                                printf("Chua nhap mang\n");
                        }
                        index = 0;
                        for (int i = 0; i < n; i++) {
                                if(arr[i] > arr[index]) {
                                        index = i;
                                }
                        }
                        temp = arr[index];
                        arr[index] = arr[0];
                        arr[0]  = temp;
                         for (int i = 1; i < n; i++) {
                                if(arr[i] > arr[index]) {
                                        index = i;
                                }
                        }
                        printf("Gia tri lon thu 2 la %d ", arr[index]);
                        break;
                case 5:
                        if( n == 0) {
                            printf("Chua nhap mang\n");
                        }
                        printf("vi tri muon them: ");
                        scanf("%d", &pos);
                        pos--;
                         for (int i = n - 1; i > 0; i--) {
                                 arr[i + 1] = arr[i];
                                 if(i == pos){
                                         printf("gia tri muon nhap: ");
                                         scanf("%d", &arr[i]);
                                         break;
                                 }
                         }
                        n++;
                         for (int i = 0; i < n; i++) {
                                printf("arr[%d]\n", arr[i]);
                        }
                        break;
                case 6:
                        if( n == 0) {
                                printf("Chua nhap mang\n");
                                
                                
                        }
                        printf("Vi tri can xoa: ");
                        scanf("%d", &pos);
                        pos--;
                        for(int i = pos; i < n; i++) {
                                arr[i] = arr[i+ 1];
                        }
                        n--;
                        for (int i = 0; i < n; i++) {
                                printf("arr[%d]\n", arr[i]);
                        }
                        break;
                case 7:
                        if( n == 0) {
                            printf("Chua nhap mang\n");
                        }
                        for (int i = 1; i < n; i++) {
                           key = arr[i];
                           j = i - 1;
                                while( j >= 0 && arr[j] > key) {
                                    arr[j + 1] = arr[j];
                                    j--;
                                }
                            arr[j + 1] = key;
                        }
                        for (int i = 0; i < n; i++) {
                            printf("%d ", arr[i]);
                        }
                        break;
                case 11:
                	break;
                }
                return 0;
    }
