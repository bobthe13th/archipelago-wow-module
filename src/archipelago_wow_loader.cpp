void AddArchipelagoPlayerScripts();
void AddArchipelagoWorldScripts();

// Folder name is "archipelago_wow" (no dashes) -> loader function is Addarchipelago_wowScripts,
// called automatically by the core's generated AddModulesScripts() wrapper.
void Addarchipelago_wowScripts()
{
    AddArchipelagoPlayerScripts();
    AddArchipelagoWorldScripts();
}
