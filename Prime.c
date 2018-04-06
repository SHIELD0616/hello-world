/*满足下列条件的自然数称为超级素数:该数本身,所有数字之和,所有数字之积以及所有数字的平方和都是素数.例如113就是一个超级素数.求[100,9999]之内:(1)超级素数的个数.(2)所有超级素数之和.(3)最大的超级素数.*/
#include<stdio.h> 

int sum_bit(int num) {
	int a=num/100+num%10+(num/10)%10;
  	return a;
}

int multi_bit(int num) {
  	int a=(num/100)*(num%10)*((num/10)%10);
  	return a;
}

int square_sum_bit(int num) {
  	int a=(num/100)*(num/100)+(num%10)*(num%10)+((num/10)%10)*((num/10)%10);
  	return a;
}

bool isprime(int num) {
  	for(int i=2;i<num;i++)
  	{
    	if(num%i==0&&num/i!=1)
    	{
     		return false;
    	}
   	}
  	return true;
}

int main() {
  	for(int i=100;i<10000;i++)
  	{
  		if(isprime(i)&&isprime(sum_bit(i))&&isprime(multi_bit(i))&&isprime(square_sum_bit(i)))
  		{
    		printf("%d\n",i);
		}
  	}
    
}
