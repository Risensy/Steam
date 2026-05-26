

using UnrealBuildTool;
using System.Collections.Generic;

public class Steam_5_7Target : TargetRules
{
	public Steam_5_7Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V6;

		ExtraModuleNames.AddRange( new string[] { "Steam_5_7" } );
	}
}
