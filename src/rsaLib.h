#pragma once
class rsaLib
{
public:
	rsaLib();
	~rsaLib();

	// ������Կ�Լ�֤������
	int genRsaCsr(const char * DN, char * pfxPwd,
		unsigned char * csr, int * csrLen, unsigned char * priKeyBase64, int * priLen, unsigned  char * pubKeyBase64, int * pubLen);
	

};

