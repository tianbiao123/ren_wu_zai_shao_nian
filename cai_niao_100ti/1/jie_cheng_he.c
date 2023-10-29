#include  "jie_cheng_he.h"
int jie_cheng_he(int n)
{
	int sum;
	    if (n == 1)
	        sum = 1;
	    else if (n == 0)
	        sum = 0;
	    else
	        sum = jie_cheng_he(n-1)+jie_cheng(n);
	    return sum;
}
