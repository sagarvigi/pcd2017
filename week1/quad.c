#include <stdio.h>
#include<math.h>
typedef struct{
	float r1,r2;
}roots;
typedef struct{
	float real,imag;
}complex;
float findroots(float a,float b,float c);
 int main(){
	roots qd;
	float a,b,c;
	printf("enter the coefficients:");
	scanf("%f%f%f",&a,&b,&c);
	findroots(a,b,c);
	printf("the roots of the quadratic equation are: %f and %f",qd.r1,qd.r2);
	return 0;
	}
    float findroots(float a,float b,float c){

		roots qd;
		complex num;
		float d=b*b-4*a*c;
    	if(d==0){
    	qd.r1=(-b/2*a);
    	qd.r2=(-b/2*a);
    	}
    	
    	else if(d>0){
			
qd.r1=(-b+sqrt(d))/(2*a);
	
		
qd.r2=(-b-sqrt(d))/(2*a);
   	}
    	
    	else if(d<0){
    		float i=sqrt(-1);
    		num.real=(-b/2*a);
    		
num.imag=((sqrt(-d))/2*a);
    		
    		
qd.r1=(num.real)+i*(num.imag);
    		
qd.r2=(num.real)-i*(num.imag);
    		}
    	   		return qd.r1;
    		return qd.r2;
}
