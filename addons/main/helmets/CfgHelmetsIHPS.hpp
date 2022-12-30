#define IHPS(type)\
class type: H_HelmetB {\
    class ItemInfo: HeadgearItem {\
        mass = 35;\
        class HitpointsProtectionInfo {\
            class Head {\
                armor = 6.5;\
                hitpointName = "HitHead";\
                passThrough = 0.45;\
            };\
        };\
    };\
}

#define IHPS_EAR(type)\
class type: H_HelmetB {\
    ace_hearing_lowerVolume = 0;\
    ace_hearing_protection = 0.8;\
    class ItemInfo: HeadgearItem {\
        mass = 35;\
        class HitpointsProtectionInfo {\
            class Head {\
                armor = 6.5;\
                hitpointName = "HitHead";\
                passThrough = 0.45;\
            };\
        };\
    };\
}

#define IHPS_FULL(type,weight,prot1Head,prot2Head,prot1Face,prot2Face,hearingProt)\
class type: H_HelmetB {\
    ace_hearing_lowerVolume = 0.3;\
    ace_hearing_protection = hearingProt;\
    class ItemInfo: HeadgearItem {\
        mass = weight;\
        class HitpointsProtectionInfo {\
            class Face {\
                armor = prot1Face;\
                hitpointName = "HitFace";\
                passThrough = prot2Face;\
            };\
            class Head {\
                armor = prot1Head;\
                hitpointName = "HitHead";\
                passThrough = prot2Head;\
            };\
        };\
    };\
}

IHPS(USP_IHPS);
IHPS(USP_IHPS_COV);
IHPS(USP_IHPS_COV_USA);
IHPS(USP_IHPS_USA);

IHPS_EAR(USP_IHPS_COV_CT3);
IHPS_EAR(USP_IHPS_COV_CT3_USA);
IHPS_EAR(USP_IHPS_CT3);
IHPS_EAR(USP_IHPS_CT3_USA);

IHPS_FULL(USP_IHPS_MAN_ARM_COV_BLK,60,8,0.3,3,0.7,0);
IHPS_FULL(USP_IHPS_MAN_ARM_COV_CT3_BLK,60,8,0.3,3,0.7,0.8);

IHPS_FULL(USP_IHPS_MAN_ARM_VIS_COV_BLK,70,8,0.3,5,0.6,0);
IHPS_FULL(USP_IHPS_MAN_ARM_VIS_COV_CT3_BLK,70,8,0.3,5,0.6,0.8);

IHPS_FULL(USP_IHPS_MAN_COV_BLK,40,6.5,0.45,3,0.7,0);
IHPS_FULL(USP_IHPS_MAN_COV_CT3_BLK,40,6.5,0.45,3,0.7,0.8);

IHPS_FULL(USP_IHPS_MAN_VIS_COV_BLK,50,6.5,0.45,5,0.6,0);
IHPS_FULL(USP_IHPS_MAN_VIS_COV_CT3_BLK,50,6.5,0.45,5,0.6,0.8);
