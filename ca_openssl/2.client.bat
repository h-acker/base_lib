
echo 1.�û�������Կ��[pem�ļ�]
openssl genrsa -out priKey.pem 2048

echo 1.1.����p10����
openssl req -new -key priKey.pem -out pkcs10.pem -subj /CN=linggo/O=lingg_O/OU=lingg_OU/ST=GuangDong/L=GuangZhou/C=CN  -config openssl.cnf

echo 2.ʹ��CA֤�鼰CA��Կ ������֤�����ǩ�� ����x509֤��[pem�ļ�]
openssl x509 -req -in pkcs10.pem -out x509.pem -CA ca_x509.pem -CAkey ca_priKey.pem -CAcreateserial

echo 3.������Կ�Ժ�x509֤����������Ϊ888888��֤���ļ�p12
openssl pkcs12 -export -clcerts -in x509.pem -inkey priKey.pem -out p12.p12  -passout  pass:888888
@pause
