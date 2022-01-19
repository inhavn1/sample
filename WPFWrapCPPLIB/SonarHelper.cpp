#include "pch.h"
#include "SonarHelper.h"
#include "SonarQubeCPPLib.h"

using namespace std;

SonarHelper::SonarHelper()
{
	//CSonarQubeCPPLib abp;
	//string infoABB=abp.Getinfo();

}

SonarHelper::~SonarHelper()
{
}
string SonarHelper::GetABBInfo1()
{
	CSonarQubeCPPLib CPPLibinfo;
	return CPPLibinfo.Getinfo();
}