#include <stdio.h>
#include <math.h>
int main()
{
    printf("nama : MAISYA FITRI ANUGRAH");
    printf("kelas : reguler 1D");
float a,b,c,D;
double x1,x2;
printf("Masukkan nilai a= ");
scanf("%f",&a);
if(a>=0);
{
printf("Masukkan nilai b= ");
scanf("%f",&b);
printf("Masukkan nilai c= ");
scanf("%f",&c);
D=(b*b)-(4*a*c);
if(D<0)
{
        printf("\nAkar Imajiner\n");
}
else if(D>0)
{
    x1=(-b+(sqrt(D))/(2*a));
    x2=(-b-(sqrt(D))/(2*a));

    printf("\nAkar-akar persamaan kuadrat berbeda\n");
    printf("\nNilai x1=%.2f\n",x1);
    printf("\nNilai x2=%.2f\n",x2);

}
 else if(D==0)
 {
    x1=(-b)/(2*a);
    x2=x1;

    printf("\nAkar-akar persamaan kuadrat Sama\n");
    printf("\nNilai x1=%.2f\n",x1);
    printf("\nNilai x2=%.2f\n",x2);

}



}



}














