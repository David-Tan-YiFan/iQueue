#ifndef QueueInfo
#define QueueInfo

#include <queue>
#include <string>
#include "PatientInfo.h"
#include "QueueInfo.cpp"

struct Queue
{
	queue<PatientInfo*> First_diagnosis; //�������
	queue<PatientInfo*> Twice_diagnosis;	//�������
	queue<PatientInfo*> Triage;	//�������

	/*��������������ҽ����� ��Doctor.h�ж���*/
	//queue<PatientInfo*> Waiting; //�ȴ�����
	//queue<PatientInfo*> Visiting;	//�������
	//queue<PatientInfo*> Done;	//�������
};

class QueueInfo {
private:
	Queue AllQueue;	//���ж�����Ϣ
public:
	QueueInfo();
	QueueInfo(Queue q);	//���ƶ�����Ϣ
	bool Add_QueueInfo(int, PatientInfo*, ���ݿ�);	//��ĳ������Ӳ���
	bool Set_QueueInfo(int, PatientInfo*, ���ݿ�);	//
	bool Delete_QueueInfo(int, PatientInfo*, ���ݿ�);	//ɾ��ĳ����ĳ����
	bool Pop_QueueInfo(int, ���ݿ�);	//pop����
	Queue Get_QueueInfo();	//��ö�����Ϣ
};

#endif // !QueueInfo

