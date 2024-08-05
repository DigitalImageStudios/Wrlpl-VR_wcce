// Copyright (c) Meta Platforms, Inc. and affiliates.

#pragma once

#include "khronos/openxr/openxr.h"
#include "Misc/Optional.h"

namespace OculusXROpenXRHMD
{
	extern TOptional<PFN_xrPerfSettingsSetPerformanceLevelEXT> xrPerfSettingsSetPerformanceLevelEXT;

	void InitOpenXRFunctions(XrInstance InInstance);
} // namespace OculusXROpenXRHMD
