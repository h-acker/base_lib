#pragma once
class rsaLib
{
public:
	rsaLib();
	~rsaLib();

	// ������Կ�Լ�֤������
	int genRsaCsr(const char * DN,char * csr, int *csrLen);
	int genRsaKey(char * priKey, char * priPwd, char * pubKey);
	

};

