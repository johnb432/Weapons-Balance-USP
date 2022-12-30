#define RUGBY(type,parent)\
class type: parent {\
    class ItemInfo: UniformItem {\
        containerClass = "Supply40";\
        mass = 40;\
    };\
}

#define RUGBY_UNI_BASE(type,parent)\
RUGBY(##type##_AMCU,parent);\
RUGBY(##type##_AOR1,parent);\
RUGBY(##type##_AOR2,parent);\
RUGBY(##type##_DCU,parent);\
RUGBY(##type##_KHK,parent);\
RUGBY(##type##_M81,parent);\
RUGBY(##type##_MC,parent);\
RUGBY(##type##_MCB,parent);\
RUGBY(##type##_MCD,parent);\
RUGBY(##type##_MCT,parent);\
RUGBY(##type##_MCW,parent);\
RUGBY(##type##_MM14,parent);\
RUGBY(##type##_MPD,parent);\
RUGBY(##type##_MPW,parent);\
RUGBY(##type##_MTN,parent);\
RUGBY(##type##_MTP,parent);\
RUGBY(##type##_NAV,parent);\
RUGBY(##type##_RBS,parent);\
RUGBY(##type##_TSD,parent);\
RUGBY(##type##_TSW,parent)

#define RUGBY_UNI_WITHOUT_BLK(type,parent,base,parentBase)\
RUGBY(base,parentBase);\
RUGBY_UNI_BASE(type,parent);\
RUGBY(##type##_GRY,parent);\
RUGBY(##type##_RGR,parent)

#define RUGBY_UNI_WITHOUT_GRY(type,parent,base,parentBase)\
RUGBY(base,parentBase);\
RUGBY_UNI_BASE(type,parent);\
RUGBY(##type##_BLK,parent);\
RUGBY(##type##_RGR,parent)

#define RUGBY_UNI_WITHOUT_RGR(type,parent,base,parentBase)\
RUGBY(base,parentBase);\
RUGBY_UNI_BASE(type,parent);\
RUGBY(##type##_BLK,parent);\
RUGBY(##type##_GRY,parent)

#define RUGBY_UNI_FULL(type,parent)\
RUGBY_UNI_BASE(type,parent);\
RUGBY(##type##_BLK,parent);\
RUGBY(##type##_GRY,parent);\
RUGBY(##type##_RGR,parent)

#define RUGBY_UNI_GROUP(type)\
RUGBY_UNI_WITHOUT_BLK(##type##_BLK,type,type,USP_RUGBY_G3C);\
RUGBY_UNI_FULL(##type##_CBR,type);\
RUGBY_UNI_WITHOUT_GRY(##type##_GRY,type,##type##_GRY,type);\
RUGBY_UNI_WITHOUT_RGR(##type##_RGR,type,##type##_RGR,type)


RUGBY_UNI_WITHOUT_BLK(USP_RUGBY_G3C_BLK, USP_RUGBY_G3C, USP_RUGBY_G3C, Uniform_Base);
RUGBY_UNI_FULL(USP_RUGBY_G3C_CBR, USP_RUGBY_G3C);
RUGBY_UNI_WITHOUT_GRY(USP_RUGBY_G3C_GRY, USP_RUGBY_G3C, USP_RUGBY_G3C_GRY, USP_RUGBY_G3C);
RUGBY_UNI_WITHOUT_RGR(USP_RUGBY_G3C_RGR, USP_RUGBY_G3C, USP_RUGBY_G3C_RGR, USP_RUGBY_G3C);

RUGBY_UNI_GROUP(USP_RUGBY_G3C_KP);
RUGBY_UNI_GROUP(USP_RUGBY_G3C_KP_MX);
RUGBY_UNI_GROUP(USP_RUGBY_G3C_KP_OR);
RUGBY_UNI_GROUP(USP_RUGBY_G3C_MX);
RUGBY_UNI_GROUP(USP_RUGBY_G3C_OR);
RUGBY_UNI_GROUP(USP_RUGBY_G3C_KP2);
RUGBY_UNI_GROUP(USP_RUGBY_G3C_KP2_MX);
RUGBY_UNI_GROUP(USP_RUGBY_G3C_KP2_OR);

RUGBY_UNI_GROUP(USP_RUGBY_G3C_USA);
