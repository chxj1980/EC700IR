/*  ============================================================================
 *   Copyright (c) Texas Instruments Inc 2002, 2003, 2004, 2005
 *
 *   Use of this software is controlled by the terms and conditions found in the
 *   license agreement under which this software has been supplied.
 *   ===========================================================================
 */
 
/** ============================================================================
 *   @file  cslr_emifa.h
 *
 *   @desc  API header file for EMIFA CSL
 *
 */

#ifndef _CSLR_EMIFA_H_
#define _CSLR_EMIFA_H_

#include <cslr.h>

#include <tistdtypes.h>

/**************************************************************************\
* Register Overlay Structure
\**************************************************************************/
typedef struct  {
    volatile Uint32 MIDR;
    volatile Uint32 STAT;
    volatile Uint8 RSVD0[24];
    volatile Uint32 BPRIO;
    volatile Uint8 RSVD1[92];
    volatile Uint32 CE2CFG;
    volatile Uint32 CE3CFG;
    volatile Uint32 CE4CFG;
    volatile Uint32 CE5CFG;
    volatile Uint8 RSVD2[16];
    volatile Uint32 AWCC;
    volatile Uint8 RSVD3[28];
    volatile Uint32 INTRAW;
    volatile Uint32 INTMSK;
    volatile Uint32 INTMSKSET;
    volatile Uint32 INTMSKCLR;
} CSL_EmifaRegs;

/**************************************************************************\
* Overlay structure typedef definition
\**************************************************************************/
typedef volatile CSL_EmifaRegs             *CSL_EmifaRegsOvly;

/**************************************************************************\
* Field Definition Macros
\**************************************************************************/

/* MIDR */

#define CSL_EMIFA_MIDR_MOD_ID_MASK       (0x3FFF0000u)
#define CSL_EMIFA_MIDR_MOD_ID_SHIFT      (0x00000010u)
#define CSL_EMIFA_MIDR_MOD_ID_RESETVAL   (0x00000032u)

#define CSL_EMIFA_MIDR_MJ_REV_MASK       (0x0000FF00u)
#define CSL_EMIFA_MIDR_MJ_REV_SHIFT      (0x00000008u)
#define CSL_EMIFA_MIDR_MJ_REV_RESETVAL   (0x00000003u)

#define CSL_EMIFA_MIDR_MN_REV_MASK       (0x000000FFu)
#define CSL_EMIFA_MIDR_MN_REV_SHIFT      (0x00000000u)
#define CSL_EMIFA_MIDR_MN_REV_RESETVAL   (0x00000010u)

#define CSL_EMIFA_MIDR_RESETVAL          (0x00320310u)

/* STAT */

#define CSL_EMIFA_STAT_BE_MASK           (0x80000000u)
#define CSL_EMIFA_STAT_BE_SHIFT          (0x0000001Fu)
#define CSL_EMIFA_STAT_BE_RESETVAL       (0x00000000u)

/*----BE Tokens----*/
#define CSL_EMIFA_STAT_BE_B_ENDIAN       (0x00000001u)
#define CSL_EMIFA_STAT_BE_L_ENDIAN       (0x00000000u)

#define CSL_EMIFA_STAT_RESETVAL          (0x40000000u)

/* BPRIO */

#define CSL_EMIFA_BPRIO_PRIO_RAISE_MASK  (0x000000FFu)
#define CSL_EMIFA_BPRIO_PRIO_RAISE_SHIFT (0x00000000u)
#define CSL_EMIFA_BPRIO_PRIO_RAISE_RESETVAL (0x000000FFu)

#define CSL_EMIFA_BPRIO_RESETVAL         (0x000000FFu)

/* CE2CFG */

#define CSL_EMIFA_CE2CFG_SSEL_MASK       (0x80000000u)
#define CSL_EMIFA_CE2CFG_SSEL_SHIFT      (0x0000001Fu)
#define CSL_EMIFA_CE2CFG_SSEL_RESETVAL   (0x00000000u)

/*----SSEL Tokens----*/
#define CSL_EMIFA_CE2CFG_SSEL_SYNCMEM    (0x00000001u)
#define CSL_EMIFA_CE2CFG_SSEL_ASYNCMEM   (0x00000000u)

#define CSL_EMIFA_CE2CFG_SS_MASK         (0x40000000u)
#define CSL_EMIFA_CE2CFG_SS_SHIFT        (0x0000001Eu)
#define CSL_EMIFA_CE2CFG_SS_RESETVAL     (0x00000000u)

/*----SS Tokens----*/
#define CSL_EMIFA_CE2CFG_SS_SSMEN        (0x00000001u)
#define CSL_EMIFA_CE2CFG_SS_SSMDIS       (0x00000000u)

#define CSL_EMIFA_CE2CFG_BWEM_MASK       (0x20000000u)
#define CSL_EMIFA_CE2CFG_BWEM_SHIFT      (0x0000001Du)
#define CSL_EMIFA_CE2CFG_BWEM_RESETVAL   (0x00000000u)

/*----BWEM Tokens----*/
#define CSL_EMIFA_CE2CFG_BWEM_WESEN      (0x00000001u)
#define CSL_EMIFA_CE2CFG_BWEM_WESDIS     (0x00000000u)

#define CSL_EMIFA_CE2CFG_AE_MASK         (0x10000000u)
#define CSL_EMIFA_CE2CFG_AE_SHIFT        (0x0000001Cu)
#define CSL_EMIFA_CE2CFG_AE_RESETVAL     (0x00000000u)

/*----AE Tokens----*/
#define CSL_EMIFA_CE2CFG_AE_ARDYEN       (0x00000001u)
#define CSL_EMIFA_CE2CFG_AE_ARDYDIS      (0x00000000u)

#define CSL_EMIFA_CE2CFG_W_SETUP_MASK    (0x0F000000u)
#define CSL_EMIFA_CE2CFG_W_SETUP_SHIFT   (0x00000018u)
#define CSL_EMIFA_CE2CFG_W_SETUP_RESETVAL (0x0000000Fu)

#define CSL_EMIFA_CE2CFG_W_STROBE_MASK   (0x00FC0000u)
#define CSL_EMIFA_CE2CFG_W_STROBE_SHIFT  (0x00000012u)
#define CSL_EMIFA_CE2CFG_W_STROBE_RESETVAL (0x0000003Fu)

#define CSL_EMIFA_CE2CFG_W_HOLD_MASK     (0x00038000u)
#define CSL_EMIFA_CE2CFG_W_HOLD_SHIFT    (0x0000000Fu)
#define CSL_EMIFA_CE2CFG_W_HOLD_RESETVAL (0x00000007u)

#define CSL_EMIFA_CE2CFG_R_SETUP_MASK    (0x00007800u)
#define CSL_EMIFA_CE2CFG_R_SETUP_SHIFT   (0x0000000Bu)
#define CSL_EMIFA_CE2CFG_R_SETUP_RESETVAL (0x0000000Fu)

#define CSL_EMIFA_CE2CFG_R_STROBE_MASK   (0x000007E0u)
#define CSL_EMIFA_CE2CFG_R_STROBE_SHIFT  (0x00000005u)
#define CSL_EMIFA_CE2CFG_R_STROBE_RESETVAL (0x0000003Fu)

#define CSL_EMIFA_CE2CFG_R_HOLD_MASK     (0x0000001Cu)
#define CSL_EMIFA_CE2CFG_R_HOLD_SHIFT    (0x00000002u)
#define CSL_EMIFA_CE2CFG_R_HOLD_RESETVAL (0x00000007u)

#define CSL_EMIFA_CE2CFG_ASIZE_MASK      (0x00000003u)
#define CSL_EMIFA_CE2CFG_ASIZE_SHIFT     (0x00000000u)
#define CSL_EMIFA_CE2CFG_ASIZE_RESETVAL  (0x00000000u)

/*----ASIZE Tokens----*/
#define CSL_EMIFA_CE2CFG_ASIZE_8BIT      (0x00000000u)
#define CSL_EMIFA_CE2CFG_ASIZE_16BIT     (0x00000001u)
#define CSL_EMIFA_CE2CFG_ASIZE_32BIT     (0x00000002u)
#define CSL_EMIFA_CE2CFG_ASIZE_64BIT     (0x00000003u)

/* The default macro name CSL_EMIFA_CE2CFG_RESETVAL is changed to 
 * CSL_EMIFA_CE2CFG_SSEL0_RESETVAL
 */
#define CSL_EMIFA_CE2CFG_SSEL0_RESETVAL  (0x0FFFFFFCu)

/* CE3CFG */

#define CSL_EMIFA_CE3CFG_SSEL_MASK       (0x80000000u)
#define CSL_EMIFA_CE3CFG_SSEL_SHIFT      (0x0000001Fu)
#define CSL_EMIFA_CE3CFG_SSEL_RESETVAL   (0x00000000u)

/*----SSEL Tokens----*/
#define CSL_EMIFA_CE3CFG_SSEL_SYNCMEM    (0x00000001u)
#define CSL_EMIFA_CE3CFG_SSEL_ASYNCMEM   (0x00000000u)

#define CSL_EMIFA_CE3CFG_SS_MASK         (0x40000000u)
#define CSL_EMIFA_CE3CFG_SS_SHIFT        (0x0000001Eu)
#define CSL_EMIFA_CE3CFG_SS_RESETVAL     (0x00000000u)

/*----SS Tokens----*/
#define CSL_EMIFA_CE3CFG_SS_SSMEN        (0x00000001u)
#define CSL_EMIFA_CE3CFG_SS_SSMDIS       (0x00000000u)

#define CSL_EMIFA_CE3CFG_BWEM_MASK       (0x20000000u)
#define CSL_EMIFA_CE3CFG_BWEM_SHIFT      (0x0000001Du)
#define CSL_EMIFA_CE3CFG_BWEM_RESETVAL   (0x00000000u)

/*----BWEM Tokens----*/
#define CSL_EMIFA_CE3CFG_BWEM_WESEN      (0x00000001u)
#define CSL_EMIFA_CE3CFG_BWEM_WESDIS     (0x00000000u)

#define CSL_EMIFA_CE3CFG_AE_MASK         (0x10000000u)
#define CSL_EMIFA_CE3CFG_AE_SHIFT        (0x0000001Cu)
#define CSL_EMIFA_CE3CFG_AE_RESETVAL     (0x00000000u)

/*----AE Tokens----*/
#define CSL_EMIFA_CE3CFG_AE_ARDYEN       (0x00000001u)
#define CSL_EMIFA_CE3CFG_AE_ARDYDIS      (0x00000000u)

#define CSL_EMIFA_CE3CFG_W_SETUP_MASK    (0x0F000000u)
#define CSL_EMIFA_CE3CFG_W_SETUP_SHIFT   (0x00000018u)
#define CSL_EMIFA_CE3CFG_W_SETUP_RESETVAL (0x0000000Fu)

#define CSL_EMIFA_CE3CFG_W_STROBE_MASK   (0x00FC0000u)
#define CSL_EMIFA_CE3CFG_W_STROBE_SHIFT  (0x00000012u)
#define CSL_EMIFA_CE3CFG_W_STROBE_RESETVAL (0x0000003Fu)

#define CSL_EMIFA_CE3CFG_W_HOLD_MASK     (0x00038000u)
#define CSL_EMIFA_CE3CFG_W_HOLD_SHIFT    (0x0000000Fu)
#define CSL_EMIFA_CE3CFG_W_HOLD_RESETVAL (0x00000007u)

#define CSL_EMIFA_CE3CFG_R_SETUP_MASK    (0x00007800u)
#define CSL_EMIFA_CE3CFG_R_SETUP_SHIFT   (0x0000000Bu)
#define CSL_EMIFA_CE3CFG_R_SETUP_RESETVAL (0x0000000Fu)

#define CSL_EMIFA_CE3CFG_R_STROBE_MASK   (0x000007E0u)
#define CSL_EMIFA_CE3CFG_R_STROBE_SHIFT  (0x00000005u)
#define CSL_EMIFA_CE3CFG_R_STROBE_RESETVAL (0x0000003Fu)

#define CSL_EMIFA_CE3CFG_R_HOLD_MASK     (0x0000001Cu)
#define CSL_EMIFA_CE3CFG_R_HOLD_SHIFT    (0x00000002u)
#define CSL_EMIFA_CE3CFG_R_HOLD_RESETVAL (0x00000007u)

#define CSL_EMIFA_CE3CFG_ASIZE_MASK      (0x00000003u)
#define CSL_EMIFA_CE3CFG_ASIZE_SHIFT     (0x00000000u)
#define CSL_EMIFA_CE3CFG_ASIZE_RESETVAL  (0x00000000u)

/*----ASIZE Tokens----*/
#define CSL_EMIFA_CE3CFG_ASIZE_8BIT      (0x00000000u)
#define CSL_EMIFA_CE3CFG_ASIZE_16BIT     (0x00000001u)
#define CSL_EMIFA_CE3CFG_ASIZE_32BIT     (0x00000002u)
#define CSL_EMIFA_CE3CFG_ASIZE_64BIT     (0x00000003u)

/* The default macro name CSL_EMIFA_CE3CFG_RESETVAL is changed to 
 * CSL_EMIFA_CE3CFG_SSEL0_RESETVAL
 */
#define CSL_EMIFA_CE3CFG_SSEL0_RESETVAL  (0x0FFFFFFCu)

/* CE4CFG */

#define CSL_EMIFA_CE4CFG_SSEL_MASK       (0x80000000u)
#define CSL_EMIFA_CE4CFG_SSEL_SHIFT      (0x0000001Fu)
#define CSL_EMIFA_CE4CFG_SSEL_RESETVAL   (0x00000000u)

/*----SSEL Tokens----*/
#define CSL_EMIFA_CE4CFG_SSEL_SYNCMEM    (0x00000001u)
#define CSL_EMIFA_CE4CFG_SSEL_ASYNCMEM   (0x00000000u)

#define CSL_EMIFA_CE4CFG_SS_MASK         (0x40000000u)
#define CSL_EMIFA_CE4CFG_SS_SHIFT        (0x0000001Eu)
#define CSL_EMIFA_CE4CFG_SS_RESETVAL     (0x00000000u)

/*----SS Tokens----*/
#define CSL_EMIFA_CE4CFG_SS_SSMEN        (0x00000001u)
#define CSL_EMIFA_CE4CFG_SS_SSMDIS       (0x00000000u)

#define CSL_EMIFA_CE4CFG_BWEM_MASK       (0x20000000u)
#define CSL_EMIFA_CE4CFG_BWEM_SHIFT      (0x0000001Du)
#define CSL_EMIFA_CE4CFG_BWEM_RESETVAL   (0x00000000u)

/*----BWEM Tokens----*/
#define CSL_EMIFA_CE4CFG_BWEM_WESEN      (0x00000001u)
#define CSL_EMIFA_CE4CFG_BWEM_WESDIS     (0x00000000u)

#define CSL_EMIFA_CE4CFG_AE_MASK         (0x10000000u)
#define CSL_EMIFA_CE4CFG_AE_SHIFT        (0x0000001Cu)
#define CSL_EMIFA_CE4CFG_AE_RESETVAL     (0x00000000u)

/*----AE Tokens----*/
#define CSL_EMIFA_CE4CFG_AE_ARDYEN       (0x00000001u)
#define CSL_EMIFA_CE4CFG_AE_ARDYDIS      (0x00000000u)

#define CSL_EMIFA_CE4CFG_W_SETUP_MASK    (0x0F000000u)
#define CSL_EMIFA_CE4CFG_W_SETUP_SHIFT   (0x00000018u)
#define CSL_EMIFA_CE4CFG_W_SETUP_RESETVAL (0x0000000Fu)

#define CSL_EMIFA_CE4CFG_W_STROBE_MASK   (0x00FC0000u)
#define CSL_EMIFA_CE4CFG_W_STROBE_SHIFT  (0x00000012u)
#define CSL_EMIFA_CE4CFG_W_STROBE_RESETVAL (0x0000003Fu)

#define CSL_EMIFA_CE4CFG_W_HOLD_MASK     (0x00038000u)
#define CSL_EMIFA_CE4CFG_W_HOLD_SHIFT    (0x0000000Fu)
#define CSL_EMIFA_CE4CFG_W_HOLD_RESETVAL (0x00000007u)

#define CSL_EMIFA_CE4CFG_R_SETUP_MASK    (0x00007800u)
#define CSL_EMIFA_CE4CFG_R_SETUP_SHIFT   (0x0000000Bu)
#define CSL_EMIFA_CE4CFG_R_SETUP_RESETVAL (0x0000000Fu)

#define CSL_EMIFA_CE4CFG_R_STROBE_MASK   (0x000007E0u)
#define CSL_EMIFA_CE4CFG_R_STROBE_SHIFT  (0x00000005u)
#define CSL_EMIFA_CE4CFG_R_STROBE_RESETVAL (0x0000003Fu)

#define CSL_EMIFA_CE4CFG_R_HOLD_MASK     (0x0000001Cu)
#define CSL_EMIFA_CE4CFG_R_HOLD_SHIFT    (0x00000002u)
#define CSL_EMIFA_CE4CFG_R_HOLD_RESETVAL (0x00000007u)

#define CSL_EMIFA_CE4CFG_ASIZE_MASK      (0x00000003u)
#define CSL_EMIFA_CE4CFG_ASIZE_SHIFT     (0x00000000u)
#define CSL_EMIFA_CE4CFG_ASIZE_RESETVAL  (0x00000000u)

/*----ASIZE Tokens----*/
#define CSL_EMIFA_CE4CFG_ASIZE_8BIT      (0x00000000u)
#define CSL_EMIFA_CE4CFG_ASIZE_16BIT     (0x00000001u)
#define CSL_EMIFA_CE4CFG_ASIZE_32BIT     (0x00000002u)
#define CSL_EMIFA_CE4CFG_ASIZE_64BIT     (0x00000003u)

/* The default macro name CSL_EMIFA_CE4CFG_RESETVAL is changed to 
 * CSL_EMIFA_CE4CFG_SSEL0_RESETVAL
 */
#define CSL_EMIFA_CE4CFG_SSEL0_RESETVAL  (0x0FFFFFFCu)

/* CE5CFG */

#define CSL_EMIFA_CE5CFG_SSEL_MASK       (0x80000000u)
#define CSL_EMIFA_CE5CFG_SSEL_SHIFT      (0x0000001Fu)
#define CSL_EMIFA_CE5CFG_SSEL_RESETVAL   (0x00000000u)

/*----SSEL Tokens----*/
#define CSL_EMIFA_CE5CFG_SSEL_SYNCMEM    (0x00000001u)
#define CSL_EMIFA_CE5CFG_SSEL_ASYNCMEM   (0x00000000u)

#define CSL_EMIFA_CE5CFG_SS_MASK         (0x40000000u)
#define CSL_EMIFA_CE5CFG_SS_SHIFT        (0x0000001Eu)
#define CSL_EMIFA_CE5CFG_SS_RESETVAL     (0x00000000u)

/*----SS Tokens----*/
#define CSL_EMIFA_CE5CFG_SS_SSMEN        (0x00000001u)
#define CSL_EMIFA_CE5CFG_SS_SSMDIS       (0x00000000u)

#define CSL_EMIFA_CE5CFG_BWEM_MASK       (0x20000000u)
#define CSL_EMIFA_CE5CFG_BWEM_SHIFT      (0x0000001Du)
#define CSL_EMIFA_CE5CFG_BWEM_RESETVAL   (0x00000000u)

/*----BWEM Tokens----*/
#define CSL_EMIFA_CE5CFG_BWEM_WESEN      (0x00000001u)
#define CSL_EMIFA_CE5CFG_BWEM_WESDIS     (0x00000000u)

#define CSL_EMIFA_CE5CFG_AE_MASK         (0x10000000u)
#define CSL_EMIFA_CE5CFG_AE_SHIFT        (0x0000001Cu)
#define CSL_EMIFA_CE5CFG_AE_RESETVAL     (0x00000000u)

/*----AE Tokens----*/
#define CSL_EMIFA_CE5CFG_AE_ARDYEN       (0x00000001u)
#define CSL_EMIFA_CE5CFG_AE_ARDYDIS      (0x00000000u)

#define CSL_EMIFA_CE5CFG_W_SETUP_MASK    (0x0F000000u)
#define CSL_EMIFA_CE5CFG_W_SETUP_SHIFT   (0x00000018u)
#define CSL_EMIFA_CE5CFG_W_SETUP_RESETVAL (0x0000000Fu)

#define CSL_EMIFA_CE5CFG_W_STROBE_MASK   (0x00FC0000u)
#define CSL_EMIFA_CE5CFG_W_STROBE_SHIFT  (0x00000012u)
#define CSL_EMIFA_CE5CFG_W_STROBE_RESETVAL (0x0000003Fu)

#define CSL_EMIFA_CE5CFG_W_HOLD_MASK     (0x00038000u)
#define CSL_EMIFA_CE5CFG_W_HOLD_SHIFT    (0x0000000Fu)
#define CSL_EMIFA_CE5CFG_W_HOLD_RESETVAL (0x00000007u)

#define CSL_EMIFA_CE5CFG_R_SETUP_MASK    (0x00007800u)
#define CSL_EMIFA_CE5CFG_R_SETUP_SHIFT   (0x0000000Bu)
#define CSL_EMIFA_CE5CFG_R_SETUP_RESETVAL (0x0000000Fu)

#define CSL_EMIFA_CE5CFG_R_STROBE_MASK   (0x000007E0u)
#define CSL_EMIFA_CE5CFG_R_STROBE_SHIFT  (0x00000005u)
#define CSL_EMIFA_CE5CFG_R_STROBE_RESETVAL (0x0000003Fu)

#define CSL_EMIFA_CE5CFG_R_HOLD_MASK     (0x0000001Cu)
#define CSL_EMIFA_CE5CFG_R_HOLD_SHIFT    (0x00000002u)
#define CSL_EMIFA_CE5CFG_R_HOLD_RESETVAL (0x00000007u)

#define CSL_EMIFA_CE5CFG_ASIZE_MASK      (0x00000003u)
#define CSL_EMIFA_CE5CFG_ASIZE_SHIFT     (0x00000000u)
#define CSL_EMIFA_CE5CFG_ASIZE_RESETVAL  (0x00000000u)

/*----ASIZE Tokens----*/
#define CSL_EMIFA_CE5CFG_ASIZE_8BIT      (0x00000000u)
#define CSL_EMIFA_CE5CFG_ASIZE_16BIT     (0x00000001u)
#define CSL_EMIFA_CE5CFG_ASIZE_32BIT     (0x00000002u)
#define CSL_EMIFA_CE5CFG_ASIZE_64BIT     (0x00000003u)

/* The default macro name CSL_EMIFA_CE5CFG_RESETVAL is changed to 
 * CSL_EMIFA_CE5CFG_SSEL0_RESETVAL
 */
#define CSL_EMIFA_CE5CFG_SSEL0_RESETVAL  (0x0FFFFFFCu)

/* AWCC */

#define CSL_EMIFA_AWCC_AP_MASK           (0x40000000u)
#define CSL_EMIFA_AWCC_AP_SHIFT          (0x0000001Eu)
#define CSL_EMIFA_AWCC_AP_RESETVAL       (0x00000001u)

/*----AP Tokens----*/
#define CSL_EMIFA_AWCC_AP_ACTHIGH        (0x00000001u)
#define CSL_EMIFA_AWCC_AP_ACTLOW         (0x00000000u)

#define CSL_EMIFA_AWCC_TA_MASK           (0x00000700u)
#define CSL_EMIFA_AWCC_TA_SHIFT          (0x00000008u)
#define CSL_EMIFA_AWCC_TA_RESETVAL       (0x00000003u)

#define CSL_EMIFA_AWCC_MAX_EXT_WAIT_MASK (0x000000FFu)
#define CSL_EMIFA_AWCC_MAX_EXT_WAIT_SHIFT (0x00000000u)
#define CSL_EMIFA_AWCC_MAX_EXT_WAIT_RESETVAL (0x00000080u)

#define CSL_EMIFA_AWCC_RESETVAL          (0x40000380u)

/* INTRAW */

#define CSL_EMIFA_INTRAW_AT_MASK         (0x00000001u)
#define CSL_EMIFA_INTRAW_AT_SHIFT        (0x00000000u)
#define CSL_EMIFA_INTRAW_AT_RESETVAL     (0x00000000u)

/*----AT Tokens----*/
#define CSL_EMIFA_INTRAW_AT_SET          (0x00000001u)
#define CSL_EMIFA_INTRAW_AT_CLEAR        (0x00000000u)

#define CSL_EMIFA_INTRAW_RESETVAL        (0x00000000u)

/* INTMSK */

#define CSL_EMIFA_INTMSK_AT_MASKED_MASK  (0x00000001u)
#define CSL_EMIFA_INTMSK_AT_MASKED_SHIFT (0x00000000u)
#define CSL_EMIFA_INTMSK_AT_MASKED_RESETVAL (0x00000000u)

/*----AT_MASKED Tokens----*/
#define CSL_EMIFA_INTMSK_AT_MASKED_SET   (0x00000001u)
#define CSL_EMIFA_INTMSK_AT_MASKED_CLEAR (0x00000000u)

#define CSL_EMIFA_INTMSK_RESETVAL        (0x00000000u)

/* INTMSKSET */

#define CSL_EMIFA_INTMSKSET_AT_MASK_SET_MASK (0x00000001u)
#define CSL_EMIFA_INTMSKSET_AT_MASK_SET_SHIFT (0x00000000u)
#define CSL_EMIFA_INTMSKSET_AT_MASK_SET_RESETVAL (0x00000000u)

/*----AT_MASK_SET Tokens----*/
#define CSL_EMIFA_INTMSKSET_AT_MASK_SET_SET (0x00000001u)
#define CSL_EMIFA_INTMSKSET_AT_MASK_SET_CLEAR (0x00000000u)

#define CSL_EMIFA_INTMSKSET_RESETVAL     (0x00000000u)

/* INTMSKCLR */

#define CSL_EMIFA_INTMSKCLR_AT_MASK_CLR_MASK (0x00000001u)
#define CSL_EMIFA_INTMSKCLR_AT_MASK_CLR_SHIFT (0x00000000u)
#define CSL_EMIFA_INTMSKCLR_AT_MASK_CLR_RESETVAL (0x00000000u)

/*----AT_MASK_CLR Tokens----*/
#define CSL_EMIFA_INTMSKCLR_AT_MASK_CLR_SET (0x00000001u)
#define CSL_EMIFA_INTMSKCLR_AT_MASK_CLR_CLEAR (0x00000000u)

#define CSL_EMIFA_INTMSKCLR_RESETVAL     (0x00000000u)

/* CE2CFG when ssel=1 */

#define CSL_EMIFA_CE2CFG_SSEL_MASK       (0x80000000u)
#define CSL_EMIFA_CE2CFG_SSEL_SHIFT      (0x0000001Fu)
#define CSL_EMIFA_CE2CFG_SSEL_RESETVAL   (0x00000000u)

/*----SSEL Tokens----*/
#define CSL_EMIFA_CE2CFG_SSEL_SYNCMEM    (0x00000001u)
#define CSL_EMIFA_CE2CFG_SSEL_ASYNCMEM   (0x00000000u)

#define CSL_EMIFA_CE2CFG_RD_BE_EN_MASK   (0x00000400u)
#define CSL_EMIFA_CE2CFG_RD_BE_EN_SHIFT  (0x0000000Au)
#define CSL_EMIFA_CE2CFG_RD_BE_EN_RESETVAL (0x00000000u)

/*----RD_BE_EN Tokens----*/
#define CSL_EMIFA_CE2CFG_RD_BE_EN_SET    (0x00000001u)
#define CSL_EMIFA_CE2CFG_RD_BE_EN_CLR    (0x00000000u)

#define CSL_EMIFA_CE2CFG_CE_EXT_MASK     (0x00000200u)
#define CSL_EMIFA_CE2CFG_CE_EXT_SHIFT    (0x00000009u)
#define CSL_EMIFA_CE2CFG_CE_EXT_RESETVAL (0x00000000u)

/*----CE_EXT Tokens----*/
#define CSL_EMIFA_CE2CFG_CE_EXT_SET      (0x00000001u)
#define CSL_EMIFA_CE2CFG_CE_EXT_CLR      (0x00000000u)

#define CSL_EMIFA_CE2CFG_R_ENABLE_MASK   (0x00000100u)
#define CSL_EMIFA_CE2CFG_R_ENABLE_SHIFT  (0x00000008u)
#define CSL_EMIFA_CE2CFG_R_ENABLE_RESETVAL (0x00000000u)

/*----R_ENABLE Tokens----*/
#define CSL_EMIFA_CE2CFG_R_ENABLE_SET    (0x00000001u)
#define CSL_EMIFA_CE2CFG_R_ENABLE_CLR    (0x00000000u)

#define CSL_EMIFA_CE2CFG_W_LTNCY_MASK    (0x000000C0u)
#define CSL_EMIFA_CE2CFG_W_LTNCY_SHIFT   (0x00000006u)
#define CSL_EMIFA_CE2CFG_W_LTNCY_RESETVAL (0x00000000u)

/*----W_LTNCY Tokens----*/
#define CSL_EMIFA_CE2CFG_W_LTNCY_ZEROCYCLE (0x00000000u)
#define CSL_EMIFA_CE2CFG_W_LTNCY_ONECYCLE (0x00000001u)
#define CSL_EMIFA_CE2CFG_W_LTNCY_TWOCYCLE (0x00000002u)
#define CSL_EMIFA_CE2CFG_W_LTNCY_THREECYCLE (0x00000003u)

#define CSL_EMIFA_CE2CFG_R_LTNCY_MASK    (0x0000000Cu)
#define CSL_EMIFA_CE2CFG_R_LTNCY_SHIFT   (0x00000002u)
#define CSL_EMIFA_CE2CFG_R_LTNCY_RESETVAL (0x00000000u)

/*----R_LTNCY Tokens----*/
#define CSL_EMIFA_CE2CFG_R_LTNCY_ONECYCLE (0x00000001u)
#define CSL_EMIFA_CE2CFG_R_LTNCY_TWOCYCLE (0x00000002u)
#define CSL_EMIFA_CE2CFG_R_LTNCY_THREECYCLE (0x00000003u)

#define CSL_EMIFA_CE2CFG_SBSIZE_MASK     (0x00000003u)
#define CSL_EMIFA_CE2CFG_SBSIZE_SHIFT    (0x00000000u)
#define CSL_EMIFA_CE2CFG_SBSIZE_RESETVAL (0x00000000u)

/*----SBSIZE Tokens----*/
#define CSL_EMIFA_CE2CFG_SBSIZE_8BIT     (0x00000000u)
#define CSL_EMIFA_CE2CFG_SBSIZE_16BIT    (0x00000001u)
#define CSL_EMIFA_CE2CFG_SBSIZE_32BIT    (0x00000002u)
#define CSL_EMIFA_CE2CFG_SBSIZE_64BIT    (0x00000003u)

/* The default macro name CSL_EMIFA_CE2CFG_RESETVAL is changed to 
 * CSL_EMIFA_CE2CFG_SSEL1_RESETVAL
 */
#define CSL_EMIFA_CE2CFG_SSEL1_RESETVAL  (0x00000000u)

/* CE3CFG when ssel=1 */

#define CSL_EMIFA_CE3CFG_SSEL_MASK       (0x80000000u)
#define CSL_EMIFA_CE3CFG_SSEL_SHIFT      (0x0000001Fu)
#define CSL_EMIFA_CE3CFG_SSEL_RESETVAL   (0x00000000u)

/*----SSEL Tokens----*/
#define CSL_EMIFA_CE3CFG_SSEL_SYNCMEM    (0x00000001u)
#define CSL_EMIFA_CE3CFG_SSEL_ASYNCMEM   (0x00000000u)

#define CSL_EMIFA_CE3CFG_RD_BE_EN_MASK   (0x00000400u)
#define CSL_EMIFA_CE3CFG_RD_BE_EN_SHIFT  (0x0000000Au)
#define CSL_EMIFA_CE3CFG_RD_BE_EN_RESETVAL (0x00000000u)

/*----RD_BE_EN Tokens----*/
#define CSL_EMIFA_CE3CFG_RD_BE_EN_SET    (0x00000001u)
#define CSL_EMIFA_CE3CFG_RD_BE_EN_CLR    (0x00000000u)

#define CSL_EMIFA_CE3CFG_CE_EXT_MASK     (0x00000200u)
#define CSL_EMIFA_CE3CFG_CE_EXT_SHIFT    (0x00000009u)
#define CSL_EMIFA_CE3CFG_CE_EXT_RESETVAL (0x00000000u)

/*----CE_EXT Tokens----*/
#define CSL_EMIFA_CE3CFG_CE_EXT_SET      (0x00000001u)
#define CSL_EMIFA_CE3CFG_CE_EXT_CLR      (0x00000000u)

#define CSL_EMIFA_CE3CFG_R_ENABLE_MASK   (0x00000100u)
#define CSL_EMIFA_CE3CFG_R_ENABLE_SHIFT  (0x00000008u)
#define CSL_EMIFA_CE3CFG_R_ENABLE_RESETVAL (0x00000000u)

/*----R_ENABLE Tokens----*/
#define CSL_EMIFA_CE3CFG_R_ENABLE_SET    (0x00000001u)
#define CSL_EMIFA_CE3CFG_R_ENABLE_CLR    (0x00000000u)

#define CSL_EMIFA_CE3CFG_W_LTNCY_MASK    (0x000000C0u)
#define CSL_EMIFA_CE3CFG_W_LTNCY_SHIFT   (0x00000006u)
#define CSL_EMIFA_CE3CFG_W_LTNCY_RESETVAL (0x00000000u)

/*----W_LTNCY Tokens----*/
#define CSL_EMIFA_CE3CFG_W_LTNCY_ZEROCYCLE (0x00000000u)
#define CSL_EMIFA_CE3CFG_W_LTNCY_ONECYCLE (0x00000001u)
#define CSL_EMIFA_CE3CFG_W_LTNCY_TWOCYCLE (0x00000002u)
#define CSL_EMIFA_CE3CFG_W_LTNCY_THREECYCLE (0x00000003u)

#define CSL_EMIFA_CE3CFG_R_LTNCY_MASK    (0x0000000Cu)
#define CSL_EMIFA_CE3CFG_R_LTNCY_SHIFT   (0x00000002u)
#define CSL_EMIFA_CE3CFG_R_LTNCY_RESETVAL (0x00000000u)

/*----R_LTNCY Tokens----*/
#define CSL_EMIFA_CE3CFG_R_LTNCY_ONECYCLE (0x00000001u)
#define CSL_EMIFA_CE3CFG_R_LTNCY_TWOCYCLE (0x00000002u)
#define CSL_EMIFA_CE3CFG_R_LTNCY_THREECYCLE (0x00000003u)

#define CSL_EMIFA_CE3CFG_SBSIZE_MASK     (0x00000003u)
#define CSL_EMIFA_CE3CFG_SBSIZE_SHIFT    (0x00000000u)
#define CSL_EMIFA_CE3CFG_SBSIZE_RESETVAL (0x00000000u)

/*----SBSIZE Tokens----*/
#define CSL_EMIFA_CE3CFG_SBSIZE_8BIT     (0x00000000u)
#define CSL_EMIFA_CE3CFG_SBSIZE_16BIT    (0x00000001u)
#define CSL_EMIFA_CE3CFG_SBSIZE_32BIT    (0x00000002u)
#define CSL_EMIFA_CE3CFG_SBSIZE_64BIT    (0x00000003u)

/* The default macro name CSL_EMIFA_CE3CFG_RESETVAL is changed to 
 * CSL_EMIFA_CE3CFG_SSEL1_RESETVAL
 */
#define CSL_EMIFA_CE3CFG_SSEL1_RESETVAL  (0x00000000u)

/* CE4CFG when ssel=1 */

#define CSL_EMIFA_CE4CFG_SSEL_MASK       (0x80000000u)
#define CSL_EMIFA_CE4CFG_SSEL_SHIFT      (0x0000001Fu)
#define CSL_EMIFA_CE4CFG_SSEL_RESETVAL   (0x00000000u)

/*----SSEL Tokens----*/
#define CSL_EMIFA_CE4CFG_SSEL_SYNCMEM    (0x00000001u)
#define CSL_EMIFA_CE4CFG_SSEL_ASYNCMEM   (0x00000000u)

#define CSL_EMIFA_CE4CFG_RD_BE_EN_MASK   (0x00000400u)
#define CSL_EMIFA_CE4CFG_RD_BE_EN_SHIFT  (0x0000000Au)
#define CSL_EMIFA_CE4CFG_RD_BE_EN_RESETVAL (0x00000000u)

/*----RD_BE_EN Tokens----*/
#define CSL_EMIFA_CE4CFG_RD_BE_EN_SET    (0x00000001u)
#define CSL_EMIFA_CE4CFG_RD_BE_EN_CLR    (0x00000000u)

#define CSL_EMIFA_CE4CFG_CE_EXT_MASK     (0x00000200u)
#define CSL_EMIFA_CE4CFG_CE_EXT_SHIFT    (0x00000009u)
#define CSL_EMIFA_CE4CFG_CE_EXT_RESETVAL (0x00000000u)

/*----CE_EXT Tokens----*/
#define CSL_EMIFA_CE4CFG_CE_EXT_SET      (0x00000001u)
#define CSL_EMIFA_CE4CFG_CE_EXT_CLR      (0x00000000u)

#define CSL_EMIFA_CE4CFG_R_ENABLE_MASK   (0x00000100u)
#define CSL_EMIFA_CE4CFG_R_ENABLE_SHIFT  (0x00000008u)
#define CSL_EMIFA_CE4CFG_R_ENABLE_RESETVAL (0x00000000u)

/*----R_ENABLE Tokens----*/
#define CSL_EMIFA_CE4CFG_R_ENABLE_SET    (0x00000001u)
#define CSL_EMIFA_CE4CFG_R_ENABLE_CLR    (0x00000000u)

#define CSL_EMIFA_CE4CFG_W_LTNCY_MASK    (0x000000C0u)
#define CSL_EMIFA_CE4CFG_W_LTNCY_SHIFT   (0x00000006u)
#define CSL_EMIFA_CE4CFG_W_LTNCY_RESETVAL (0x00000000u)

/*----W_LTNCY Tokens----*/
#define CSL_EMIFA_CE4CFG_W_LTNCY_ZEROCYCLE (0x00000000u)
#define CSL_EMIFA_CE4CFG_W_LTNCY_ONECYCLE (0x00000001u)
#define CSL_EMIFA_CE4CFG_W_LTNCY_TWOCYCLE (0x00000002u)
#define CSL_EMIFA_CE4CFG_W_LTNCY_THREECYCLE (0x00000003u)

#define CSL_EMIFA_CE4CFG_R_LTNCY_MASK    (0x0000000Cu)
#define CSL_EMIFA_CE4CFG_R_LTNCY_SHIFT   (0x00000002u)
#define CSL_EMIFA_CE4CFG_R_LTNCY_RESETVAL (0x00000000u)

/*----R_LTNCY Tokens----*/
#define CSL_EMIFA_CE4CFG_R_LTNCY_ONECYCLE (0x00000001u)
#define CSL_EMIFA_CE4CFG_R_LTNCY_TWOCYCLE (0x00000002u)
#define CSL_EMIFA_CE4CFG_R_LTNCY_THREECYCLE (0x00000003u)

#define CSL_EMIFA_CE4CFG_SBSIZE_MASK     (0x00000003u)
#define CSL_EMIFA_CE4CFG_SBSIZE_SHIFT    (0x00000000u)
#define CSL_EMIFA_CE4CFG_SBSIZE_RESETVAL (0x00000000u)

/*----SBSIZE Tokens----*/
#define CSL_EMIFA_CE4CFG_SBSIZE_8BIT     (0x00000000u)
#define CSL_EMIFA_CE4CFG_SBSIZE_16BIT    (0x00000001u)
#define CSL_EMIFA_CE4CFG_SBSIZE_32BIT    (0x00000002u)
#define CSL_EMIFA_CE4CFG_SBSIZE_64BIT    (0x00000003u)

/* The default macro name CSL_EMIFA_CE4CFG_RESETVAL is changed to 
 * CSL_EMIFA_CE4CFG_SSEL1_RESETVAL
 */
#define CSL_EMIFA_CE4CFG_SSEL1_RESETVAL  (0x00000000u)

/* CE5CFG when ssel=1*/

#define CSL_EMIFA_CE5CFG_SSEL_MASK       (0x80000000u)
#define CSL_EMIFA_CE5CFG_SSEL_SHIFT      (0x0000001Fu)
#define CSL_EMIFA_CE5CFG_SSEL_RESETVAL   (0x00000000u)

/*----SSEL Tokens----*/
#define CSL_EMIFA_CE5CFG_SSEL_SYNCMEM    (0x00000001u)
#define CSL_EMIFA_CE5CFG_SSEL_ASYNCMEM   (0x00000000u)

#define CSL_EMIFA_CE5CFG_RD_BE_EN_MASK   (0x00000400u)
#define CSL_EMIFA_CE5CFG_RD_BE_EN_SHIFT  (0x0000000Au)
#define CSL_EMIFA_CE5CFG_RD_BE_EN_RESETVAL (0x00000000u)

/*----RD_BE_EN Tokens----*/
#define CSL_EMIFA_CE5CFG_RD_BE_EN_SET    (0x00000001u)
#define CSL_EMIFA_CE5CFG_RD_BE_EN_CLR    (0x00000000u)

#define CSL_EMIFA_CE5CFG_CE_EXT_MASK     (0x00000200u)
#define CSL_EMIFA_CE5CFG_CE_EXT_SHIFT    (0x00000009u)
#define CSL_EMIFA_CE5CFG_CE_EXT_RESETVAL (0x00000000u)

/*----CE_EXT Tokens----*/
#define CSL_EMIFA_CE5CFG_CE_EXT_SET      (0x00000001u)
#define CSL_EMIFA_CE5CFG_CE_EXT_CLR      (0x00000000u)

#define CSL_EMIFA_CE5CFG_R_ENABLE_MASK   (0x00000100u)
#define CSL_EMIFA_CE5CFG_R_ENABLE_SHIFT  (0x00000008u)
#define CSL_EMIFA_CE5CFG_R_ENABLE_RESETVAL (0x00000000u)

/*----R_ENABLE Tokens----*/
#define CSL_EMIFA_CE5CFG_R_ENABLE_SET    (0x00000001u)
#define CSL_EMIFA_CE5CFG_R_ENABLE_CLR    (0x00000000u)

#define CSL_EMIFA_CE5CFG_W_LTNCY_MASK    (0x000000C0u)
#define CSL_EMIFA_CE5CFG_W_LTNCY_SHIFT   (0x00000006u)
#define CSL_EMIFA_CE5CFG_W_LTNCY_RESETVAL (0x00000000u)

/*----W_LTNCY Tokens----*/
#define CSL_EMIFA_CE5CFG_W_LTNCY_ZEROCYCLE (0x00000000u)
#define CSL_EMIFA_CE5CFG_W_LTNCY_ONECYCLE (0x00000001u)
#define CSL_EMIFA_CE5CFG_W_LTNCY_TWOCYCLE (0x00000002u)
#define CSL_EMIFA_CE5CFG_W_LTNCY_THREECYCLE (0x00000003u)

#define CSL_EMIFA_CE5CFG_R_LTNCY_MASK    (0x0000000Cu)
#define CSL_EMIFA_CE5CFG_R_LTNCY_SHIFT   (0x00000002u)
#define CSL_EMIFA_CE5CFG_R_LTNCY_RESETVAL (0x00000000u)

/*----R_LTNCY Tokens----*/
#define CSL_EMIFA_CE5CFG_R_LTNCY_ONECYCLE (0x00000001u)
#define CSL_EMIFA_CE5CFG_R_LTNCY_TWOCYCLE (0x00000002u)
#define CSL_EMIFA_CE5CFG_R_LTNCY_THREECYCLE (0x00000003u)

#define CSL_EMIFA_CE5CFG_SBSIZE_MASK     (0x00000003u)
#define CSL_EMIFA_CE5CFG_SBSIZE_SHIFT    (0x00000000u)
#define CSL_EMIFA_CE5CFG_SBSIZE_RESETVAL (0x00000000u)

/*----SBSIZE Tokens----*/
#define CSL_EMIFA_CE5CFG_SBSIZE_8BIT     (0x00000000u)
#define CSL_EMIFA_CE5CFG_SBSIZE_16BIT    (0x00000001u)
#define CSL_EMIFA_CE5CFG_SBSIZE_32BIT    (0x00000002u)
#define CSL_EMIFA_CE5CFG_SBSIZE_64BIT    (0x00000003u)

/* The default macro name CSL_EMIFA_CE5CFG_RESETVAL is changed to 
 * CSL_EMIFA_CE5CFG_SSEL1_RESETVAL
 */
#define CSL_EMIFA_CE5CFG_SSEL1_RESETVAL  (0x00000000u)


#endif
