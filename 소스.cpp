#include<iostream>
using namespace std;

class SoSimple
{
	static int simObjCnt;
public:
	SoSimple()	//�����ε� ���ǰ� Ư���� ������ ��� ȣ�⿡ �����Ѵ�.
	{
		simObjCnt++;
		cout << simObjCnt << "��° SoSimple ��ü" << endl;
	}
};
int SoSimple::simObjCnt = 0;	//static ������ �ܺο��� �ʱ�ȭ�ؾ� �Ѵ�.

class SoComplex
{
	static int cmxObjCnt;
public:
	SoComplex()
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "��° SoComplex ��ü" << endl;
	}
	SoComplex(SoComplex& copy)
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "���� SoComplex ��ü" << endl;
	}
};
int SoComplex::cmxObjCnt = 0;

int main()
{
	SoSimple sim1;
	SoSimple sim2;
	SoSimple();

	SoComplex cmx1;
	SoComplex cmx2 = cmx1;
	SoComplex();
	return 0;
}