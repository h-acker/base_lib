#include "interface.h"
#include <iostream>

using namespace std;

int main(int argc, char** argv)
{
	char chDN[255] = "CN=����_С·��,O=С·��_O,OU=С·��_OU,ST=С·��_ST,L=С·��_L,C=CN";
	char c_csr[4096] = { 0 };
	int csr_len = 0;
	cout << "genRsaCsr() return  " << genRsaCsr(chDN, c_csr, &csr_len) << "\n"<< c_csr << endl;
    return 0;
}
