#include "pch.h"

#include "WPFWrapCPPLIB.h"

using namespace WPFWrapCPPLIB;
SonarWrap::SonarWrap()
{
	pSonHlp = new SonarHelper();

}
SonarWrap::~SonarWrap()
{
}

String^ SonarWrap::GetABBInfowrp()
{
	string ak = pSonHlp->GetABBInfo1();

	return gcnew String(ak.c_str());
}

