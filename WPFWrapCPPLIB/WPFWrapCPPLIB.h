#pragma once
#include <string>
#include "SonarHelper.h"

using namespace System;

namespace WPFWrapCPPLIB {
	public ref class SonarWrap
	{
		// TODO: Add your methods for this class here.
	public:
		SonarHelper* pSonHlp;
		SonarWrap();
		~SonarWrap();
		String^ GetABBInfowrp();
	};
}
