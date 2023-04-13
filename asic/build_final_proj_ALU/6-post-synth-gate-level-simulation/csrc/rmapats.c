// file = 0; split type = patterns; threshold = 100000; total count = 0.
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
#include "rmapats.h"

void  hsG_0__0 (UB  * pcode, scalar  val, U  I729);
void  hsG_0__0 (UB  * pcode, scalar  val, U  I729)
{
    {
        scalar  I1568;
        scalar  I1640;
        U  I1525;
        UB  * pcode1;
        I1640 = X3val[val];
        I1568 = *(pcode + 0);
        I1525 = (I1568 << 2) + I1640;
        I1525 = 1 << I1525;
        if (I1525 & 16) {
            {
                U  I5;
                RmaTableAssignList  * I1529;
                I1529 = (RmaTableAssignList  *)(pcode + 8 + 0U);
                if ((I1529->I829) && ((TableAssignLayoutOnClkOpt  *)I1529->I829 != (TableAssignLayoutOnClkOpt  *)&I1529->I829)) {
                    TableAssignLayoutOnClkOpt  * I829 = (TableAssignLayoutOnClkOpt  *)(I1529->I829);
                    TableAssignLayoutOnClkOpt  * I1109 = (TableAssignLayoutOnClkOpt  *)(I829->I918);
                    TableAssignLayoutOnClkOpt  * I1691 = ((void *)0);
                    TableAssignLayoutOnClkOpt  * I1692 = ((void *)0);
                    while (1){
                        TableAssignLayoutOnClkOpt  * I918 = I1109->I918;
                        if (I1109->I1133) {
                            if (!I1691) {
                                I1691 = I1109;
                            }
                            if (I1692) {
                                I1692->I918 = I1109;
                            }
                            I1692 = I1109;
                        }
                        else {
                            I1109->I918 = 0;
                        }
                        if (!I1109->I1130 || I1109->I1131) {
                            {
                                U  iinput = 0;
                                UB  * ptable = (UB  *)((RmaMultiInputTable  *)(ptableGbl + vcs_ptableOffsetsGbl[I1109->I1148]));
                                UB  * I1092 = (UB  *)(&I1109->I1145);
                                {
                                    scalar  newval;
                                    scalar  I1347;
                                    scalar  I1681;
                                    scalar  I1640 = X3val[val];
                                    U  state;
                                    U  I1642;
                                    I1642 = *(U  *)(I1092 + 0U);
                                    state = I1642 & 0x3fffffff;
                                    I1347 = I1642 >> 30;
                                    if (I1109->I1130) {
                                        I1640 = (((I1109->I729) >> ((I1640) << 1)) & 3);
                                        I1681 = (((I1109->I729) >> ((I1568) << 1)) & 3);
                                    }
                                    else {
                                        I1681 = I1568;
                                    }
                                    state &= ~(0x3 << (2 * iinput));
                                    state |= I1640 << (2 * iinput);
                                    *(U  *)(I1092 + 0U) = ((I1642 & ~(0x3fffffff)) | state);
                                    state = ((state << 2) | I1681);
                                    newval = ((scalar  *)(ptable))[state];
                                    newval = (newval >> (2 * I1347)) & 0x3;
                                    if (newval != I1347) {
                                        *(U  *)(I1092 + 0U) = ((*(U  *)(I1092 + 0U) & (0x3fffffff)) | (newval << 30));
                                        RmaSeqPrimOutputEblkData  * I1149 = (U  *)(I1092 + 8U);
                                        if ((*(scalar  *)((UB  *)I1149 + 16U) & 0x3) != newval) {
                                            *(scalar  *)((UB  *)I1149 + 16U) &= ~0x3;
                                            *(scalar  *)((UB  *)I1149 + 16U) |= (X4val[newval] & 0x3);
                                            vcs_sched0sd_hsim_udpclkopt((EBLK  *)I1149);
                                        }
                                    }
                                }
                            }
                            I1109->I1137 = I1109->I1133;
                        }
                        if (I1109 == I829) {
                            break ;
                        }
                        I1109 = I918;
                    };
                    if (I1692) {
                        I1692->I918 = I1691;
                        I1529->I829 = I1692;
                    }
                    else {
                        I1529->I829 = (RP )&I1529->I829;
                    }
                }
            }
        }
        else if (I1525 & 2) {
            {
                U  I5;
                RmaTableAssignList  * I1529;
                I1529 = (RmaTableAssignList  *)(pcode + 8 + 24U);
                if ((I1529->I829) && ((TableAssignLayoutOnClkOpt  *)I1529->I829 != (TableAssignLayoutOnClkOpt  *)&I1529->I829)) {
                    TableAssignLayoutOnClkOpt  * I829 = (TableAssignLayoutOnClkOpt  *)(I1529->I829);
                    TableAssignLayoutOnClkOpt  * I1109 = (TableAssignLayoutOnClkOpt  *)(I829->I918);
                    TableAssignLayoutOnClkOpt  * I1691 = ((void *)0);
                    TableAssignLayoutOnClkOpt  * I1692 = ((void *)0);
                    while (1){
                        TableAssignLayoutOnClkOpt  * I918 = I1109->I918;
                        if (I1109->I1133) {
                            if (!I1691) {
                                I1691 = I1109;
                            }
                            if (I1692) {
                                I1692->I918 = I1109;
                            }
                            I1692 = I1109;
                        }
                        else {
                            I1109->I918 = 0;
                        }
                        if (!I1109->I1130 || I1109->I1131) {
                            {
                                U  iinput = 0;
                                UB  * ptable = (UB  *)((RmaMultiInputTable  *)(ptableGbl + vcs_ptableOffsetsGbl[I1109->I1148]));
                                UB  * I1092 = (UB  *)(&I1109->I1145);
                                {
                                    scalar  newval;
                                    scalar  I1347;
                                    scalar  I1681;
                                    scalar  I1640 = X3val[val];
                                    U  state;
                                    U  I1642;
                                    I1642 = *(U  *)(I1092 + 0U);
                                    state = I1642 & 0x3fffffff;
                                    I1347 = I1642 >> 30;
                                    if (I1109->I1130) {
                                        I1640 = (((I1109->I729) >> ((I1640) << 1)) & 3);
                                        I1681 = (((I1109->I729) >> ((I1568) << 1)) & 3);
                                    }
                                    else {
                                        I1681 = I1568;
                                    }
                                    state &= ~(0x3 << (2 * iinput));
                                    state |= I1640 << (2 * iinput);
                                    *(U  *)(I1092 + 0U) = ((I1642 & ~(0x3fffffff)) | state);
                                    state = ((state << 2) | I1681);
                                    newval = ((scalar  *)(ptable))[state];
                                    newval = (newval >> (2 * I1347)) & 0x3;
                                    if (newval != I1347) {
                                        *(U  *)(I1092 + 0U) = ((*(U  *)(I1092 + 0U) & (0x3fffffff)) | (newval << 30));
                                        RmaSeqPrimOutputEblkData  * I1149 = (U  *)(I1092 + 8U);
                                        if ((*(scalar  *)((UB  *)I1149 + 16U) & 0x3) != newval) {
                                            *(scalar  *)((UB  *)I1149 + 16U) &= ~0x3;
                                            *(scalar  *)((UB  *)I1149 + 16U) |= (X4val[newval] & 0x3);
                                            vcs_sched0sd_hsim_udpclkopt((EBLK  *)I1149);
                                        }
                                    }
                                }
                            }
                            I1109->I1137 = I1109->I1133;
                        }
                        if (I1109 == I829) {
                            break ;
                        }
                        I1109 = I918;
                    };
                    if (I1692) {
                        I1692->I918 = I1691;
                        I1529->I829 = I1692;
                    }
                    else {
                        I1529->I829 = (RP )&I1529->I829;
                    }
                }
            }
        }
        else if (I1525 & I729) {
            {
                U  I5;
                TableAssignLayoutOnClkOpt  * I1109;
                TableAssignLayoutOnClkOpt  * I829;
                U  I915;
                U  I1364;
                RmaTableAssignList  * I1529;
                I1529 = (RmaTableAssignList  *)(pcode + 8 + 0U);
                I915 = I1529->I1150 ? (*(RP  *)(I1529->I1150)) : 0;
                I1109 = (TableAssignLayoutOnClkOpt  *)((UB  *)I1529->I1150 + sizeof(RP ));
                I829 = ((TableAssignLayoutOnClkOpt  *)I1109) + I915 - 1;
                if (I915) {
                    I1529->I829 = (RP )I829;
                }
                for (I1364 = 0; I1364 < I915; I1364++) {
                    if (!I1109->I1130 || I1109->I1143) {
                        {
                            U  iinput = 0;
                            UB  * ptable = (UB  *)((RmaMultiInputTable  *)(ptableGbl + vcs_ptableOffsetsGbl[I1109->I1148]));
                            UB  * I1092 = (UB  *)(&I1109->I1145);
                            {
                                scalar  newval;
                                scalar  I1347;
                                scalar  I1681;
                                scalar  I1640 = X3val[val];
                                U  state;
                                U  I1642;
                                I1642 = *(U  *)(I1092 + 0U);
                                state = I1642 & 0x3fffffff;
                                I1347 = I1642 >> 30;
                                if (I1109->I1130) {
                                    I1640 = (((I1109->I729) >> ((I1640) << 1)) & 3);
                                    I1681 = (((I1109->I729) >> ((I1568) << 1)) & 3);
                                }
                                else {
                                    I1681 = I1568;
                                }
                                state &= ~(0x3 << (2 * iinput));
                                state |= I1640 << (2 * iinput);
                                *(U  *)(I1092 + 0U) = ((I1642 & ~(0x3fffffff)) | state);
                                state = ((state << 2) | I1681);
                                newval = ((scalar  *)(ptable))[state];
                                newval = (newval >> (2 * I1347)) & 0x3;
                                if (newval != I1347) {
                                    *(U  *)(I1092 + 0U) = ((*(U  *)(I1092 + 0U) & (0x3fffffff)) | (newval << 30));
                                    RmaSeqPrimOutputEblkData  * I1149 = (U  *)(I1092 + 8U);
                                    if ((*(scalar  *)((UB  *)I1149 + 16U) & 0x3) != newval) {
                                        *(scalar  *)((UB  *)I1149 + 16U) &= ~0x3;
                                        *(scalar  *)((UB  *)I1149 + 16U) |= (X4val[newval] & 0x3);
                                        vcs_sched0sd_hsim_udpclkopt((EBLK  *)I1149);
                                    }
                                }
                            }
                        }
                    }
                    I829->I918 = I1109;
                    I829 = I1109;
                    I1109++;
                }
            }
            {
                U  I5;
                TableAssignLayoutOnClkOpt  * I1109;
                TableAssignLayoutOnClkOpt  * I829;
                U  I915;
                U  I1364;
                RmaTableAssignList  * I1529;
                I1529 = (RmaTableAssignList  *)(pcode + 8 + 24U);
                I915 = I1529->I1150 ? (*(RP  *)(I1529->I1150)) : 0;
                I1109 = (TableAssignLayoutOnClkOpt  *)((UB  *)I1529->I1150 + sizeof(RP ));
                I829 = ((TableAssignLayoutOnClkOpt  *)I1109) + I915 - 1;
                if (I915) {
                    I1529->I829 = (RP )I829;
                }
                for (I1364 = 0; I1364 < I915; I1364++) {
                    if (!I1109->I1130 || I1109->I1143) {
                        {
                            U  iinput = 0;
                            UB  * ptable = (UB  *)((RmaMultiInputTable  *)(ptableGbl + vcs_ptableOffsetsGbl[I1109->I1148]));
                            UB  * I1092 = (UB  *)(&I1109->I1145);
                            {
                                scalar  newval;
                                scalar  I1347;
                                scalar  I1681;
                                scalar  I1640 = X3val[val];
                                U  state;
                                U  I1642;
                                I1642 = *(U  *)(I1092 + 0U);
                                state = I1642 & 0x3fffffff;
                                I1347 = I1642 >> 30;
                                if (I1109->I1130) {
                                    I1640 = (((I1109->I729) >> ((I1640) << 1)) & 3);
                                    I1681 = (((I1109->I729) >> ((I1568) << 1)) & 3);
                                }
                                else {
                                    I1681 = I1568;
                                }
                                state &= ~(0x3 << (2 * iinput));
                                state |= I1640 << (2 * iinput);
                                *(U  *)(I1092 + 0U) = ((I1642 & ~(0x3fffffff)) | state);
                                state = ((state << 2) | I1681);
                                newval = ((scalar  *)(ptable))[state];
                                newval = (newval >> (2 * I1347)) & 0x3;
                                if (newval != I1347) {
                                    *(U  *)(I1092 + 0U) = ((*(U  *)(I1092 + 0U) & (0x3fffffff)) | (newval << 30));
                                    RmaSeqPrimOutputEblkData  * I1149 = (U  *)(I1092 + 8U);
                                    if ((*(scalar  *)((UB  *)I1149 + 16U) & 0x3) != newval) {
                                        *(scalar  *)((UB  *)I1149 + 16U) &= ~0x3;
                                        *(scalar  *)((UB  *)I1149 + 16U) |= (X4val[newval] & 0x3);
                                        vcs_sched0sd_hsim_udpclkopt((EBLK  *)I1149);
                                    }
                                }
                            }
                        }
                    }
                    I829->I918 = I1109;
                    I829 = I1109;
                    I1109++;
                }
            }
        }
        *(pcode + 0U) = I1640;
    }
}
void  hsG_0__1 (UB  * pcode, scalar  val, U  I729);
void  hsG_0__1 (UB  * pcode, scalar  val, U  I729)
{
    {
        scalar  I1568;
        scalar  I1640;
        U  I1525;
        UB  * pcode1;
        I1640 = X3val[val];
        I1568 = *(pcode + 0);
        I1525 = (I1568 << 2) + I1640;
        I1525 = 1 << I1525;
        if (I1525 & 2) {
            {
                U  I5;
                RmaTableAssignList  * I1529;
                I1529 = (RmaTableAssignList  *)(pcode + 8 + 0U);
                if ((I1529->I829) && ((TableAssignLayoutOnClkOpt  *)I1529->I829 != (TableAssignLayoutOnClkOpt  *)&I1529->I829)) {
                    TableAssignLayoutOnClkOpt  * I829 = (TableAssignLayoutOnClkOpt  *)(I1529->I829);
                    TableAssignLayoutOnClkOpt  * I1109 = (TableAssignLayoutOnClkOpt  *)(I829->I918);
                    TableAssignLayoutOnClkOpt  * I1691 = ((void *)0);
                    TableAssignLayoutOnClkOpt  * I1692 = ((void *)0);
                    while (1){
                        TableAssignLayoutOnClkOpt  * I918 = I1109->I918;
                        if (I1109->I1133) {
                            if (!I1691) {
                                I1691 = I1109;
                            }
                            if (I1692) {
                                I1692->I918 = I1109;
                            }
                            I1692 = I1109;
                        }
                        else {
                            I1109->I918 = 0;
                        }
                        if (!I1109->I1130 || I1109->I1131) {
                            {
                                U  iinput = 0;
                                UB  * ptable = (UB  *)((RmaMultiInputTable  *)(ptableGbl + vcs_ptableOffsetsGbl[I1109->I1148]));
                                UB  * I1092 = (UB  *)(&I1109->I1145);
                                {
                                    scalar  newval;
                                    scalar  I1347;
                                    scalar  I1681;
                                    scalar  I1640 = X3val[val];
                                    U  state;
                                    U  I1642;
                                    I1642 = *(U  *)(I1092 + 0U);
                                    state = I1642 & 0x3fffffff;
                                    I1347 = I1642 >> 30;
                                    if (I1109->I1130) {
                                        I1640 = (((I1109->I729) >> ((I1640) << 1)) & 3);
                                        I1681 = (((I1109->I729) >> ((I1568) << 1)) & 3);
                                    }
                                    else {
                                        I1681 = I1568;
                                    }
                                    state &= ~(0x3 << (2 * iinput));
                                    state |= I1640 << (2 * iinput);
                                    *(U  *)(I1092 + 0U) = ((I1642 & ~(0x3fffffff)) | state);
                                    state = ((state << 2) | I1681);
                                    newval = ((scalar  *)(ptable))[state];
                                    newval = (newval >> (2 * I1347)) & 0x3;
                                    if (newval != I1347) {
                                        *(U  *)(I1092 + 0U) = ((*(U  *)(I1092 + 0U) & (0x3fffffff)) | (newval << 30));
                                        RmaSeqPrimOutputEblkData  * I1149 = (U  *)(I1092 + 8U);
                                        if ((*(scalar  *)((UB  *)I1149 + 16U) & 0x3) != newval) {
                                            *(scalar  *)((UB  *)I1149 + 16U) &= ~0x3;
                                            *(scalar  *)((UB  *)I1149 + 16U) |= (X4val[newval] & 0x3);
                                            vcs_sched0sd_hsim_udpclkopt((EBLK  *)I1149);
                                        }
                                    }
                                }
                            }
                            I1109->I1137 = I1109->I1133;
                        }
                        if (I1109 == I829) {
                            break ;
                        }
                        I1109 = I918;
                    };
                    if (I1692) {
                        I1692->I918 = I1691;
                        I1529->I829 = I1692;
                    }
                    else {
                        I1529->I829 = (RP )&I1529->I829;
                    }
                }
            }
        }
        else if (I1525 & I729) {
            {
                U  I5;
                TableAssignLayoutOnClkOpt  * I1109;
                TableAssignLayoutOnClkOpt  * I829;
                U  I915;
                U  I1364;
                RmaTableAssignList  * I1529;
                I1529 = (RmaTableAssignList  *)(pcode + 8 + 0U);
                I915 = I1529->I1150 ? (*(RP  *)(I1529->I1150)) : 0;
                I1109 = (TableAssignLayoutOnClkOpt  *)((UB  *)I1529->I1150 + sizeof(RP ));
                I829 = ((TableAssignLayoutOnClkOpt  *)I1109) + I915 - 1;
                if (I915) {
                    I1529->I829 = (RP )I829;
                }
                for (I1364 = 0; I1364 < I915; I1364++) {
                    if (!I1109->I1130 || I1109->I1143) {
                        {
                            U  iinput = 0;
                            UB  * ptable = (UB  *)((RmaMultiInputTable  *)(ptableGbl + vcs_ptableOffsetsGbl[I1109->I1148]));
                            UB  * I1092 = (UB  *)(&I1109->I1145);
                            {
                                scalar  newval;
                                scalar  I1347;
                                scalar  I1681;
                                scalar  I1640 = X3val[val];
                                U  state;
                                U  I1642;
                                I1642 = *(U  *)(I1092 + 0U);
                                state = I1642 & 0x3fffffff;
                                I1347 = I1642 >> 30;
                                if (I1109->I1130) {
                                    I1640 = (((I1109->I729) >> ((I1640) << 1)) & 3);
                                    I1681 = (((I1109->I729) >> ((I1568) << 1)) & 3);
                                }
                                else {
                                    I1681 = I1568;
                                }
                                state &= ~(0x3 << (2 * iinput));
                                state |= I1640 << (2 * iinput);
                                *(U  *)(I1092 + 0U) = ((I1642 & ~(0x3fffffff)) | state);
                                state = ((state << 2) | I1681);
                                newval = ((scalar  *)(ptable))[state];
                                newval = (newval >> (2 * I1347)) & 0x3;
                                if (newval != I1347) {
                                    *(U  *)(I1092 + 0U) = ((*(U  *)(I1092 + 0U) & (0x3fffffff)) | (newval << 30));
                                    RmaSeqPrimOutputEblkData  * I1149 = (U  *)(I1092 + 8U);
                                    if ((*(scalar  *)((UB  *)I1149 + 16U) & 0x3) != newval) {
                                        *(scalar  *)((UB  *)I1149 + 16U) &= ~0x3;
                                        *(scalar  *)((UB  *)I1149 + 16U) |= (X4val[newval] & 0x3);
                                        vcs_sched0sd_hsim_udpclkopt((EBLK  *)I1149);
                                    }
                                }
                            }
                        }
                    }
                    I829->I918 = I1109;
                    I829 = I1109;
                    I1109++;
                }
            }
        }
        *(pcode + 0U) = I1640;
    }
}
void  hsG_0__2 (struct dummyq_struct * I1350, EBLK  * I1345, U  I708);
void  hsG_0__2 (struct dummyq_struct * I1350, EBLK  * I1345, U  I708)
{
    U  I1610;
    U  I1611;
    U  I1612;
    struct futq * I1613;
    struct dummyq_struct * pQ = I1350;
    I1610 = ((U )vcs_clocks) + I708;
    I1612 = I1610 & ((1 << fHashTableSize) - 1);
    I1345->I753 = (EBLK  *)(-1);
    I1345->I754 = I1610;
    if (0 && rmaProfEvtProp) {
        vcs_simpSetEBlkEvtID(I1345);
    }
    if (I1610 < (U )vcs_clocks) {
        I1611 = ((U  *)&vcs_clocks)[1];
        sched_millenium(pQ, I1345, I1611 + 1, I1610);
    }
    else if ((peblkFutQ1Head != ((void *)0)) && (I708 == 1)) {
        I1345->I756 = (struct eblk *)peblkFutQ1Tail;
        peblkFutQ1Tail->I753 = I1345;
        peblkFutQ1Tail = I1345;
    }
    else if ((I1613 = pQ->I1253[I1612].I776)) {
        I1345->I756 = (struct eblk *)I1613->I774;
        I1613->I774->I753 = (RP )I1345;
        I1613->I774 = (RmaEblk  *)I1345;
    }
    else {
        sched_hsopt(pQ, I1345, I1610);
    }
}
#ifdef __cplusplus
extern "C" {
#endif
void SinitHsimPats(void);
#ifdef __cplusplus
}
#endif
