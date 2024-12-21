#include<stdio.h>
#include<string.h>
struct Thucdon
    {
        int id;
        char name[100];
        float tien;
    };
int main(){
    int a = 5;
    struct Thucdon Menu[100]={
        {1,"susu xao",15},
        {2,"rau cai luoc",20},
        {3,"com chien",30},
        {4,"pho",40},
        {5,"chao",50}};
    while (1)
    {
        int n = 0;
        printf("MENU\n");
        printf("1. in ra thuc don mon an\n");
        printf("2. them mot phan tu vao vi tri chi dinh\n");
        printf("3. sua mot phan tu o vi tri chi dinh\n");
        printf("4. xoa mot phan tu ow vi tri chi dinh\n");
        printf("5. xap sep phan tu\n");
        printf("6. tim kiem phan tu theo name nhap vao\n");
        printf("7. thoat\n");
        while (n < 1 || n > 7)
        {
            printf("nhap vao lau chon: ");
            scanf("%d",&n);
        }
        if (n==1)
        {
            printf("--------MENU-------\n");
            for (int i = 0; i < a; i++)
            {
                printf("%d ",Menu[i].id);
                printf("%s ",Menu[i].name);
                printf("%.3f$\n",Menu[i].tien);
            }
        }else if (n==2)
        {
            int pos;
            char value[100];
            float giatien;
            do
            {
                printf("nhap vao vi tri: ");
                scanf("%d",&pos);
                getchar();
                if (pos < 1 || pos > a )
                {
                    printf("vi tri ko hop le");
                }
            } while (pos < 1 || pos > a);
            printf("hay nhap vao ten mon an: ");
            fgets(value,sizeof(value),stdin);
            for (int i = a; i > pos; i--)
            {
                Menu[i] = Menu[i-1];
            }
            Menu[pos].id=a+1;
            strcpy(Menu[pos].name,value);
            printf("hay nhap gia tien: ");
            scanf("%f",&giatien);
            Menu[pos].tien=giatien;
            a++;
        }else if (n==3)
        {
            printf("--------\n");
        } else if (n==4)
        {
            printf("---------\n");
        }else if (n==5)
        {
            printf("-----------\n");
        }else if (n==6)
        {
            printf("------------\n");
        }else if (n==7)
        {
            break;
        } 
    }
    return 0;
}