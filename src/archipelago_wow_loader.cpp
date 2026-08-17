void AddArchipelagoPlayerScripts();
void AddArchipelagoWorldScripts();
void AddArchipelagoCommandScripts();
void AddArchipelagoQuestScripts();
void AddArchipelagoLevelScripts();
void AddArchipelagoInstanceScripts();
void AddArchipelagoDarkPortalScripts();
void AddArchipelagoNorthrendPassageScripts();

// Folder name is "archipelago_wow" (no dashes) -> loader function is Addarchipelago_wowScripts,
// called automatically by the core's generated AddModulesScripts() wrapper.
void Addarchipelago_wowScripts()
{
    AddArchipelagoPlayerScripts();
    AddArchipelagoWorldScripts();
    AddArchipelagoCommandScripts();
    AddArchipelagoQuestScripts();
    AddArchipelagoLevelScripts();
    AddArchipelagoInstanceScripts();
    AddArchipelagoDarkPortalScripts();
    AddArchipelagoNorthrendPassageScripts();
}
