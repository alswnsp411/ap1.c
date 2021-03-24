#include <stdio.h>
#include <stdlib.h>

void main()
{
    int list[5];  //int형 정수 5개를 저장하는 배열
    int *plist[5]={NULL,};  //int형 정수에 대한 5개의 포인터를 저장하는 배열

    plist[0]=(int*)malloc(sizeof(int));  //plist[0]에 malloc을 통해 받은 주소가 저장된다.

    list[0]=1;
    list[1]=100;

    *plist[0]=200;  //plist 첫번째 자리가 가리키는 값에 200을 저장한다.

    printf("------Minju Kim 2020039062------\n");

    printf("value of list[0] = %d\n", list[0]);  //list[0]에 1이 저장되어있다.
    /*list[0]의 주소와 배열의 이름 자체의 값과 list의 주소는 동일하다.*/
    printf("address of list[0] = %p\n", &list[0]);  
    printf("value of list = %p\n", list);  
    printf("address of list (&list) =%p\n", &list);  

    printf("----------------------------------------\n\n");
    printf("value of list[1] = %d\n", list[1]);  //list[1]에 100이 저장되어있다.
    printf("address of list[1] = %p\n", &list[1]);  //int형 배열의 두 번째 자리의 주소이므로 첫 번째 자리의 주소+4이다.
    printf("value of *(list+1) = %d\n", *(list+1));  //list 배열의 두 번째 자리의 주소에 있는 값은 100이다.
    printf("address of list+1 =%p\n", list+1);  //list 배열의 두 번째 자리의 주소이다.

    printf("----------------------------------------\n\n");

    printf("value of *plist[0] =%d\n", *plist[0]);  //plist[0]이 가리키는 값은 200이다.
    /* plist[0]의 주소와 plist의 주소와 plist 배열의 이름 자체의 값은 동일하다.*/
    printf("&plist[0] =%p\n", &plist[0]);  
    printf("&plist =%p\n", &plist);  
    printf("plist =%p\n", plist); 
    printf("plist[0] =%p\n", plist[0]);  //plist[0]에는 malloc을 통해 받은 주소가 저잗되어있으며, 이 주소에 200이 저장되어있다.
    /*plist[0]값만 malloc을 통해 받았고, 나머지 값들은 NULL로 초기화되어있다.*/
    printf("plist[1] =%p\n", plist[1]);  
    printf("plist[2] =%p\n", plist[2]);
    printf("plist[3] =%p\n", plist[3]);
    printf("plist[4] =%p\n", plist[4]);

    free(plist[0]);

}
