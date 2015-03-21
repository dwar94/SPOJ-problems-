#include<stdio.h>
/*float round2(float a)
{
	a=a*100;
	if(a>=(float)((int)a)+0.5)
	 a+=1;
	 printf("%f\n",a);
	a=(float)((int)a)/100.0; 
	printf("%f\n",a);
	return a;
}
float round1(float a)
{
	a=a*10;
	if(a>(float)((int)a)+0.5)
	 a+=1;
	 printf("%f\n",a);
	a=(float)((int)a)/10.0;
	printf("%f\n",a);
	return a; 
}*/
int main()
{
  float brate,buy,sell,bfee1,bfee2,sd,total,sfee,stt,p;
  int quant;
   if(scanf("%f%f%f%d",&brate,&buy,&sell,&quant)==4)
   {
    bfee1=(brate*buy*quant)/100.0;
   //bfee1=round2(bfee1);
   bfee2=(brate*sell*quant)/100.0;
   //bfee2=round2(bfee2);
   sfee=(10.36*bfee1)/100.0;
   //sfee=round2(sfee);
   stt=(sell*0.025*quant)/100.0;
   //stt=round1(stt);
   sd=(0.006*(buy+sell)*quant)/100.0;
   //sd=round1(sd);
   total=bfee1+stt+bfee2+(2*sfee)+sd;
   p=((sell-buy)*quant)-total;
   if(p>0)
    printf("Profit\n");
   else
    {
      printf("Loss\n");
      p=-p;
    }
  printf("%0.2f",p);
}
 else
  printf("Invalid input\n");
  return 0;
}
