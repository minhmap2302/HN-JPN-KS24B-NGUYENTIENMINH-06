#include<stdio.h>
 int main(){
 	int n = 0;
    int choice;
    int arr[100];
    int temp = 0;
    int con = 0;
    int add = 0;
 	while(choice!=11){
 		printf("-------MENU-------\n");
 		printf("Moi Ban Nhap Lua Chon Cua Minh.\n");
 		printf("1.Nhap so phan tu va gia tri cho mang.\n");
 		printf("2.In ra gia tri cac phan tu trong mang theo dang (arr[0] = 1, arr[1] = 5 …).\n");
 		printf("3.Dem so luong cac so hoan hao co trong mang. Biet so hoan hao la so co tong cac uoc bang chinh no.\n");
 		printf("4.Tim gia tri lon thu 2 trong mang, khong duoc sap xep mang.\n");
 		printf("5.Them mot phan tu vao vi tri ngau nhien trong mang, phan tu moi them vao mang va vi tri them vao phai do nguoi dung nhap vao,chi them phan tu do vao mangneu phan tu do chua ton tai trong mang.\n");
 		printf("6.Xoa phan tu tai mot vi tri cu the (nguoi dung nhap vi tri).\n");
 		printf("7.Sap xep mang theo thu tu tang dan (Bubble sort).\n");
 		printf("8.Cho nguoi dung nhap vao mot phan tu, tim kiem xem phan tu do co ton tai trong mang hay khong (Linear search).\n");
 		printf("9.Sap xep lai mang va hien thi ra toan bo phan tu co trong mang sao cho toan bo so le dung truoc, so chan dung sau.\n");
 		printf("10.Kiem tra xem mang co phai mang tang dan hay khong.\n");
 		printf("11.thoat truong trinh.\n");
 		printf("_____MOI BAN NHAP LUA CHON CUA MINH_____: ");
 		scanf("%d",&choice);
		if( choice == 1 ){
 			printf("Moi ban nhap so phan tu: \n");
 			scanf("%d",&n);
 			if( n <= 0 ){
 				printf("so n khong phai so lon hon 0, vui long nhap lai");
 				return 1;
			 }else{
			 	for(int i = 0; i < n; i++ ){
			 		printf("moi ban nhap phan tu: \n");
			 		scanf("%d",&arr[i]);
				 }
			 }
		} else if( choice == 2 ){
			if( n == 0 ){
				printf("Ban chua nhap mang va gia tri cho mang.\n");
			} else {
				printf("Mang %d phan tu la :  \n",n);
				for( int i = 0; i < n; i++){
					printf("a[%d] = %d ",i,arr[i]);
					printf("\n");
				}
			}
		} else if ( choice == 3 ){
			if( n == 0 ){
				printf("Ban chua nhap mang va gia tri cho mang.\n");
			} else {
				for( int i = 0; i < n + add; i++){
					int per = 0;
					for(int j = 1; j < arr[i]; j++){
						if(arr[i] % j == 0){
							per = per + j;
						}
					}
					if(per == arr[i]){
						printf("So hoan hao co trong mang la : %d\n",arr[i]);
						con++;
					}
				}
				if(con == 0){
					printf("Khong co so nao hoan hao trong mang.\n");
				}
			}
		} else if ( choice == 4 ){
			if (n < 2) {
        		printf("Mang khong co du lieu de tim gia tri lon thu 2.\n");
    		} else {
        		int max1 = arr[0], max2 = -1;
        		for (int i = 1; i < n; i++){
            		if (arr[i] > max1) {
                		max2 = max1;
                		max1 = arr[i];
            		} else if (arr[i] > max2 && arr[i] != max1){
                		max2 = arr[i];
            		}
        		}
        		if (max2 == -1) {
            		printf("Khong co gia tri lon thu 2 trong mang.\n");
        		} else {
            		printf("Gia tri lon thu 2 trong mang la: %d\n", max2);
            	}
        	}	
    	} else if (choice == 11) {
            printf("Chuong Trinh Dung Hoat Dong. Tam biet.\n");
        } else {
            printf("Lua chon khong hop le. Vui long nhap lai.\n");
        }
	}
 	return 0;	
 }
