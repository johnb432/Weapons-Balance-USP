#define PCU(type,parent)\
class type: parent {\
    class ItemInfo: UniformItem {\
        mass = 40;\
    };\
}

#define PCU_UNI(type,parent,base,parentBase)\
PCU(base,parentBase);\
PCU(##type##_AOR1,parent);\
PCU(##type##_AOR2,parent);\
PCU(##type##_ATT,parent);\
PCU(##type##_BLK,parent);\
PCU(##type##_GRY,parent);\
PCU(##type##_KHK,parent);\
PCU(##type##_M81,parent);\
PCU(##type##_MC,parent);\
PCU(##type##_MCB,parent);\
PCU(##type##_MCD,parent);\
PCU(##type##_MCT,parent);\
PCU(##type##_MCW,parent);\
PCU(##type##_NAV,parent);\
PCU(##type##_RGR,parent);\
PCU(##type##_TSD,parent);\
PCU(##type##_TSW,parent)

#define PCU_UNI_BASE(type,parent,base,parentBase)\
PCU(base,parentBase);\
PCU(##type##_AOR1,parent);\
PCU(##type##_AOR2,parent);\
PCU(##type##_ATT,parent);\
PCU(##type##_KHK,parent);\
PCU(##type##_M81,parent);\
PCU(##type##_MCW,parent);\
PCU(##type##_NAV,parent);\
PCU(##type##_RGR,parent);\
PCU(##type##_TSD,parent);\
PCU(##type##_TSW,parent)

#define PCU_UNI_WITHOUT_BLK(type,parent,base,parentBase)\
PCU_UNI_BASE(type,parent,base,parentBase);\
PCU(##type##_GRY,parent);\
PCU(##type##_MC,parent);\
PCU(##type##_MCB,parent);\
PCU(##type##_MCD,parent);\
PCU(##type##_MCT,parent)

#define PCU_UNI_WITHOUT_GRY(type,parent,base,parentBase)\
PCU_UNI_BASE(type,parent,base,parentBase);\
PCU(##type##_BLK,parent);\
PCU(##type##_MC,parent);\
PCU(##type##_MCB,parent);\
PCU(##type##_MCD,parent);\
PCU(##type##_MCT,parent)

#define PCU_UNI_WITHOUT_MC(type,parent,base,parentBase)\
PCU_UNI_BASE(type,parent,base,parentBase);\
PCU(##type##_BLK,parent);\
PCU(##type##_GRY,parent);\
PCU(##type##_MCB,parent);\
PCU(##type##_MCD,parent);\
PCU(##type##_MCT,parent)

#define PCU_UNI_WITHOUT_MCB(type,parent,base,parentBase)\
PCU_UNI_BASE(type,parent,base,parentBase);\
PCU(##type##_BLK,parent);\
PCU(##type##_GRY,parent);\
PCU(##type##_MC,parent);\
PCU(##type##_MCD,parent);\
PCU(##type##_MCT,parent)

#define PCU_UNI_WITHOUT_MCD(type,parent,base,parentBase)\
PCU_UNI_BASE(type,parent,base,parentBase);\
PCU(##type##_BLK,parent);\
PCU(##type##_GRY,parent);\
PCU(##type##_MC,parent);\
PCU(##type##_MCB,parent);\
PCU(##type##_MCT,parent)

#define PCU_UNI_WITHOUT_MCT(type,parent,base,parentBase)\
PCU_UNI_BASE(type,parent,base,parentBase);\
PCU(##type##_BLK,parent);\
PCU(##type##_GRY,parent);\
PCU(##type##_MC,parent);\
PCU(##type##_MCB,parent);\
PCU(##type##_MCD,parent)

#define PCU_UNI_FULL(type,base,parent)\
PCU(base,parent);\
PCU(##type##_AMCU,USP_PCU_G3C);\
PCU(##type##_AOR1,USP_PCU_G3C);\
PCU(##type##_AOR2,USP_PCU_G3C);\
PCU(##type##_ATT,USP_PCU_G3C);\
PCU(##type##_DCU,USP_PCU_G3C);\
PCU(##type##_GRY,USP_PCU_G3C);\
PCU(##type##_KHK,USP_PCU_G3C);\
PCU(##type##_M81,USP_PCU_G3C);\
PCU(##type##_MC,USP_PCU_G3C);\
PCU(##type##_MCB,USP_PCU_G3C);\
PCU(##type##_MCD,USP_PCU_G3C);\
PCU(##type##_MCT,USP_PCU_G3C);\
PCU(##type##_MCW,USP_PCU_G3C);\
PCU(##type##_MM14,USP_PCU_G3C);\
PCU(##type##_MPD,USP_PCU_G3C);\
PCU(##type##_MPW,USP_PCU_G3C);\
PCU(##type##_MTN,USP_PCU_G3C);\
PCU(##type##_MTP,USP_PCU_G3C);\
PCU(##type##_NAV,USP_PCU_G3C);\
PCU(##type##_RBS,USP_PCU_G3C);\
PCU(##type##_RGR,USP_PCU_G3C);\
PCU(##type##_TSD,USP_PCU_G3C);\
PCU(##type##_TSW,USP_PCU_G3C)

#define PCU_UNI_FULL_BASE(type,base,parent)\
PCU(base,parent);\
PCU(##type##_AMCU,USP_PCU_G3C);\
PCU(##type##_AOR1,USP_PCU_G3C);\
PCU(##type##_AOR2,USP_PCU_G3C);\
PCU(##type##_ATT,USP_PCU_G3C);\
PCU(##type##_DCU,USP_PCU_G3C);\
PCU(##type##_KHK,USP_PCU_G3C);\
PCU(##type##_M81,USP_PCU_G3C);\
PCU(##type##_MCW,USP_PCU_G3C);\
PCU(##type##_MM14,USP_PCU_G3C);\
PCU(##type##_MPD,USP_PCU_G3C);\
PCU(##type##_MPW,USP_PCU_G3C);\
PCU(##type##_MTN,USP_PCU_G3C);\
PCU(##type##_MTP,USP_PCU_G3C);\
PCU(##type##_NAV,USP_PCU_G3C);\
PCU(##type##_RBS,USP_PCU_G3C);\
PCU(##type##_RGR,USP_PCU_G3C);\
PCU(##type##_TSD,USP_PCU_G3C);\
PCU(##type##_TSW,USP_PCU_G3C)

#define PCU_UNI_FULL_WITHOUT_BLK(type,base,parent)\
PCU_UNI_FULL_BASE(type,base,parent);\
PCU(##type##_GRY,USP_PCU_G3C);\
PCU(##type##_MC,USP_PCU_G3C);\
PCU(##type##_MCB,USP_PCU_G3C);\
PCU(##type##_MCD,USP_PCU_G3C);\
PCU(##type##_MCT,USP_PCU_G3C)

#define PCU_UNI_FULL_WITHOUT_GRY(type,base,parent)\
PCU_UNI_FULL_BASE(type,base,parent);\
PCU(##type##_BLK,USP_PCU_G3C);\
PCU(##type##_MC,USP_PCU_G3C);\
PCU(##type##_MCB,USP_PCU_G3C);\
PCU(##type##_MCD,USP_PCU_G3C);\
PCU(##type##_MCT,USP_PCU_G3C)

#define PCU_UNI_FULL_WITHOUT_MC(type,base,parent)\
PCU_UNI_FULL_BASE(type,base,parent);\
PCU(##type##_BLK,USP_PCU_G3C);\
PCU(##type##_GRY,USP_PCU_G3C);\
PCU(##type##_MCB,USP_PCU_G3C);\
PCU(##type##_MCD,USP_PCU_G3C);\
PCU(##type##_MCT,USP_PCU_G3C)

#define PCU_UNI_FULL_WITHOUT_MCB(type,base,parent)\
PCU_UNI_FULL_BASE(type,base,parent);\
PCU(##type##_BLK,USP_PCU_G3C);\
PCU(##type##_GRY,USP_PCU_G3C);\
PCU(##type##_MC,USP_PCU_G3C);\
PCU(##type##_MCD,USP_PCU_G3C);\
PCU(##type##_MCT,USP_PCU_G3C)

#define PCU_UNI_FULL_WITHOUT_MCD(type,base,parent)\
PCU_UNI_FULL_BASE(type,base,parent);\
PCU(##type##_BLK,USP_PCU_G3C);\
PCU(##type##_GRY,USP_PCU_G3C);\
PCU(##type##_MC,USP_PCU_G3C);\
PCU(##type##_MCB,USP_PCU_G3C);\
PCU(##type##_MCT,USP_PCU_G3C)

#define PCU_UNI_FULL_WITHOUT_MCT(type,base,parent)\
PCU_UNI_FULL_BASE(type,base,parent);\
PCU(##type##_BLK,USP_PCU_G3C);\
PCU(##type##_GRY,USP_PCU_G3C);\
PCU(##type##_MC,USP_PCU_G3C);\
PCU(##type##_MCB,USP_PCU_G3C);\
PCU(##type##_MCD,USP_PCU_G3C)

#define PCU_UNI_GROUP(type)\
PCU_UNI_WITHOUT_BLK(##type##_BLK,type,type,Uniform_Base);\
PCU_UNI_WITHOUT_GRY(##type##_GRY,type,##type##_GRY,type);\
PCU_UNI_WITHOUT_MC(##type##_MC,type,##type##_MC,type);\
PCU_UNI(##type##_MCA,type,##type##_MCA_BLK,type);\
PCU_UNI_WITHOUT_MCB(##type##_MCB,type,##type##_MCB,type);\
PCU_UNI_WITHOUT_MCD(##type##_MCD,type,##type##_MCD,type);\
PCU_UNI_WITHOUT_MCT(##type##_MCT,type,##type##_MCT,type)


PCU_UNI_FULL_WITHOUT_BLK(USP_PCU_G3C_BLK,USP_PCU_G3C,Uniform_Base);
PCU_UNI_FULL_WITHOUT_GRY(USP_PCU_G3C_GRY,USP_PCU_G3C_GRY,USP_PCU_G3C);
PCU_UNI_FULL_WITHOUT_MC(USP_PCU_G3C_MC,USP_PCU_G3C_MC,USP_PCU_G3C);

PCU_UNI_FULL_WITHOUT_BLK(USP_PCU_G3C_MCA,USP_PCU_G3C_MCA_BLK,USP_PCU_G3C);
PCU_UNI_FULL_WITHOUT_MCB(USP_PCU_G3C_MCB,USP_PCU_G3C_MCB,USP_PCU_G3C);
PCU_UNI_FULL_WITHOUT_MCD(USP_PCU_G3C_MCD,USP_PCU_G3C_MCD,USP_PCU_G3C);
PCU_UNI_FULL_WITHOUT_MCT(USP_PCU_G3C_MCT,USP_PCU_G3C_MCT,USP_PCU_G3C);

PCU_UNI_GROUP(USP_PCU_G3C_KP);
PCU_UNI_GROUP(USP_PCU_G3C_KP_MX);
PCU_UNI_GROUP(USP_PCU_G3C_KP_OR);
PCU_UNI_GROUP(USP_PCU_G3C_MX);
PCU_UNI_GROUP(USP_PCU_G3C_OR);
