#include<stdio.h>
#include<math.h>

int main()
{
   float a=0.0,b=0.0,c=0.0,D,val=0.0,r,s,t,u,v,w,x,y,z;

   printf("This program solves quadratic equation aX^2 + bX + C = 0 \n");
   printf("Give values of a,b,c : ");
   scanf("%f %f %f",&a,&b,&c);


   if(a==0 && b==0 && c==0)
   {

   printf("Infinite solutions.");
   }


   if(a==0 && b==0 && c!=0)
   {
    printf("Inconsistent equation.");
   }



   if(a==0 && b!=0 && c!=0)
   {
      val=-(c/b);
      printf("Linear equation with single solution x=%f",val);
    }


   if(a!=0 && b!=0 && c!=0)
   {
      D=sqrt((b*b)-(4*a*c));
      w=((b*b)-(4*a*c));
      x=abs(w);
      y=sqrt(x);
      z=y/(2*a);


      if(D>0)
      {
        r=((-b)+D)/(2*a);
        s=((-b)-D)/(2*a);

        printf("Real and distinct roots : \n");
        printf("x1 = %f \n",r);
        printf("x2 = %f",s);
      }

      if(D==0)
      {
         t=((-b)+D)/(2*a);
         printf("Real and repeated roots : \n");
         printf("x1 = %f \n",t);
         printf("x2 = %f",t);
       }

       if(w<0)
       {
            u=(-b)/(2*a);
            printf("Complex roots : \n");
            printf("x1 = %f + %fi \n",u,z);
            printf("x2 = %f - %fi",u,z);
        }
   }
        

}