class Logic;
class Module_F: Logic {
    class ModuleDescription {};
};
class ACE_ModuleExplosive: Module_F {
    author = "$STR_ACE_Common_ACETeam";
    category = "ACE";
    displayName = CSTRING(Module_DisplayName);
    function = QUOTE(FUNC(module));
    scope = 2;
    isGlobal = 1;
    icon = PATHTOF(UI\Icon_Module_Explosives_ca.paa);
    class Arguments {
        class RequireSpecialist {
            displayName = CSTRING(RequireSpecialist_DisplayName);
            description = CSTRING(RequireSpecialist_Description);
            typeName = "BOOL";
            defaultValue = 0;
        };
        class PunishNonSpecialists {
            displayName = CSTRING(PunishNonSpecialists_DisplayName);
            description = CSTRING(PunishNonSpecialists_Description);
            typeName = "BOOL";
            defaultValue = 1;
        };
    };
    class ModuleDescription: ModuleDescription {
        description = CSTRING(Module_Description);
    };
};