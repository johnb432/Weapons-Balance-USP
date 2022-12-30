class Bag_Base;
class USP_CRYE_BELT_PACK: Bag_Base {
    mass = 18;
    maximumLoad = 120;
};

class USP_ZIPON_PANEL: Bag_Base {
    mass = 18;
    maximumLoad = 120;
};
class USP_ZIPON_PANEL_RF: Bag_Base {
    mass = 18;
    maximumLoad = 120;
};
class USP_ZIPON_PANEL_RF2: Bag_Base {
    mass = 18;
    maximumLoad = 120;
};

class USP_PACK_BREACHER: Bag_Base {
    mass = 16;
};
class USP_PACK_FASTHAWK: Bag_Base {
    mass = 16;
};
class USP_PACK_HYDRATION: Bag_Base {
    mass = 8;
};
class USP_PACK_POINTMAN: Bag_Base {
    mass = 18;
    maximumLoad = 120;
};

class USP_PATROL_PACK: Bag_Base {
    mass = 60;
    maximumLoad = 320;
};

#define PATROL(type)\
class type: Bag_Base {\
    mass = 60;\
    maximumLoad = 320;\
}

PATROL(USP_PATROL_PACK_CB);
PATROL(USP_PATROL_PACK_CB_CS);
PATROL(USP_PATROL_PACK_CB_CS_FH);
PATROL(USP_PATROL_PACK_CB_CS_FH_RP_ZT);
PATROL(USP_PATROL_PACK_CB_CS_FH_RP);
PATROL(USP_PATROL_PACK_CB_CS_FH_ZT);
PATROL(USP_PATROL_PACK_CB_CS_RP);
PATROL(USP_PATROL_PACK_CB_CS_RP_ZT);
PATROL(USP_PATROL_PACK_CB_CS_ZT);
PATROL(USP_PATROL_PACK_CB_FH);
PATROL(USP_PATROL_PACK_CB_FH_RP);
PATROL(USP_PATROL_PACK_CB_FH_RP_ZT);
PATROL(USP_PATROL_PACK_CB_FH_ZT);
PATROL(USP_PATROL_PACK_CB_RP);
PATROL(USP_PATROL_PACK_CB_RP_ZT);
PATROL(USP_PATROL_PACK_CB_ZT);
PATROL(USP_PATROL_PACK_CS);
PATROL(USP_PATROL_PACK_CS_FH);
PATROL(USP_PATROL_PACK_CS_FH_ZT);
PATROL(USP_PATROL_PACK_CS_ZT);
PATROL(USP_PATROL_PACK_FH);
PATROL(USP_PATROL_PACK_FH_ZT);
PATROL(USP_PATROL_PACK_ZT);

class USP_45L_RUCKSACK: Bag_Base {
    mass = 60;
    maximumLoad = 320;
};

class USP_HYDROPACK: Bag_Base {
    mass = 8;
    maximumLoad = 80;
};

class USP_TACTICAL_PACK: Bag_Base {
    mass = 35;
};

#define CCT(type)\
class type: Bag_Base {\
    mass = 90;\
    maximumLoad = 240;\
    tf_range = 40000;\
}

CCT(USP_TACTICAL_PACK_CCT);
CCT(USP_TACTICAL_PACK_CCT2);
CCT(USP_TACTICAL_PACK_CCT3);
CCT(USP_TACTICAL_PACK_CCT4);
CCT(USP_TACTICAL_PACK_CCT5);
CCT(USP_TACTICAL_PACK_CCT6);
CCT(USP_TACTICAL_PACK_CCT7);
CCT(USP_TACTICAL_PACK_CCT8);
