#include <stdio.h>

int main() {
    char name[30];          //กำหนดชื่อขนาด30
    int age;                //กำหนดอายุ
    float height;           //กำหนดส่วนสูงfloatใส่ทศนิยมได้

    char drink;             //ชื่อย่อเครื่องดื่ม
    float price;            //ราคาเครื่องดื่ม
    char size[10];          //ขนาดเครื่องดื่ม

    printf("Enter your name, age, and height: ");          //เเสดงข้อความ
    scanf("%s %d %f", name, &age, &height);                //ให้ใส่ชื่อ อายุ ส่วนสูงในบรรทัดเเรก

    printf("Enter drink initial, price, and size: ");      //แสดงข้อความ
    scanf(" %c %f %s", &drink, &price, size);              //ใส่ชื่อเครื่องดื่ม ราคา ขนาดml

    printf("%s is %d years old and is %.1f cm tall.\n", name, age, height);   //เเสดงค่าที่รับมาทั้งหมด         
    printf("Favorite drink %c costs %.2f baht and has size %s.\n", drink, price, size);


    return 0;
}
