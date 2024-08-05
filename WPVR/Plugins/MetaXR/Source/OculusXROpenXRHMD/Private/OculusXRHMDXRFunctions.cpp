// Copyright (c) Meta Platforms, Inc. and affiliates.

#include "OculusXRHMDXRFunctions.h"
#include "OpenXRCore.h"
#include "OculusXROpenXRHMDPrivate.h"

namespace OculusXROpenXRHMD
{
	TOptional<PFN_xrPerfSettingsSetPerformanceLevelEXT> xrPerfSettingsSetPerformanceLevelEXT = nullptr;

	void InitOpenXRFunctions(XrInstance InInstance)
	{
		OculusXR::XRGetInstanceProcAddr(InInstance, "xrPerfSettingsSetPerformanceLevelEXT", &xrPerfSettingsSetPerformanceLevelEXT);
	}

} // namespace OculusXROpenXRHMD
