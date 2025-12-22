//Ã°ÅÝÅÅÐò£¨½µÐò£©
/*#include <stdio.h>
int main(){
int arr[5]={9,3,2,7,6};
for(int i=0;i<4;++i){
    for(int j=0;j<4-i;++j){
        if(arr[j]<arr[j+1]){
            int t=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=t;
        }
    }
}
for(int i=0;i<5;i++){
    printf("%d",arr[i]);
}
return 0;
}*/

//ÕûÊýµ¹Ðò
/*#include <stdio.h>
int main(){
    int ret=0;
    int x =12345;
    while(x>0){
    ret =ret*10+x%10;
    x=x/10;
    }
    printf("%d",ret);
return 0;
}*/

//×Ö·û´®µ¹Ðò
/*#include <stdio.h>
#include <string.h>
int main(){
char a[100];
int i;
scanf("%s",a);
for(i=strlen(a);i>=0;i--){
    printf("%c",a[i]);
}
return 0;
}
*/

//½»»»·¨
/*#include <stdio.h>
#include <string.h>
int main(){
char a[100];
char t;
scanf("%s",a);
int len=strlen(a);
for( int  i=0;i<len/2;i++){
        t=a[i];
a[i]=a[len-1-i];
a[len-1-i]=t;
}
 printf("%s",a);
return 0;
}
*/
/*#include <stdio.h>
#include <math.h>
int main(){
double x;
char T;
scanf("%lf %c",&x,&T);
switch(T){
case 's':
case'S':
    printf("%lf",sin(x));
    break;
case 'c':
case'C':
    printf("%lf",cos(x));
    break;
case 't':
case'T':
    printf("%lf",tan(x));
    break;
default :
    printf("Invalid error");
}
return 0;
}
/*
