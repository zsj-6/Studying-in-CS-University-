/*#include <stdio.h>
#include <math.h>

int main(){
    char T;
int x = 1;

switch (x) {
    case 1:
        printf("A");
    case 2:
        printf("B");

    case 3:
        printf("C");
        break;
    case 4:
        printf("D");
}

    return 0;
}*/
/*
#include <stdio.h>
int main(){
int  x=2021;
int ret=0;
while(x>0){
ret=ret*10+x%10;
    x=x/10;
}
printf("%d",ret);
return 0;
}
*/
/*
#include <stdio.h>
double fun(double x,double eps){
double term=1.0;
double sum=1.0;
int k=1;
while(term>eps||term<-eps){
    term=-term*x*x/(2*k*(2*k-1));
    sum+=term;
    k++;
}
}
int main(){

double x,eps;
scanf("%lf %lf",&x,&eps);
printf("%lf\n",fun(x,eps));
return 0;
}
*/
/*#include <stdio.h>

int main(){
int a=10;
int* p=&a;
printf("%d %d\n",p,*p);
int**pp=&p;
printf("%d %d \n%d %d",p,*p,pp,**pp);
return 0;
}
*//*
#include <stdio.h>
//Ö¸ÕëÊı×é
int main (){
char a[]="I";
char b[]="love";
char c[]="you";
char*p[3];
p[0]=a;
p[1]=b;
p[2]=c;
for(int i=0;i<3;++i){
    printf("%s",p[i]);
}
return 0;
}
*/
/*
#include <stdio.h>
int main(){
    int a[3][4]={
    {1,2,3,4},
    {5,6,7,8},
    {9,10,11,12},
    {12,14,15,16},
};
    int *pa[3];
    pa[0]=a[0];
    pa[1]=a[1];
    pa[2]=a[2];
    for(int i=0;i<3;++i){
        for(int j=0;j<4;++j){
            printf("%d",*(pa[i]+j));
        }
        printf("\n");
    }
return 0;
}
*/

#include <stdio.h>

double avg(int*p,int n){
int i,sum=0;
for(i=0;i<n;++i){
    sum+=*(p+i);
}
return (double)sum/n;
}
int main(){
int a[100];
int *p=a;
scanf()
return 0;
}



