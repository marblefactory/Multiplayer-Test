// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class Multiplayer_Test_PojEditorTarget : TargetRules
{
	public Multiplayer_Test_PojEditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		ExtraModuleNames.Add("Multiplayer_Test_Poj");
	}
}
