//*********************************************************
//
// Copyright (c) Microsoft. All rights reserved.
// This code is licensed under the Microsoft Public License.
// THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
// IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
// PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.
//
//*********************************************************

#include "pch.h"
#include "MainPage.xaml.h"
#include "SampleConfiguration.h"

using namespace SDKTemplate;

Platform::Array<Scenario>^ MainPage::scenariosInner = ref new Platform::Array<Scenario>
{
	{ "Track position", "SDKTemplate.GeolocationCPP.Scenario1" },
	{ "Get position", "SDKTemplate.GeolocationCPP.Scenario2" },
	{ "Background position", "SDKTemplate.GeolocationCPP.Scenario3" },
	{ "Foreground geofencing", "SDKTemplate.GeolocationCPP.Scenario4" },
	{ "Background geofencing", "SDKTemplate.GeolocationCPP.Scenario5" },
};
