#ifndef Office
#define Office

#include <string>
#include "QueueInfo.h"
#include "OfficeInfo.h"
#include "Doctor.h"

class Office {
public:

	string name;	//��������
	//string description;	//������Ϣ
	QueueInfo Queue_Info;	//���Ҷ�����Ϣ
	DoctorInfo DoctorInfo;	//ҽ����Ϣ
	Office(string);			//��������
};

#endif
