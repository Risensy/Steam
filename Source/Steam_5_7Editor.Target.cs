

using UnrealBuildTool;
using System.Collections.Generic;

public class Steam_5_7EditorTarget : TargetRules
{
	public Steam_5_7EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V6;

		ExtraModuleNames.AddRange( new string[] { "Steam_5_7" } );
	}
}
