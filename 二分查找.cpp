//#include <iostream>
//using namespace std;
//const int N=1e5;
//int n,q,a[N],k;
//int main()
//{
//	scanf("%d%d",&n,&q);
//	for(int i=0;i<n;i++){
//	    scanf("%d",&a[i]);
//	}
//	while(q--)
//	{
//	    scanf("%d",&k);
//	    int x=0, y=n-1;
//	    while(x<y)
//	    {
//	        int mid=x+y>>1;
//	        if(a[mid]<k) x=mid+1;
//	        else{
//	            y=mid;
//	        }
//	    }
//	    if(a[x] != k){
//	        printf("-1 -1\n");
//	    }else {
//	        printf("%d ",x);
//	    int x1=0 , y1=n-1;
//	    while(x1<y1){
//	        int mid=(x1+y1+1)>>1;
//	        if(a[mid]<=k)  x1=mid;
//	        else{
//	            y1=mid-1;
//	        }
//	    }
//	    printf("%d\n",x1);
//	  }  
//	}
//	return 0;
// } 
//�ͼ򵥾����� 
// 
//����һ�������� nn�����������η����� 
//
//�����ʽ
//��һ�У�����һ�������� n
//
//�����ʽ
//��һ�У�����һ������������ʾ����Ľ⡣
//
//ע�⣬������� 66 λС����
//
//���ݷ�Χ
//-10000��n��10000  

#include <iostream>
using namespace std;
double n,x,y;
int main()
{
   scanf("%lf",&n);
   x=-1e4,y=1e4;
   while(y-x>1e-7)
   {
       double mid=(x+y)/2;
       if(mid*mid*mid<n)  x=mid;
       else y=mid;
   }
   printf("%.6lf",y);
   return 0;
}
