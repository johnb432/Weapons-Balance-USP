#define SOFTSHELL(type,parent)\
class type: parent {\
    class ItemInfo: UniformItem {\
        mass = 40;\
    };\
}

#define SOFTSHELL_UNI_BASE(type,parent)\
SOFTSHELL(##type##_AOR1,parent);\
SOFTSHELL(##type##_AOR2,parent);\
SOFTSHELL(##type##_KHK,parent);\
SOFTSHELL(##type##_M81,parent);\
SOFTSHELL(##type##_MCB,parent);\
SOFTSHELL(##type##_MCD,parent);\
SOFTSHELL(##type##_MCT,parent);\
SOFTSHELL(##type##_MCW,parent);\
SOFTSHELL(##type##_NAV,parent);\
SOFTSHELL(##type##_TSD,parent);\
SOFTSHELL(##type##_TSW,parent)

#define SOFTSHELL_UNI_WITHOUT_BLK(type,parent,base,parentBase)\
SOFTSHELL(base,parentBase);\
SOFTSHELL_UNI_BASE(type,parent);\
SOFTSHELL(##type##_GRY,parent);\
SOFTSHELL(##type##_MC,parent);\
SOFTSHELL(##type##_RGR,parent)

#define SOFTSHELL_UNI_WITHOUT_GRY(type,parent,base,parentBase)\
SOFTSHELL(base,parentBase);\
SOFTSHELL_UNI_BASE(type,parent);\
SOFTSHELL(##type##_BLK,parent);\
SOFTSHELL(##type##_MC,parent);\
SOFTSHELL(##type##_RGR,parent)

#define SOFTSHELL_UNI_WITHOUT_MC(type,parent,base,parentBase)\
SOFTSHELL(base,parentBase);\
SOFTSHELL_UNI_BASE(type,parent);\
SOFTSHELL(##type##_BLK,parent);\
SOFTSHELL(##type##_GRY,parent);\
SOFTSHELL(##type##_RGR,parent)

#define SOFTSHELL_UNI_WITHOUT_RGR(type,parent,base,parentBase)\
SOFTSHELL(base,parentBase);\
SOFTSHELL_UNI_BASE(type,parent);\
SOFTSHELL(##type##_BLK,parent);\
SOFTSHELL(##type##_MC,parent);\
SOFTSHELL(##type##_GRY,parent)

#define SOFTSHELL_UNI_FULL(type,parent)\
SOFTSHELL_UNI_BASE(type,parent);\
SOFTSHELL(##type##_BLK,parent);\
SOFTSHELL(##type##_GRY,parent);\
SOFTSHELL(##type##_MC,parent);\
SOFTSHELL(##type##_RGR,parent)

#define SOFTSHELL_UNI_GROUP(type)\
SOFTSHELL_UNI_WITHOUT_BLK(##type##_BLK,type,type,Uniform_Base);\
SOFTSHELL_UNI_FULL(##type##_CBR,type);\
SOFTSHELL_UNI_WITHOUT_GRY(##type##_GRY,type,##type##_GRY,type);\
SOFTSHELL_UNI_WITHOUT_MC(##type##_MC,type,##type##_MC,type);\
SOFTSHELL_UNI_WITHOUT_RGR(##type##_RGR,type,##type##_RGR,type)


SOFTSHELL_UNI_GROUP(USP_SOFTSHELL_G3C);
SOFTSHELL_UNI_GROUP(USP_SOFTSHELL_G3C_KP);
SOFTSHELL_UNI_GROUP(USP_SOFTSHELL_G3C_KP_MX);
SOFTSHELL_UNI_GROUP(USP_SOFTSHELL_G3C_KP_OR);
SOFTSHELL_UNI_GROUP(USP_SOFTSHELL_G3C_MX);
SOFTSHELL_UNI_GROUP(USP_SOFTSHELL_G3C_OR);
