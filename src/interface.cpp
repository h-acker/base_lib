#include "interface.h"
#include "rsaLib.h"
#include <stdio.h>
rsaLib rsa;
int add(int a, int b)
{
	char chDN[255] = "CN=����_С·��,O=С·��_O,OU=С·��_OU,ST=С·��_ST,L=С·��_L,C=CN";
	char c_csr[4096] = { 0 };
	int csr_len = 0;
	int rv = rsa.genRsaCsr(chDN, c_csr,&csr_len);
	printf("csr\t%s\n", c_csr);
    return a + b;
}
