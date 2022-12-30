class Vest_NoCamo_Base;
class USP_CRYE_CPC: Vest_NoCamo_Base {
    class ItemInfo: VestItem {
        class HitpointsProtectionInfo {
            class Abdomen {
                armor = 20;
                hitpointName = "HitAbdomen";
                passThrough = 0.2;
            };
            class Body {
                hitpointName = "HitBody";
                passThrough = 0.2;
            };
            class Chest {
                armor = 20;
                hitpointName = "HitChest";
                passThrough = 0.2;
            };
            class Diaphragm {
                armor = 20;
                hitpointName = "HitDiaphragm";
                passThrough = 0.2;
            };
        };
    };
};
