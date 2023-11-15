//program to calculate simple interest
//simple interest = (principal*rate*time)/100

int main()
{
	float principal;
	float rate;
	float time;
	float simple_interest;
	
	printf("Input the principal---> ");
	scanf("%f", &principal);
	
	printf("Input the rate---> ");
	scanf("%f", &rate);
	
	printf("Input the time---> ");
	scanf("%f", &time);
	
	simple_interest = principal*rate*time/100;
	
	printf("The simple interest ---> %.2f\n",simple_interest);
	
	return 0;
	
}
