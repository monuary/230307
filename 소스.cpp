#include<iostream>
using namespace std;

class SoSimple
{
	static int simObjCnt;
public:
	SoSimple()	//오버로딩 정의가 특별히 없으면 모든 호출에 응답한다.
	{
		simObjCnt++;
		cout << simObjCnt << "번째 SoSimple 객체" << endl;
	}
};
int SoSimple::simObjCnt = 0;	//static 변수는 외부에서 초기화해야 한다.

class SoComplex
{
	static int cmxObjCnt;
public:
	SoComplex()
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
	}
	SoComplex(SoComplex& copy)
	{
		cmxObjCnt++;
		cout << cmxObjCnt << "번쨰 SoComplex 객체" << endl;
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