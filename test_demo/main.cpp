#ifdef _DEBUG
#include "vld.h"
#endif

#include "main.h"
#include <Windows.h>

int main()
{
	long* pLong1 = new long;
	char* pChar1 = new char[20];
	char* pChar2 = (char*)malloc(10);

//	delete pLong1;
//	delete[] pChar1;
//	free(pChar2);

	system("pause");
	return 0;
}
