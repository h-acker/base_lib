#include "zf_file_output.h"
#include "zf_log.h"

#ifdef _DEBUG
#else
#define SDVERBOSE 
#endif
//#define SDVERBOSE

#define LOG_FILE    "print.log"

int main(int argc, char** argv)
{
#ifdef SDVERBOSE
	ZF_FILE_OUTPUT_OPEN(LOG_FILE);
	ZF_LOGD("==============ִ����������������ļ���������ڿ���̨���==============");
	ZF_LOGD("==============DEBUGģʽ��������־�ļ����ڿ���̨���==============", LOG_FILE);
#else
	ZF_LOGD("========Releaseģʽ��������־�ļ�%s���ڿ���̨���==============", LOG_FILE);
#endif


	ZF_LOGD("==============������־�ļ�==============");
	ZF_LOGD("==============%s==============", LOG_FILE);

    return 0;
}
