#include<stdio.h>
#include<string.h>
typedef struct{
    int id;
    char fullName[100];
    int age;
    char phone[20];
} Student;
void xoaSinhVien(Student students[],int viTri,int *lenth);
void printStudent(Student students[],int lenth);
int main(){
    int idXoa;
    int length=5;
    Student student[5]={
        {1,"Do Khac Quyen",18,"038383883"},
        {2,"Do Thao Minh",18,"09938338833"},
        {3,"Pham Quoc Khanh",18,"074763636"},
        {4,"Dao Quang Huy",18,"08636355327"},
        {5,"Tran Duy Thai",18,"062622728339"},
    };
    printf("Chua xoa phan tu: \n");
    printStudent(student,length);
    printf("Nhap Id can xoa: ");
    scanf("%d",&idXoa);
    getchar();
    xoaSinhVien(student,idXoa,&length);
    printf("Ðã xóa ph?n t?: \n");
    printStudent(student,length);


    
    return 0 ;
}
void xoaSinhVien(Student students[],int viTri,int *lenth){
    for(int i = viTri-1; i < *lenth  - 1; i++){
        students[i] = students[i + 1];
    }
    --*lenth;

}
void printStudent(Student students[],int lenth){
    for (int i = 0; i < lenth; i++){
        printf("ID: %d\n",students[i].id);
        printf("fullName: %s\n",students[i].fullName);
        printf("Age: %d\n",students[i].age);
        printf("Phone: %s\n",students[i].phone);
    }
    
};
