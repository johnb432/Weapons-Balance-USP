#define TSHIRT(type,parent)\
class type: parent {\
    class ItemInfo: UniformItem {\
        containerClass = "Supply40";\
        mass = 40;\
    };\
}

#define TSHIRT_UNI_BASE(type,parent)\
TSHIRT(##type##_AOR1,parent);\
TSHIRT(##type##_AOR2,parent);\
TSHIRT(##type##_KHK,parent);\
TSHIRT(##type##_M81,parent);\
TSHIRT(##type##_MC,parent);\
TSHIRT(##type##_MCB,parent);\
TSHIRT(##type##_MCD,parent);\
TSHIRT(##type##_MCT,parent);\
TSHIRT(##type##_MCW,parent);\
TSHIRT(##type##_RGR,parent);\
TSHIRT(##type##_TSD,parent);\
TSHIRT(##type##_TSW,parent)

#define TSHIRT_UNI_WITHOUT_BLK(type,parent,base,parentBase)\
TSHIRT(base,parentBase);\
TSHIRT_UNI_BASE(type,parent);\
TSHIRT(##type##_GRY,parent);\
TSHIRT(##type##_NAV,parent)

#define TSHIRT_UNI_WITHOUT_GRY(type,parent,base,parentBase)\
TSHIRT(base,parentBase);\
TSHIRT_UNI_BASE(type,parent);\
TSHIRT(##type##_BLK,parent);\
TSHIRT(##type##_NAV,parent)

#define TSHIRT_UNI_WITHOUT_NAV(type,parent,base,parentBase)\
TSHIRT(base,parentBase);\
TSHIRT_UNI_BASE(type,parent);\
TSHIRT(##type##_BLK,parent);\
TSHIRT(##type##_GRY,parent)

#define TSHIRT_UNI_FULL(type,parent)\
TSHIRT_UNI_BASE(type,parent);\
TSHIRT(##type##_BLK,parent);\
TSHIRT(##type##_GRY,parent);\
TSHIRT(##type##_NAV,parent)

#define TSHIRT_UNI_GROUP(type)\
TSHIRT_UNI_WITHOUT_BLK(##type##_BLK,type,type,Uniform_Base);\
TSHIRT_UNI_FULL(##type##_CBR,type);\
TSHIRT_UNI_FULL(##type##_GRN,type);\
TSHIRT_UNI_WITHOUT_GRY(##type##_GRY,type,##type##_GRY,type);\
TSHIRT_UNI_WITHOUT_NAV(##type##_NAV,type,##type##_NAV,type)


TSHIRT_UNI_GROUP(USP_TSHIRT_G3C);
TSHIRT_UNI_GROUP(USP_TSHIRT_G3C_KP);
TSHIRT_UNI_GROUP(USP_TSHIRT_G3C_KP_MX);
TSHIRT_UNI_GROUP(USP_TSHIRT_G3C_KP_OR);
TSHIRT_UNI_GROUP(USP_TSHIRT_G3C_MX);
TSHIRT_UNI_GROUP(USP_TSHIRT_G3C_OR);

TSHIRT_UNI_GROUP(USP_TSHIRT2_G3C);
TSHIRT_UNI_GROUP(USP_TSHIRT2_G3C_KP);
TSHIRT_UNI_GROUP(USP_TSHIRT2_G3C_KP_MX);
TSHIRT_UNI_GROUP(USP_TSHIRT2_G3C_KP_OR);
TSHIRT_UNI_GROUP(USP_TSHIRT2_G3C_MX);
TSHIRT_UNI_GROUP(USP_TSHIRT2_G3C_OR);
