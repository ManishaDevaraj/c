include <stdio.h>

int main() {
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		i=i+i;
	}
	printf("The sum is %d", i);
	return 0;
}
