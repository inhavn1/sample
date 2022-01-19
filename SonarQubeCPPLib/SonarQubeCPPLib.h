// The following ifdef block is the standard way of creating macros which make exporting
// from a DLL simpler. All files within this DLL are compiled with the SONARQUBECPPLIB_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see
// SONARQUBECPPLIB_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef SONARQUBECPPLIB_EXPORTS
#define SONARQUBECPPLIB_API __declspec(dllexport)
#else
#define SONARQUBECPPLIB_API __declspec(dllimport)
#endif
#include <string>
using namespace std;


// This class is exported from the dll
class SONARQUBECPPLIB_API CSonarQubeCPPLib {
public:
	CSonarQubeCPPLib(void);
	// TODO: add your methods here.

	string  Getinfo();
};

extern SONARQUBECPPLIB_API int nSonarQubeCPPLib;

SONARQUBECPPLIB_API int fnSonarQubeCPPLib(void);
