#include <stdio.h>
void jack_bauer(void) {
	   int hr, min;

	      	for (hr = 0; hr <= 23; hr++)
			   	{
					   		for (min = 0; min <= 59; min++)
								   		{
											   			putchar((hr / 10) + '0');
														   			putchar((hr % 10) + '0');
																	   			putchar(':');
																				   			putchar((min / 10) + '0');
																							   			putchar((min % 10) + '0');
																										   			putchar('\n');
																													   		}
							   	}
}
int main() {
	     jack_bauer();
	         return (0);
}

