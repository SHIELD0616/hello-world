class Clock {
public:
		void tick()
		{
			
		}
		
		void show()
		{
			printf("%02d:%02d:%02d\n",hour,minute,second);
			return;
		}
		
		void adjust(int h,int m,int s)
		{
			hour=h,minute=m,second=s;
			return;
		}
private:
int hour,minute,second;
};

int main() {
  Clock ck;
  ck.tick;
  ck.show();
  ck.adjust(16,45,00);
  ck.show();
  return 0;
}
