#include "jie_cheng.h"
int jie_cheng(int n)
{
	int relust;
	    if (n == 1 || n == 0)
	        relust = 1;
	    else
	        relust = jie_cheng(n - 1) * n;
	    return relust;
}

