#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "USP_Gear_Body",
            "USP_Gear_Head",
            "USP_Gear_IHPS",
            "USP_Gear_Pack",
            "USP_Gear_Vest",
            "USP_Armor_Fix"
        };
        author = "johnb43";
        authors[] = {"johnb43"};
        url = "https://github.com/johnb432/Weapons-Balance-USP";
        VERSION_CONFIG;
    };
};

class CfgWeapons {
    class HeadgearItem;
    class UniformItem;
    class VestItem;

    class Uniform_Base;

    class ItemCore;
    class H_HelmetB: ItemCore {
        class ItemInfo;
    };

    #include "helmets\CfgHelmetsCrye.hpp"
    #include "helmets\CfgHelmetsIHPS.hpp"
    #include "helmets\CfgHelmetsMICH.hpp"

    #include "uniforms\CfgUniG3C.hpp"
    #include "uniforms\CfgUniG3F.hpp"
    #include "uniforms\CfgUniOverwhite.hpp"
    #include "uniforms\CfgUniPCU.hpp"
    #include "uniforms\CfgUniRugby.hpp"
    #include "uniforms\CfgUniSoftshell.hpp"
    #include "uniforms\CfgUniTshirt.hpp"

    #include "vests\CfgVests.hpp"
};

class CfgVehicles {
    #include "backpacks\CfgBackpacks.hpp"
};
