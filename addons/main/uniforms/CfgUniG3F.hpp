#define G3F(type,parent)\
class type: parent {\
    class ItemInfo: UniformItem {\
        mass = 40;\
    };\
}

#define G3F_UNI(type,parent)\
G3F(##type##_BLK,parent);\
G3F(##type##_3CD,##type##_BLK);\
G3F(##type##_AOR1,##type##_BLK);\
G3F(##type##_AOR2,##type##_BLK);\
G3F(##type##_KHK,##type##_BLK);\
G3F(##type##_M81,##type##_BLK);\
G3F(##type##_MC,##type##_BLK);\
G3F(##type##_MCA,##type##_BLK);\
G3F(##type##_MCB,##type##_BLK);\
G3F(##type##_MCD,##type##_BLK);\
G3F(##type##_MCT,##type##_BLK);\
G3F(##type##_NWU,##type##_BLK);\
G3F(##type##_RGR,##type##_BLK);\
G3F(##type##_UCP,##type##_BLK)


G3F_UNI(USP_G3F,Uniform_Base);
G3F_UNI(USP_G3F_MX,USP_G3F_BLK);
G3F_UNI(USP_G3F_OR,USP_G3F_BLK);

G3F_UNI(USP_G3F_G3C,USP_G3F_BLK);
G3F_UNI(USP_G3F_G3C_KP,USP_G3F_G3C_BLK);
G3F_UNI(USP_G3F_G3C_KP_MX,USP_G3F_G3C_BLK);
G3F_UNI(USP_G3F_G3C_KP_OR,USP_G3F_G3C_BLK);
G3F_UNI(USP_G3F_G3C_MX,USP_G3F_G3C_BLK);
G3F_UNI(USP_G3F_G3C_OR,USP_G3F_G3C_BLK);
