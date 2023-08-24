#include<unistd.h>
void hhh(void)
{
int i;
i = 54;
write(1, &i, 2);
	}
int main()
	{
		hhh();
		return (0);
		}
