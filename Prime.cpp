void in_prime()
{
	is_prime[1]=0;
	for(int i=2;i<100000;i++)
	{
		is_prime[i]=!is_prime[i];
		if(is_prime[i])
			for(int j=i+i;j<100000;j+=i)
				is_prime[j]=1;
	}
}

class Prime {
	public:
		Prime(int num):mNum(num){}
		~Prime(){}

		bool isPrime()
		{
			return is_prime[mNum];
		}

		Prime sumBit()
		{
			int sum=0,tmp_mNum=mNum;
			while(tmp_mNum!=0)
			{
				sum+=tmp_mNum%10;
				tmp_mNum/=10;
			}
			return Prime(sum);
		}
		Prime multiBit()
		{
			int product=1,tmp_mNum=mNum;
			while(tmp_mNum!=0)
			{
				product*=tmp_mNum%10;
				tmp_mNum/=10;
			}
			return Prime(product);
		}
		Prime sqaureSumBit()
		{
			int sum=0,tmp_mNum=mNum;
			while(tmp_mNum!=0)
			{
				sum+=(tmp_mNum%10)*(tmp_mNum%10);
				tmp_mNum/=10;
			}
			return Prime(sum);
    }
  private:
		const int mNum;
};

int main() {
  Prime pm(113);
  Prime sb = pm.sumBit();
  Prime mb = pm.multiBit();
  Prime ssb = pm.sqaureSumBit();
  if(pm.isPrime() && sb.isPrime() && mb.isPrime() && ssb.isPrime())
    printf("Found Super Prime %d\n",i); //to do sth
  return 0;
}
