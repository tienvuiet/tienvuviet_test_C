#include<stdio.h>
#include<math.h>
int main() {
    int a[100]; 
    int n = 0;  
    int luachon;
    while (1) {
		printf("                 MENU\n");
		printf("1.nhap so phan tu can nhap va gia tri cac phan tu\n");
		printf("2.in gia tri cua cac phan tu dang quan ly\n");
		printf("3.in gia tri lon nhat cua mang\n");
		printf("4.in ra cac phan tu la so nguyen to trong mang\n");
		printf("5.them mot phan tu vao trong mang\n");
		printf("6.xoa mot phan tu vao trong mang\n");
		printf("7.su dung selection short de xap xep mang theo thu tu tang dan\n");
		printf("8.su dung linear search de tim kiem phan tu va in ra vi tri index cua phan tu do\n");
		printf("9.thoat\n");
		printf("      moi sep chon:");
        scanf("%d", &luachon);
        switch (luachon) {
            case 1: {
                printf("So phan tu muon nhap vao: ");
                scanf("%d", &n);
                if (n < 0 || n > 100) {
                    printf("So phan tu khong hop le!\n");
                    n = 0; 
                } else {
                    for (int i = 0; i < n; i++) {
                        printf("a[%d] = ", i);
                        scanf("%d", &a[i]);
                    }
                }
                break;
            }

            case 2: {
                if (n == 0) {
                    printf("Mang chua duoc nhap! nhap lai\n");
                } else {
                    printf("Mang hien tai la: ");
                    for (int i = 0; i < n; i++) {
                        printf("%d ", a[i]);
                    }
                    printf("\n");
                }
                break;
            }

            case 3: {
                if (n == 0) {
                    printf("Mang chua duoc nhap! nhap lai\n");
                }else{
					int max=a[0];
					for(int i=0;i<n;i++){
						if(a[i]>max){
							max=a[i];
						}
					}
					printf("gia tri lon nhat trong mang la:%d", max);
				}
                break;
            }

            case 4: {
                if (n == 0) {
                    printf("Mang chua duoc nhap! nhap lai\n");
                } else {
                  	printf("cac so nguyen to trong mang la: ");
					for(int i=0;i<n;i++){
						int dem =1;
						if(a[i]<2){
							dem=0;
						}else{
							for(int j=2;j<sqrt(a[i]);j++){
								if(a[i]%j==0){
									dem=0;
									break;
								}
							}
						}
						if(dem==1){
							printf("%d ",a[i]);
						}
					
					}
                }
                break;
            }
			case 5:{
			if(n==0){
				printf("mang chua duoc nhap! nhap lai\n");
			}else{
			int giatri, vitri;
        	printf("nhap vao gia tri muon tren: ");
        	scanf("%d", &giatri);
        	printf("nhap vao vi tri muon tren: ");
        	scanf("%d", &vitri);
        	if (vitri < 1 || vitri > n + 1) {
            printf("Vi tri khong hop le!\n");
            return 1;
            }
         	for(int i=n;i>=vitri;i--){
     		a[i]=a[i-1];
         	}
     	    a[vitri-1]=giatri;
    	    n++;
            printf("mang sau khi chen la: ");
            for(int i=0; i<n;i++){
         	printf("%d ",a[i]);
         	}
         }
				break;
			}
			case 6: {
				if(n==0){
					printf("mang chua duoc nhap ! nhap lai\n");
				}else{
			        int vitri;
                    printf("Nhap vao vi tri muon xoa (1 -> %d): ", n);
                    scanf("%d", &vitri);
                    if (vitri < 1 || vitri > n) {
                        printf("Vi tri khong hop le!\n");
                    } else {
                        for (int i = vitri - 1; i < n - 1; i++) {
                            a[i] = a[i + 1];
                        }
                        n--;
                        printf("Xoa phan tu thanh cong!\n");
                    }
                    printf("mang sau khi xoa la:");
                    for(int i=0;i<n;i++){
                    	printf("%d ",a[i]);
					}
				}
				break;
			}
			case 7:{
				if(n==0){
					printf("mang chua nhap gia tri ! nhap lai\n");
				}else{
				for(int i=0;i<n-1;i++){
					int min=i;
					for(int j=i+1;j<n;j++){
						if(a[j]<a[min]){
							min=j;
						}
					}
	     		int temp=a[min];
				a[min]=a[i];
				a[i]=temp;
				}
				printf("mang sau khi duoc xap xep la: ");
				for(int i=0;i<n;i++){
					printf("%d ",a[i]);
				}
			}
				break;
			}
			case 8:{
				if(n==0){
					printf("mang chua nhap gia tri ! nhap lai\n");
				}else{
				int giatri;
				printf("gia tri muon tim kiem la:");
				scanf("%d",&giatri);
				int dem=-1;
				for(int i=0;i<n;i++){
					if(a[i]==giatri){
                    dem=i;
					break;
					}
					}
					if(dem!=-1){
						printf("phan tu can tim o vi tri %d\n: ", dem+1);
					}else{
						printf("phan tu khong ton tai trong mang! \n");
					}
				}
				break;
			}
				
            case 9:{
                printf("da thoat chuong trinh\n");
                return 0;
            }

            default:
                printf("Lua chon khong hop le! Vui long nhap lai.\n");
                break;
            }
        }
			return 0;
    }
