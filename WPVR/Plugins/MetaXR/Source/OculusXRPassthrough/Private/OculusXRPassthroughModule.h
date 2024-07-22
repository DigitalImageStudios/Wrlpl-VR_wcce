// Copyright (c) Meta Platforms, Inc. and affiliates.

#pragma once
#include "IOculusXRPassthroughModule.h"

#include "OculusXRPassthroughXR.h"

#define LOCTEXT_NAMESPACE "OculusXRPassthrough"

//-------------------------------------------------------------------------------------------------
// FOculusXRPassthroughModule
//-------------------------------------------------------------------------------------------------

class FOculusXRPassthroughModule : public IOculusXRPassthroughModule
{
public:
	FOculusXRPassthroughModule();

	static inline FOculusXRPassthroughModule& Get()
	{
		return FModuleManager::LoadModuleChecked<FOculusXRPassthroughModule>("OculusXRPassthrough");
	}

	virtual void StartupModule() override;
	virtual void ShutdownModule() override;

	typedef TSharedPtr<XRPassthrough::FPassthroughXR, ESPMode::ThreadSafe> FPassthroughXRPtr;
	FPassthroughXRPtr PassthroughXR;
};

#undef LOCTEXT_NAMESPACE
