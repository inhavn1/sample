// SonarQubeCPPLib.cpp : Defines the exported functions for the DLL.
//

#include "pch.h"
#include "framework.h"
#include "SonarQubeCPPLib.h"


// This is an example of an exported variable
SONARQUBECPPLIB_API int nSonarQubeCPPLib=0;

// This is an example of an exported function.
SONARQUBECPPLIB_API int fnSonarQubeCPPLib(void)
{
    return 0;
}

// This is the constructor of a class that has been exported.
CSonarQubeCPPLib::CSonarQubeCPPLib()
{
    return;
}
string CSonarQubeCPPLib::Getinfo()
{
    
    return "Welcome to ABB";
}