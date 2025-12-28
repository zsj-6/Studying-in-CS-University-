/*#include <stdio.h>

void swap(int *pa,int*pb){
 int t=*pa;
 *pa=*pb;
 *pb=t;
}
int main(){
    int a=1;
    int b=2;
    swap(&a,&b);
    printf("%d %d",a,b);

 return 0;
}*/
/*
#include <stdio.h>
void minmax(int a[],int len,int*max,int*min){

    *min=*max=a[0];
    for(int i=0;i<len;++i){
            if (a[i]>*max){
                    *max=a[i];
            }
            if(a[i]<*min){
                    *min=a[i];
            }
    }
}

int main(){
    int a[]={1,2,3,4,5,6,7,8,9};
    int max,min;

minmax(a,sizeof(a)/sizeof(a[0]),&max,&min);
    printf("%d %d",max,min);
 return 0;
}
*//*
#include <stdio.h>

int main(void)
{
    int score[30][10];
    int (*p)[10] = score;
    int n, m, i, j;

    scanf("%d %d", &n, &m);

    /* 输入 n×m 成绩 */
    /*for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &p[i][j]);
        }
    }

    /* 每门课(每一列)求平均并输出 */
    /*for (j = 0; j < m; j++) {
        double sum = 0.0;
        for (i = 0; i < n; i++) {
            sum += p[i][j];
        }
        printf("%.2f", sum / n);
        if (j != m - 1) printf(" ");
    }
    printf("\n");

    return 0;
}*/
#include <stdio.h>
int main(){
int n;
double sum;
double a[10];
double *p=a;
scanf("%d",&n);
for(int i=0;i<n;++i){
        scanf("%lf",&p[i]);
}
double max,min;
max=min=p[0];
sum=0;
for(int j=0;j<n;++j){
        if(max<p[j])max=p[j];
         if(min>p[j])min=p[j];
sum+=p[j];
}
double avg=sum/n;
printf("%.2f\n",max);
printf("%.2f\n",min);
printf("%.2f\n",avg);
}
