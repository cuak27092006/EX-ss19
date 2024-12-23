#include<stdio.h>
#include<string.h>
typedef struct {
    int id;
    char fullName[100];
    int age;
    char phone[25];
}Student;
void printStudent(Student students[]);
void sortStudentByName(Student students[]);
int main(){
    Student student[5]={
        {1,"Do Thao Minh",18,"0399576255"},
        {2,"Dao Quang Huy",18,"02992292992"},
        {3,"Do Gia Hung",18,"0299949494"},
        {4,"Ngo Quang Anh",19,"0983373663535"},
        {5,"Nguyen Xuan Bach",100,"02983874747"},
    };
    printf("In sinh vien truoc khi sap xep: \n");
    printStudent(student);
    
    sortStudentByName(student);
    printf("Sau khi sap xep");
    printStudent(student);
    return 0;
}
void printStudent(Student students[]){
    for (int i = 0; i < 5; i++){
        printf("ID: %d\n",students[i].id);
        printf("fullName: %s\n",students[i].fullName);
        printf("Age: %d\n",students[i].age);
        printf("Phone: %s\n",students[i].phone);
    }
    
};
void sortStudentByName(Student students[]){
    for (int i = 0; i < 4; i++){
        for (int j = i+1; j < 5; j++){
            if (strcmp(students[i].fullName,students[j].fullName)>0){
                Student temp = students[i];
                students[i]=students[j];
                students[j]=temp;
            }
            
        }
        
    }
    
}
