
echo 1.CA������Կ��[pem�ļ�]
openssl genrsa -out ca_priKey.pem 2048

echo 2.����p10����
openssl req -new -key ca_priKey.pem -out ca_pkcs10.pem -subj /CN=gushuai.fun/O=gushuai/OU=linggo/ST=GuangDong/L=GuangZhou/C=CN  -config openssl.cnf

echo 3.CA��ǩ��x509[pem�ļ�]
openssl x509 -req -in ca_pkcs10.pem -out ca_x509.pem -signkey ca_priKey.pem

echo 4.������Կ�Ժ�x509֤����������Ϊ888888��֤���ļ�p12
openssl pkcs12 -export -clcerts -in ca_x509.pem -inkey ca_priKey.pem -out ca_p12.p12  -passout  pass:888888

@pause
