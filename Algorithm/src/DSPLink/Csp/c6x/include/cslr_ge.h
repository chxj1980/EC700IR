#ifndef _CSLR_GE_010_H_
#define _CSLR_GE_010_H_

#include <cslr.h>

#include "tistdtypes.h"


/* Minimum unit = 4 bytes */

/**************************************************************************\
* Register Overlay Structure
\**************************************************************************/
typedef struct  {
    volatile Uint32 PID;
    volatile Uint32 CTRL;
    volatile Uint32 INTEN;
    volatile Uint32 INTEN_SET;
    volatile Uint32 INTEN_CLR;
    volatile Uint32 STATUS;
    volatile Uint32 STAT_CLR;
    volatile Uint32 EMUL_CTRL;
    volatile Uint32 SDR_FMT;
    volatile Uint32 REQ_SZ;
    volatile Uint32 RSVD0[6];
    volatile Uint32 SRC_STRT_ADD_YTOP;
    volatile Uint32 SRC_SP_HSZ_YTOP;
    volatile Uint32 SRC_ADD_OFST_YTOP;
    volatile Uint32 SRC_STRT_ADD_YBTM;
    volatile Uint32 SRC_SP_HSZ_YBTM;
    volatile Uint32 SRC_ADD_OFST_YBTM;
    volatile Uint32 SRC_STRT_ADD_CTOP;
    volatile Uint32 SRC_SP_HSZ_CTOP;
    volatile Uint32 SRC_ADD_OFST_CTOP;
    volatile Uint32 SRC_STRT_ADD_CBTM;
    volatile Uint32 SRC_SP_HSZ_CBTM;
    volatile Uint32 SRC_ADD_OFST_CBTM;
    volatile Uint32 SRC_STRT_ADD_BMP_TOP;
    volatile Uint32 SRC_ADD_OFST_BMP_TOP;
    volatile Uint32 SRC_STRT_ADD_BMP_BTM;
    volatile Uint32 SRC_ADD_OFST_BMP_BTM;
    volatile Uint32 RES_STRT_ADD_YTOP;
    volatile Uint32 RES_SP_HSZ_YTOP;
    volatile Uint32 RES_ADD_OFST_YTOP;
    volatile Uint32 RES_STRT_ADD_YBTM;
    volatile Uint32 RES_SP_HSZ_YBTM;
    volatile Uint32 RES_ADD_OFST_YBTM;
    volatile Uint32 RES_STRT_ADD_CTOP;
    volatile Uint32 RES_SP_HSZ_CTOP;
    volatile Uint32 RES_ADD_OFST_CTOP;
    volatile Uint32 RES_STRT_ADD_CBTM;
    volatile Uint32 RES_SP_HSZ_CBTM;
    volatile Uint32 RES_ADD_OFST_CBTM;
    volatile Uint32 RSVD1[4];
    volatile Uint32 SRC_Y_STRT_PS;
    volatile Uint32 SRC_Y_SZ;
    volatile Uint32 SRC_C_STRT_PS;
    volatile Uint32 SRC_C_SZ;
    volatile Uint32 SRC_BMP_STRT_PS;
    volatile Uint32 SRC_BMP_SZ;
    volatile Uint32 RSVD2[2];
    volatile Uint32 RES_Y_STRT_PS;
    volatile Uint32 RES_Y_SZ;
    volatile Uint32 RES_C_STRT_PS;
    volatile Uint32 RES_C_SZ;
    volatile Uint32 RES_BMP_STRT_PS;
    volatile Uint32 RSVD3[3];
    volatile Uint32 RSZ_MODE;
    volatile Uint32 RSZ_H_MAG;
    volatile Uint32 RSZ_V_MAG;
    volatile Uint32 RSZ_H_PHASE;
    volatile Uint32 RSZ_V_PHASE;
    volatile Uint32 RSZ_INTNST;
    volatile Uint32 RSVD4[2];
    volatile Uint32 CCV_MD;
    volatile Uint32 RSVD5[7];
    volatile Uint32 BLD_LUT_00;
    volatile Uint32 BLD_LUT_01;
    volatile Uint32 BLD_LUT_02;
    volatile Uint32 BLD_LUT_03;
    volatile Uint32 RSVD6[4];
    volatile Uint32 RGMP_CTRL;
    volatile Uint32 RSVD7[7];
    volatile Uint32 EPD_CTRL;
    volatile Uint32 EPD_LUMA_WIDTH;
    volatile Uint32 EPD_CROMA_WIDTH;
} CSL_GeRegs;

/**************************************************************************\
* Field Definition Macros
\**************************************************************************/

/* PID */

#define CSL_GE_PID_SCHEME_MASK           (0xC0000000u)
#define CSL_GE_PID_SCHEME_SHIFT          (0x0000001Eu)
#define CSL_GE_PID_SCHEME_RESETVAL       (0x00000001u)


#define CSL_GE_PID_FUNC_MASK             (0x0FFF0000u)
#define CSL_GE_PID_FUNC_SHIFT            (0x00000010u)
#define CSL_GE_PID_FUNC_RESETVAL         (0x00000C09u)

#define CSL_GE_PID_RTL_MASK              (0x0000F800u)
#define CSL_GE_PID_RTL_SHIFT             (0x0000000Bu)
#define CSL_GE_PID_RTL_RESETVAL          (0x00000000u)

#define CSL_GE_PID_MAJOR_MASK            (0x00000700u)
#define CSL_GE_PID_MAJOR_SHIFT           (0x00000008u)
#define CSL_GE_PID_MAJOR_RESETVAL        (0x00000000u)

#define CSL_GE_PID_CUSTOM_MASK           (0x000000C0u)
#define CSL_GE_PID_CUSTOM_SHIFT          (0x00000006u)
#define CSL_GE_PID_CUSTOM_RESETVAL       (0x00000000u)

#define CSL_GE_PID_MINOR_MASK            (0x0000003Fu)
#define CSL_GE_PID_MINOR_SHIFT           (0x00000000u)
#define CSL_GE_PID_MINOR_RESETVAL        (0x00000000u)

#define CSL_GE_PID_RESETVAL              (0x4C090000u)

/* CTRL */


#define CSL_GE_CTRL_SRC_NIP_MASK         (0x00001000u)
#define CSL_GE_CTRL_SRC_NIP_SHIFT        (0x0000000Cu)
#define CSL_GE_CTRL_SRC_NIP_RESETVAL     (0x00000000u)
/*----SRC_NIP Tokens----*/
#define CSL_GE_CTRL_SRC_NIP_INTERLACE    (0x00000000u)
#define CSL_GE_CTRL_SRC_NIP_PROGRESSIVE  (0x00000001u)

#define CSL_GE_CTRL_BLD_EN_MASK          (0x00000800u)
#define CSL_GE_CTRL_BLD_EN_SHIFT         (0x0000000Bu)
#define CSL_GE_CTRL_BLD_EN_RESETVAL      (0x00000000u)
/*----BLD_EN Tokens----*/
#define CSL_GE_CTRL_BLD_EN_INACTIVATE    (0x00000000u)
#define CSL_GE_CTRL_BLD_EN_ACTIVATE      (0x00000001u)

#define CSL_GE_CTRL_CCV_EN_MASK          (0x00000400u)
#define CSL_GE_CTRL_CCV_EN_SHIFT         (0x0000000Au)
#define CSL_GE_CTRL_CCV_EN_RESETVAL      (0x00000000u)
/*----CCV_EN Tokens----*/
#define CSL_GE_CTRL_CCV_EN_INACTIVATE    (0x00000000u)
#define CSL_GE_CTRL_CCV_EN_ACTIVATE      (0x00000001u)

#define CSL_GE_CTRL_RGMP_EN_MASK         (0x00000200u)
#define CSL_GE_CTRL_RGMP_EN_SHIFT        (0x00000009u)
#define CSL_GE_CTRL_RGMP_EN_RESETVAL     (0x00000000u)
/*----RGMP_EN Tokens----*/
#define CSL_GE_CTRL_RGMP_EN_INACTIVATE   (0x00000000u)
#define CSL_GE_CTRL_RGMP_EN_ACTIVATE     (0x00000001u)

#define CSL_GE_CTRL_RSZ_EN_MASK          (0x00000100u)
#define CSL_GE_CTRL_RSZ_EN_SHIFT         (0x00000008u)
#define CSL_GE_CTRL_RSZ_EN_RESETVAL      (0x00000000u)
/*----RSZ_EN Tokens----*/
#define CSL_GE_CTRL_RSZ_EN_INACTIVATE    (0x00000000u)
#define CSL_GE_CTRL_RSZ_EN_ACTIVATE      (0x00000001u)


#define CSL_GE_CTRL_MODE_MASK            (0x00000030u)
#define CSL_GE_CTRL_MODE_SHIFT           (0x00000004u)
#define CSL_GE_CTRL_MODE_RESETVAL        (0x00000000u)
/*----MODE Tokens----*/
#define CSL_GE_CTRL_MODE_EDGE_PAD        (0x00000000u)
#define CSL_GE_CTRL_MODE_TRANS_CODE      (0x00000001u)
#define CSL_GE_CTRL_MODE_PRE_CODEC       (0x00000002u)
#define CSL_GE_CTRL_MODE_POST_CODEC      (0x00000003u)


#define CSL_GE_CTRL_CROMA_EN_MASK        (0x00000004u)
#define CSL_GE_CTRL_CROMA_EN_SHIFT       (0x00000002u)
#define CSL_GE_CTRL_CROMA_EN_RESETVAL    (0x00000000u)
/*----CROMA_EN Tokens----*/
#define CSL_GE_CTRL_CROMA_EN_DISABLE     (0x00000000u)
#define CSL_GE_CTRL_CROMA_EN_ENABLE      (0x00000001u)

#define CSL_GE_CTRL_LUMA_EN_MASK         (0x00000002u)
#define CSL_GE_CTRL_LUMA_EN_SHIFT        (0x00000001u)
#define CSL_GE_CTRL_LUMA_EN_RESETVAL     (0x00000000u)
/*----LUMA_EN Tokens----*/
#define CSL_GE_CTRL_LUMA_EN_DISABLE      (0x00000000u)
#define CSL_GE_CTRL_LUMA_EN_ENABLE       (0x00000001u)

#define CSL_GE_CTRL_GO_MASK              (0x00000001u)
#define CSL_GE_CTRL_GO_SHIFT             (0x00000000u)
#define CSL_GE_CTRL_GO_RESETVAL          (0x00000000u)
/*----GO Tokens----*/
#define CSL_GE_CTRL_GO_IDLE              (0x00000000u)
#define CSL_GE_CTRL_GO_BUSY              (0x00000001u)

#define CSL_GE_CTRL_RESETVAL             (0x00000000u)

/* INTEN */


#define CSL_GE_INTEN_INTEN_MASK          (0x00000001u)
#define CSL_GE_INTEN_INTEN_SHIFT         (0x00000000u)
#define CSL_GE_INTEN_INTEN_RESETVAL      (0x00000000u)
/*----INTEN Tokens----*/
#define CSL_GE_INTEN_INTEN_DISABLE       (0x00000000u)
#define CSL_GE_INTEN_INTEN_ENABLE        (0x00000001u)

#define CSL_GE_INTEN_RESETVAL            (0x00000000u)

/* INTEN_SET */


#define CSL_GE_INTEN_SET_SET_MASK        (0x00000001u)
#define CSL_GE_INTEN_SET_SET_SHIFT       (0x00000000u)
#define CSL_GE_INTEN_SET_SET_RESETVAL    (0x00000000u)
/*----SET Tokens----*/
#define CSL_GE_INTEN_SET_SET_INACTIVATE  (0x00000000u)
#define CSL_GE_INTEN_SET_SET_ACTIVATE    (0x00000001u)

#define CSL_GE_INTEN_SET_RESETVAL        (0x00000000u)

/* INTEN_CLR */


#define CSL_GE_INTEN_CLR_CLR_MASK        (0x00000001u)
#define CSL_GE_INTEN_CLR_CLR_SHIFT       (0x00000000u)
#define CSL_GE_INTEN_CLR_CLR_RESETVAL    (0x00000000u)
/*----CLR Tokens----*/
#define CSL_GE_INTEN_CLR_CLR_NO_CHANGE   (0x00000000u)
#define CSL_GE_INTEN_CLR_CLR_INACTIVATE  (0x00000001u)

#define CSL_GE_INTEN_CLR_RESETVAL        (0x00000000u)

/* STATUS */


#define CSL_GE_STATUS_STATUS_MASK        (0x00000001u)
#define CSL_GE_STATUS_STATUS_SHIFT       (0x00000000u)
#define CSL_GE_STATUS_STATUS_RESETVAL    (0x00000000u)
/*----STATUS Tokens----*/
#define CSL_GE_STATUS_STATUS_PROCESS     (0x00000000u)
#define CSL_GE_STATUS_STATUS_FINISHED    (0x00000001u)

#define CSL_GE_STATUS_RESETVAL           (0x00000000u)

/* STAT_CLR */


#define CSL_GE_STAT_CLR_CLR_MASK         (0x00000001u)
#define CSL_GE_STAT_CLR_CLR_SHIFT        (0x00000000u)
#define CSL_GE_STAT_CLR_CLR_RESETVAL     (0x00000000u)
/*----CLR Tokens----*/
#define CSL_GE_STAT_CLR_CLR_NO_CHANGE    (0x00000000u)
#define CSL_GE_STAT_CLR_CLR_STAT_CLR     (0x00000001u)

#define CSL_GE_STAT_CLR_RESETVAL         (0x00000000u)

/* EMUL_CTRL */


#define CSL_GE_EMUL_CTRL_SUSP_SOFT_MASK  (0x00000002u)
#define CSL_GE_EMUL_CTRL_SUSP_SOFT_SHIFT (0x00000001u)
#define CSL_GE_EMUL_CTRL_SUSP_SOFT_RESETVAL (0x00000001u)
/*----SUSP_SOFT Tokens----*/
#define CSL_GE_EMUL_CTRL_SUSP_SOFT_HDSTP (0x00000000u)
#define CSL_GE_EMUL_CTRL_SUSP_SOFT_SFSTP (0x00000001u)

#define CSL_GE_EMUL_CTRL_SUSP_FREE_MASK  (0x00000001u)
#define CSL_GE_EMUL_CTRL_SUSP_FREE_SHIFT (0x00000000u)
#define CSL_GE_EMUL_CTRL_SUSP_FREE_RESETVAL (0x00000000u)
/*----SUSP_FREE Tokens----*/
#define CSL_GE_EMUL_CTRL_SUSP_FREE_SUSP_SOFT (0x00000000u)
#define CSL_GE_EMUL_CTRL_SUSP_FREE_IGNORE (0x00000001u)

#define CSL_GE_EMUL_CTRL_RESETVAL        (0x00000002u)

/* SDR_FMT */


#define CSL_GE_SDR_FMT_RES_MASK          (0x00000002u)
#define CSL_GE_SDR_FMT_RES_SHIFT         (0x00000001u)
#define CSL_GE_SDR_FMT_RES_RESETVAL      (0x00000000u)
/*----RES Tokens----*/
#define CSL_GE_SDR_FMT_RES_RASTER_MODE   (0x00000000u)
#define CSL_GE_SDR_FMT_RES_SUBPIC_MODE   (0x00000001u)

#define CSL_GE_SDR_FMT_SRC_MASK          (0x00000001u)
#define CSL_GE_SDR_FMT_SRC_SHIFT         (0x00000000u)
#define CSL_GE_SDR_FMT_SRC_RESETVAL      (0x00000000u)
/*----SRC Tokens----*/
#define CSL_GE_SDR_FMT_SRC_RASTER_MODE   (0x00000000u)
#define CSL_GE_SDR_FMT_SRC_SUBPIC_MODE   (0x00000001u)

#define CSL_GE_SDR_FMT_RESETVAL          (0x00000000u)

/* REQ_SZ */


#define CSL_GE_REQ_SZ_REQ_SZ_MASK        (0x000001FFu)
#define CSL_GE_REQ_SZ_REQ_SZ_SHIFT       (0x00000000u)
#define CSL_GE_REQ_SZ_REQ_SZ_RESETVAL    (0x00000000u)
/*----REQ_SZ Tokens----*/
#define CSL_GE_REQ_SZ_REQ_SZ_BYTE_32     (0x00000020u)
#define CSL_GE_REQ_SZ_REQ_SZ_BYTE_64     (0x00000040u)
#define CSL_GE_REQ_SZ_REQ_SZ_BYTE_128    (0x00000080u)
#define CSL_GE_REQ_SZ_REQ_SZ_BYTE_256    (0x00000100u)

#define CSL_GE_REQ_SZ_RESETVAL           (0x00000000u)

/* SRC_STRT_ADD_YTOP */

#define CSL_GE_SRC_STRT_ADD_YTOP_ST_ADD_MASK (0xFFFFFFFFu)
#define CSL_GE_SRC_STRT_ADD_YTOP_ST_ADD_SHIFT (0x00000000u)
#define CSL_GE_SRC_STRT_ADD_YTOP_ST_ADD_RESETVAL (0x00000000u)

#define CSL_GE_SRC_STRT_ADD_YTOP_RESETVAL (0x00000000u)

/* SRC_SP_HSZ_YTOP */


#define CSL_GE_SRC_SP_HSZ_YTOP_SP_HSZ_MASK (0x000001FFu)
#define CSL_GE_SRC_SP_HSZ_YTOP_SP_HSZ_SHIFT (0x00000000u)
#define CSL_GE_SRC_SP_HSZ_YTOP_SP_HSZ_RESETVAL (0x00000000u)
/*----SP_HSZ Tokens----*/
#define CSL_GE_SRC_SP_HSZ_YTOP_SP_HSZ_PIX_16 (0x00000010u)
#define CSL_GE_SRC_SP_HSZ_YTOP_SP_HSZ_PIX_32 (0x00000020u)
#define CSL_GE_SRC_SP_HSZ_YTOP_SP_HSZ_PIX_64 (0x00000040u)
#define CSL_GE_SRC_SP_HSZ_YTOP_SP_HSZ_PIX_128 (0x00000080u)
#define CSL_GE_SRC_SP_HSZ_YTOP_SP_HSZ_PIX_256 (0x00000100u)

#define CSL_GE_SRC_SP_HSZ_YTOP_RESETVAL  (0x00000000u)

/* SRC_ADD_OFST_YTOP */

#define CSL_GE_SRC_ADD_OFST_YTOP_ADD_OFST_MASK (0xFFFFFFFFu)
#define CSL_GE_SRC_ADD_OFST_YTOP_ADD_OFST_SHIFT (0x00000000u)
#define CSL_GE_SRC_ADD_OFST_YTOP_ADD_OFST_RESETVAL (0x00000000u)

#define CSL_GE_SRC_ADD_OFST_YTOP_RESETVAL (0x00000000u)

/* SRC_STRT_ADD_YBTM */

#define CSL_GE_SRC_STRT_ADD_YBTM_ST_ADD_MASK (0xFFFFFFFFu)
#define CSL_GE_SRC_STRT_ADD_YBTM_ST_ADD_SHIFT (0x00000000u)
#define CSL_GE_SRC_STRT_ADD_YBTM_ST_ADD_RESETVAL (0x00000000u)

#define CSL_GE_SRC_STRT_ADD_YBTM_RESETVAL (0x00000000u)

/* SRC_SP_HSZ_YBTM */


#define CSL_GE_SRC_SP_HSZ_YBTM_SP_HSZ_MASK (0x000001FFu)
#define CSL_GE_SRC_SP_HSZ_YBTM_SP_HSZ_SHIFT (0x00000000u)
#define CSL_GE_SRC_SP_HSZ_YBTM_SP_HSZ_RESETVAL (0x00000000u)
/*----SP_HSZ Tokens----*/
#define CSL_GE_SRC_SP_HSZ_YBTM_SP_HSZ_PIX_16 (0x00000010u)
#define CSL_GE_SRC_SP_HSZ_YBTM_SP_HSZ_PIX_32 (0x00000020u)
#define CSL_GE_SRC_SP_HSZ_YBTM_SP_HSZ_PIX_64 (0x00000040u)
#define CSL_GE_SRC_SP_HSZ_YBTM_SP_HSZ_PIX_128 (0x00000080u)
#define CSL_GE_SRC_SP_HSZ_YBTM_SP_HSZ_PIX_256 (0x00000100u)

#define CSL_GE_SRC_SP_HSZ_YBTM_RESETVAL  (0x00000000u)

/* SRC_ADD_OFST_YBTM */

#define CSL_GE_SRC_ADD_OFST_YBTM_ADD_OFST_MASK (0xFFFFFFFFu)
#define CSL_GE_SRC_ADD_OFST_YBTM_ADD_OFST_SHIFT (0x00000000u)
#define CSL_GE_SRC_ADD_OFST_YBTM_ADD_OFST_RESETVAL (0x00000000u)

#define CSL_GE_SRC_ADD_OFST_YBTM_RESETVAL (0x00000000u)

/* SRC_STRT_ADD_CTOP */

#define CSL_GE_SRC_STRT_ADD_CTOP_ST_ADD_MASK (0xFFFFFFFFu)
#define CSL_GE_SRC_STRT_ADD_CTOP_ST_ADD_SHIFT (0x00000000u)
#define CSL_GE_SRC_STRT_ADD_CTOP_ST_ADD_RESETVAL (0x00000000u)

#define CSL_GE_SRC_STRT_ADD_CTOP_RESETVAL (0x00000000u)

/* SRC_SP_HSZ_CTOP */


#define CSL_GE_SRC_SP_HSZ_CTOP_SP_HSZ_MASK (0x000001FFu)
#define CSL_GE_SRC_SP_HSZ_CTOP_SP_HSZ_SHIFT (0x00000000u)
#define CSL_GE_SRC_SP_HSZ_CTOP_SP_HSZ_RESETVAL (0x00000000u)
/*----SP_HSZ Tokens----*/
#define CSL_GE_SRC_SP_HSZ_CTOP_SP_HSZ_PIX_16 (0x00000010u)
#define CSL_GE_SRC_SP_HSZ_CTOP_SP_HSZ_PIX_32 (0x00000020u)
#define CSL_GE_SRC_SP_HSZ_CTOP_SP_HSZ_PIX_64 (0x00000040u)
#define CSL_GE_SRC_SP_HSZ_CTOP_SP_HSZ_PIX_128 (0x00000080u)
#define CSL_GE_SRC_SP_HSZ_CTOP_SP_HSZ_PIX_256 (0x00000100u)

#define CSL_GE_SRC_SP_HSZ_CTOP_RESETVAL  (0x00000000u)

/* SRC_ADD_OFST_CTOP */

#define CSL_GE_SRC_ADD_OFST_CTOP_ADD_OFST_MASK (0xFFFFFFFFu)
#define CSL_GE_SRC_ADD_OFST_CTOP_ADD_OFST_SHIFT (0x00000000u)
#define CSL_GE_SRC_ADD_OFST_CTOP_ADD_OFST_RESETVAL (0x00000000u)

#define CSL_GE_SRC_ADD_OFST_CTOP_RESETVAL (0x00000000u)

/* SRC_STRT_ADD_CBTM */

#define CSL_GE_SRC_STRT_ADD_CBTM_ST_ADD_MASK (0xFFFFFFFFu)
#define CSL_GE_SRC_STRT_ADD_CBTM_ST_ADD_SHIFT (0x00000000u)
#define CSL_GE_SRC_STRT_ADD_CBTM_ST_ADD_RESETVAL (0x00000000u)

#define CSL_GE_SRC_STRT_ADD_CBTM_RESETVAL (0x00000000u)

/* SRC_SP_HSZ_CBTM */


#define CSL_GE_SRC_SP_HSZ_CBTM_SP_HSZ_MASK (0x000001FFu)
#define CSL_GE_SRC_SP_HSZ_CBTM_SP_HSZ_SHIFT (0x00000000u)
#define CSL_GE_SRC_SP_HSZ_CBTM_SP_HSZ_RESETVAL (0x00000000u)
/*----SP_HSZ Tokens----*/
#define CSL_GE_SRC_SP_HSZ_CBTM_SP_HSZ_PIX_16 (0x00000010u)
#define CSL_GE_SRC_SP_HSZ_CBTM_SP_HSZ_PIX_32 (0x00000020u)
#define CSL_GE_SRC_SP_HSZ_CBTM_SP_HSZ_PIX_64 (0x00000040u)
#define CSL_GE_SRC_SP_HSZ_CBTM_SP_HSZ_PIX_128 (0x00000080u)
#define CSL_GE_SRC_SP_HSZ_CBTM_SP_HSZ_PIX_256 (0x00000100u)

#define CSL_GE_SRC_SP_HSZ_CBTM_RESETVAL  (0x00000000u)

/* SRC_ADD_OFST_CBTM */

#define CSL_GE_SRC_ADD_OFST_CBTM_ADD_OFST_MASK (0xFFFFFFFFu)
#define CSL_GE_SRC_ADD_OFST_CBTM_ADD_OFST_SHIFT (0x00000000u)
#define CSL_GE_SRC_ADD_OFST_CBTM_ADD_OFST_RESETVAL (0x00000000u)

#define CSL_GE_SRC_ADD_OFST_CBTM_RESETVAL (0x00000000u)

/* SRC_STRT_ADD_BMP_TOP */

#define CSL_GE_SRC_STRT_ADD_BMP_TOP_ST_ADD_MASK (0xFFFFFFFFu)
#define CSL_GE_SRC_STRT_ADD_BMP_TOP_ST_ADD_SHIFT (0x00000000u)
#define CSL_GE_SRC_STRT_ADD_BMP_TOP_ST_ADD_RESETVAL (0x00000000u)

#define CSL_GE_SRC_STRT_ADD_BMP_TOP_RESETVAL (0x00000000u)

/* SRC_ADD_OFST_BMP_TOP */

#define CSL_GE_SRC_ADD_OFST_BMP_TOP_ADD_OFST_MASK (0xFFFFFFFFu)
#define CSL_GE_SRC_ADD_OFST_BMP_TOP_ADD_OFST_SHIFT (0x00000000u)
#define CSL_GE_SRC_ADD_OFST_BMP_TOP_ADD_OFST_RESETVAL (0x00000000u)

#define CSL_GE_SRC_ADD_OFST_BMP_TOP_RESETVAL (0x00000000u)

/* SRC_STRT_ADD_BMP_BTM */

#define CSL_GE_SRC_STRT_ADD_BMP_BTM_ST_ADD_MASK (0xFFFFFFFFu)
#define CSL_GE_SRC_STRT_ADD_BMP_BTM_ST_ADD_SHIFT (0x00000000u)
#define CSL_GE_SRC_STRT_ADD_BMP_BTM_ST_ADD_RESETVAL (0x00000000u)

#define CSL_GE_SRC_STRT_ADD_BMP_BTM_RESETVAL (0x00000000u)

/* SRC_ADD_OFST_BMP_BTM */

#define CSL_GE_SRC_ADD_OFST_BMP_BTM_ADD_OFST_MASK (0xFFFFFFFFu)
#define CSL_GE_SRC_ADD_OFST_BMP_BTM_ADD_OFST_SHIFT (0x00000000u)
#define CSL_GE_SRC_ADD_OFST_BMP_BTM_ADD_OFST_RESETVAL (0x00000000u)

#define CSL_GE_SRC_ADD_OFST_BMP_BTM_RESETVAL (0x00000000u)

/* RES_STRT_ADD_YTOP */

#define CSL_GE_RES_STRT_ADD_YTOP_ST_ADD_MASK (0xFFFFFFFFu)
#define CSL_GE_RES_STRT_ADD_YTOP_ST_ADD_SHIFT (0x00000000u)
#define CSL_GE_RES_STRT_ADD_YTOP_ST_ADD_RESETVAL (0x00000000u)

#define CSL_GE_RES_STRT_ADD_YTOP_RESETVAL (0x00000000u)

/* RES_SP_HSZ_YTOP */


#define CSL_GE_RES_SP_HSZ_YTOP_SP_HSZ_MASK (0x000001FFu)
#define CSL_GE_RES_SP_HSZ_YTOP_SP_HSZ_SHIFT (0x00000000u)
#define CSL_GE_RES_SP_HSZ_YTOP_SP_HSZ_RESETVAL (0x00000000u)
/*----SP_HSZ Tokens----*/
#define CSL_GE_RES_SP_HSZ_YTOP_SP_HSZ_PIX_16 (0x00000010u)
#define CSL_GE_RES_SP_HSZ_YTOP_SP_HSZ_PIX_32 (0x00000020u)
#define CSL_GE_RES_SP_HSZ_YTOP_SP_HSZ_PIX_64 (0x00000040u)
#define CSL_GE_RES_SP_HSZ_YTOP_SP_HSZ_PIX_128 (0x00000080u)
#define CSL_GE_RES_SP_HSZ_YTOP_SP_HSZ_PIX_256 (0x00000100u)

#define CSL_GE_RES_SP_HSZ_YTOP_RESETVAL  (0x00000000u)

/* RES_ADD_OFST_YTOP */

#define CSL_GE_RES_ADD_OFST_YTOP_ADD_OFST_MASK (0xFFFFFFFFu)
#define CSL_GE_RES_ADD_OFST_YTOP_ADD_OFST_SHIFT (0x00000000u)
#define CSL_GE_RES_ADD_OFST_YTOP_ADD_OFST_RESETVAL (0x00000000u)

#define CSL_GE_RES_ADD_OFST_YTOP_RESETVAL (0x00000000u)

/* RES_STRT_ADD_YBTM */

#define CSL_GE_RES_STRT_ADD_YBTM_ST_ADD_MASK (0xFFFFFFFFu)
#define CSL_GE_RES_STRT_ADD_YBTM_ST_ADD_SHIFT (0x00000000u)
#define CSL_GE_RES_STRT_ADD_YBTM_ST_ADD_RESETVAL (0x00000000u)

#define CSL_GE_RES_STRT_ADD_YBTM_RESETVAL (0x00000000u)

/* RES_SP_HSZ_YBTM */


#define CSL_GE_RES_SP_HSZ_YBTM_SP_HSZ_MASK (0x000001FFu)
#define CSL_GE_RES_SP_HSZ_YBTM_SP_HSZ_SHIFT (0x00000000u)
#define CSL_GE_RES_SP_HSZ_YBTM_SP_HSZ_RESETVAL (0x00000000u)
/*----SP_HSZ Tokens----*/
#define CSL_GE_RES_SP_HSZ_YBTM_SP_HSZ_PIX_16 (0x00000010u)
#define CSL_GE_RES_SP_HSZ_YBTM_SP_HSZ_PIX_32 (0x00000020u)
#define CSL_GE_RES_SP_HSZ_YBTM_SP_HSZ_PIX_64 (0x00000040u)
#define CSL_GE_RES_SP_HSZ_YBTM_SP_HSZ_PIX_128 (0x00000080u)
#define CSL_GE_RES_SP_HSZ_YBTM_SP_HSZ_PIX_256 (0x00000100u)

#define CSL_GE_RES_SP_HSZ_YBTM_RESETVAL  (0x00000000u)

/* RES_ADD_OFST_YBTM */

#define CSL_GE_RES_ADD_OFST_YBTM_ADD_OFST_MASK (0xFFFFFFFFu)
#define CSL_GE_RES_ADD_OFST_YBTM_ADD_OFST_SHIFT (0x00000000u)
#define CSL_GE_RES_ADD_OFST_YBTM_ADD_OFST_RESETVAL (0x00000000u)

#define CSL_GE_RES_ADD_OFST_YBTM_RESETVAL (0x00000000u)

/* RES_STRT_ADD_CTOP */

#define CSL_GE_RES_STRT_ADD_CTOP_ST_ADD_MASK (0xFFFFFFFFu)
#define CSL_GE_RES_STRT_ADD_CTOP_ST_ADD_SHIFT (0x00000000u)
#define CSL_GE_RES_STRT_ADD_CTOP_ST_ADD_RESETVAL (0x00000000u)

#define CSL_GE_RES_STRT_ADD_CTOP_RESETVAL (0x00000000u)

/* RES_SP_HSZ_CTOP */


#define CSL_GE_RES_SP_HSZ_CTOP_SP_HSZ_MASK (0x000001FFu)
#define CSL_GE_RES_SP_HSZ_CTOP_SP_HSZ_SHIFT (0x00000000u)
#define CSL_GE_RES_SP_HSZ_CTOP_SP_HSZ_RESETVAL (0x00000000u)
/*----SP_HSZ Tokens----*/
#define CSL_GE_RES_SP_HSZ_CTOP_SP_HSZ_PIX_16 (0x00000010u)
#define CSL_GE_RES_SP_HSZ_CTOP_SP_HSZ_PIX_32 (0x00000020u)
#define CSL_GE_RES_SP_HSZ_CTOP_SP_HSZ_PIX_64 (0x00000040u)
#define CSL_GE_RES_SP_HSZ_CTOP_SP_HSZ_PIX_128 (0x00000080u)
#define CSL_GE_RES_SP_HSZ_CTOP_SP_HSZ_PIX_256 (0x00000100u)

#define CSL_GE_RES_SP_HSZ_CTOP_RESETVAL  (0x00000000u)

/* RES_ADD_OFST_CTOP */

#define CSL_GE_RES_ADD_OFST_CTOP_ADD_OFST_MASK (0xFFFFFFFFu)
#define CSL_GE_RES_ADD_OFST_CTOP_ADD_OFST_SHIFT (0x00000000u)
#define CSL_GE_RES_ADD_OFST_CTOP_ADD_OFST_RESETVAL (0x00000000u)

#define CSL_GE_RES_ADD_OFST_CTOP_RESETVAL (0x00000000u)

/* RES_STRT_ADD_CBTM */

#define CSL_GE_RES_STRT_ADD_CBTM_ST_ADD_MASK (0xFFFFFFFFu)
#define CSL_GE_RES_STRT_ADD_CBTM_ST_ADD_SHIFT (0x00000000u)
#define CSL_GE_RES_STRT_ADD_CBTM_ST_ADD_RESETVAL (0x00000000u)

#define CSL_GE_RES_STRT_ADD_CBTM_RESETVAL (0x00000000u)

/* RES_SP_HSZ_CBTM */


#define CSL_GE_RES_SP_HSZ_CBTM_SP_HSZ_MASK (0x000001FFu)
#define CSL_GE_RES_SP_HSZ_CBTM_SP_HSZ_SHIFT (0x00000000u)
#define CSL_GE_RES_SP_HSZ_CBTM_SP_HSZ_RESETVAL (0x00000000u)
/*----SP_HSZ Tokens----*/
#define CSL_GE_RES_SP_HSZ_CBTM_SP_HSZ_PIX_16 (0x00000010u)
#define CSL_GE_RES_SP_HSZ_CBTM_SP_HSZ_PIX_32 (0x00000020u)
#define CSL_GE_RES_SP_HSZ_CBTM_SP_HSZ_PIX_64 (0x00000040u)
#define CSL_GE_RES_SP_HSZ_CBTM_SP_HSZ_PIX_128 (0x00000080u)
#define CSL_GE_RES_SP_HSZ_CBTM_SP_HSZ_PIX_256 (0x00000100u)

#define CSL_GE_RES_SP_HSZ_CBTM_RESETVAL  (0x00000000u)

/* RES_ADD_OFST_CBTM */

#define CSL_GE_RES_ADD_OFST_CBTM_ADD_OFST_MASK (0xFFFFFFFFu)
#define CSL_GE_RES_ADD_OFST_CBTM_ADD_OFST_SHIFT (0x00000000u)
#define CSL_GE_RES_ADD_OFST_CBTM_ADD_OFST_RESETVAL (0x00000000u)

#define CSL_GE_RES_ADD_OFST_CBTM_RESETVAL (0x00000000u)

/* SRC_Y_STRT_PS */


#define CSL_GE_SRC_Y_STRT_PS_HPS_MASK    (0x00000FFFu)
#define CSL_GE_SRC_Y_STRT_PS_HPS_SHIFT   (0x00000000u)
#define CSL_GE_SRC_Y_STRT_PS_HPS_RESETVAL (0x00000000u)

#define CSL_GE_SRC_Y_STRT_PS_RESETVAL    (0x00000000u)

/* SRC_Y_SZ */


#define CSL_GE_SRC_Y_SZ_VSZ_MASK         (0x0FFF0000u)
#define CSL_GE_SRC_Y_SZ_VSZ_SHIFT        (0x00000010u)
#define CSL_GE_SRC_Y_SZ_VSZ_RESETVAL     (0x00000000u)


#define CSL_GE_SRC_Y_SZ_HSZ_MASK         (0x00000FFFu)
#define CSL_GE_SRC_Y_SZ_HSZ_SHIFT        (0x00000000u)
#define CSL_GE_SRC_Y_SZ_HSZ_RESETVAL     (0x00000000u)

#define CSL_GE_SRC_Y_SZ_RESETVAL         (0x00000000u)

/* SRC_C_STRT_PS */


#define CSL_GE_SRC_C_STRT_PS_HPS_MASK    (0x00000FFFu)
#define CSL_GE_SRC_C_STRT_PS_HPS_SHIFT   (0x00000000u)
#define CSL_GE_SRC_C_STRT_PS_HPS_RESETVAL (0x00000000u)

#define CSL_GE_SRC_C_STRT_PS_RESETVAL    (0x00000000u)

/* SRC_C_SZ */


#define CSL_GE_SRC_C_SZ_VSZ_MASK         (0x0FFF0000u)
#define CSL_GE_SRC_C_SZ_VSZ_SHIFT        (0x00000010u)
#define CSL_GE_SRC_C_SZ_VSZ_RESETVAL     (0x00000000u)


#define CSL_GE_SRC_C_SZ_HSZ_MASK         (0x00000FFFu)
#define CSL_GE_SRC_C_SZ_HSZ_SHIFT        (0x00000000u)
#define CSL_GE_SRC_C_SZ_HSZ_RESETVAL     (0x00000000u)

#define CSL_GE_SRC_C_SZ_RESETVAL         (0x00000000u)

/* SRC_BMP_STRT_PS */


#define CSL_GE_SRC_BMP_STRT_PS_HPS_MASK  (0x00000FFFu)
#define CSL_GE_SRC_BMP_STRT_PS_HPS_SHIFT (0x00000000u)
#define CSL_GE_SRC_BMP_STRT_PS_HPS_RESETVAL (0x00000000u)

#define CSL_GE_SRC_BMP_STRT_PS_RESETVAL  (0x00000000u)

/* SRC_BMP_SZ */


#define CSL_GE_SRC_BMP_SZ_VSZ_MASK       (0x0FFF0000u)
#define CSL_GE_SRC_BMP_SZ_VSZ_SHIFT      (0x00000010u)
#define CSL_GE_SRC_BMP_SZ_VSZ_RESETVAL   (0x00000000u)


#define CSL_GE_SRC_BMP_SZ_HSZ_MASK       (0x00000FFFu)
#define CSL_GE_SRC_BMP_SZ_HSZ_SHIFT      (0x00000000u)
#define CSL_GE_SRC_BMP_SZ_HSZ_RESETVAL   (0x00000000u)

#define CSL_GE_SRC_BMP_SZ_RESETVAL       (0x00000000u)

/* RES_Y_STRT_PS */


#define CSL_GE_RES_Y_STRT_PS_HPS_MASK    (0x00000FFFu)
#define CSL_GE_RES_Y_STRT_PS_HPS_SHIFT   (0x00000000u)
#define CSL_GE_RES_Y_STRT_PS_HPS_RESETVAL (0x00000000u)

#define CSL_GE_RES_Y_STRT_PS_RESETVAL    (0x00000000u)

/* RES_Y_SZ */


#define CSL_GE_RES_Y_SZ_VSZ_MASK         (0x0FFF0000u)
#define CSL_GE_RES_Y_SZ_VSZ_SHIFT        (0x00000010u)
#define CSL_GE_RES_Y_SZ_VSZ_RESETVAL     (0x00000000u)


#define CSL_GE_RES_Y_SZ_HSZ_MASK         (0x00000FFFu)
#define CSL_GE_RES_Y_SZ_HSZ_SHIFT        (0x00000000u)
#define CSL_GE_RES_Y_SZ_HSZ_RESETVAL     (0x00000000u)

#define CSL_GE_RES_Y_SZ_RESETVAL         (0x00000000u)

/* RES_C_STRT_PS */


#define CSL_GE_RES_C_STRT_PS_HPS_MASK    (0x00000FFFu)
#define CSL_GE_RES_C_STRT_PS_HPS_SHIFT   (0x00000000u)
#define CSL_GE_RES_C_STRT_PS_HPS_RESETVAL (0x00000000u)

#define CSL_GE_RES_C_STRT_PS_RESETVAL    (0x00000000u)

/* RES_C_SZ */


#define CSL_GE_RES_C_SZ_VSZ_MASK         (0x0FFF0000u)
#define CSL_GE_RES_C_SZ_VSZ_SHIFT        (0x00000010u)
#define CSL_GE_RES_C_SZ_VSZ_RESETVAL     (0x00000000u)


#define CSL_GE_RES_C_SZ_HSZ_MASK         (0x00000FFFu)
#define CSL_GE_RES_C_SZ_HSZ_SHIFT        (0x00000000u)
#define CSL_GE_RES_C_SZ_HSZ_RESETVAL     (0x00000000u)

#define CSL_GE_RES_C_SZ_RESETVAL         (0x00000000u)

/* RES_BMP_STRT_PS */


#define CSL_GE_RES_BMP_STRT_PS_VPS_MASK  (0x0FFF0000u)
#define CSL_GE_RES_BMP_STRT_PS_VPS_SHIFT (0x00000010u)
#define CSL_GE_RES_BMP_STRT_PS_VPS_RESETVAL (0x00000000u)


#define CSL_GE_RES_BMP_STRT_PS_HPS_MASK  (0x00000FFFu)
#define CSL_GE_RES_BMP_STRT_PS_HPS_SHIFT (0x00000000u)
#define CSL_GE_RES_BMP_STRT_PS_HPS_RESETVAL (0x00000000u)

#define CSL_GE_RES_BMP_STRT_PS_RESETVAL  (0x00000000u)

/* RSZ_MODE */


#define CSL_GE_RSZ_MODE_V_ALF_EN_MASK    (0x00001000u)
#define CSL_GE_RSZ_MODE_V_ALF_EN_SHIFT   (0x0000000Cu)
#define CSL_GE_RSZ_MODE_V_ALF_EN_RESETVAL (0x00000000u)
/*----V_ALF_EN Tokens----*/
#define CSL_GE_RSZ_MODE_V_ALF_EN_INACTIVATE (0x00000000u)
#define CSL_GE_RSZ_MODE_V_ALF_EN_ACTIVATE (0x00000001u)


#define CSL_GE_RSZ_MODE_H_ALF_MODE_MASK  (0x00000200u)
#define CSL_GE_RSZ_MODE_H_ALF_MODE_SHIFT (0x00000009u)
#define CSL_GE_RSZ_MODE_H_ALF_MODE_RESETVAL (0x00000000u)
/*----H_ALF_MODE Tokens----*/
#define CSL_GE_RSZ_MODE_H_ALF_MODE_AUTOMATIC (0x00000000u)
#define CSL_GE_RSZ_MODE_H_ALF_MODE_MANUAL (0x00000001u)

#define CSL_GE_RSZ_MODE_H_ALF_EN_MASK    (0x00000100u)
#define CSL_GE_RSZ_MODE_H_ALF_EN_SHIFT   (0x00000008u)
#define CSL_GE_RSZ_MODE_H_ALF_EN_RESETVAL (0x00000000u)
/*----H_ALF_EN Tokens----*/
#define CSL_GE_RSZ_MODE_H_ALF_EN_INACTIVATE (0x00000000u)
#define CSL_GE_RSZ_MODE_H_ALF_EN_ACTIVATE (0x00000001u)


#define CSL_GE_RSZ_MODE_V_TYPE_MASK      (0x00000020u)
#define CSL_GE_RSZ_MODE_V_TYPE_SHIFT     (0x00000005u)
#define CSL_GE_RSZ_MODE_V_TYPE_RESETVAL  (0x00000000u)
/*----V_TYPE Tokens----*/
#define CSL_GE_RSZ_MODE_V_TYPE_4T_CUB_CON (0x00000000u)
#define CSL_GE_RSZ_MODE_V_TYPE_4T_LIN_INT (0x00000001u)

#define CSL_GE_RSZ_MODE_V_EN_MASK        (0x00000010u)
#define CSL_GE_RSZ_MODE_V_EN_SHIFT       (0x00000004u)
#define CSL_GE_RSZ_MODE_V_EN_RESETVAL    (0x00000000u)
/*----V_EN Tokens----*/
#define CSL_GE_RSZ_MODE_V_EN_DISABLE     (0x00000000u)
#define CSL_GE_RSZ_MODE_V_EN_ENABLE      (0x00000001u)


#define CSL_GE_RSZ_MODE_H_TYPE_MASK      (0x00000002u)
#define CSL_GE_RSZ_MODE_H_TYPE_SHIFT     (0x00000001u)
#define CSL_GE_RSZ_MODE_H_TYPE_RESETVAL  (0x00000000u)
/*----H_TYPE Tokens----*/
#define CSL_GE_RSZ_MODE_H_TYPE_4T_CUB_CON (0x00000000u)
#define CSL_GE_RSZ_MODE_H_TYPE_4T_LIN_INT (0x00000001u)

#define CSL_GE_RSZ_MODE_H_EN_MASK        (0x00000001u)
#define CSL_GE_RSZ_MODE_H_EN_SHIFT       (0x00000000u)
#define CSL_GE_RSZ_MODE_H_EN_RESETVAL    (0x00000000u)
/*----H_EN Tokens----*/
#define CSL_GE_RSZ_MODE_H_EN_DISABLE     (0x00000000u)
#define CSL_GE_RSZ_MODE_H_EN_ENABLE      (0x00000001u)

#define CSL_GE_RSZ_MODE_RESETVAL         (0x00000000u)

/* RSZ_H_MAG */


#define CSL_GE_RSZ_H_MAG_H_MASK          (0x00000FFFu)
#define CSL_GE_RSZ_H_MAG_H_SHIFT         (0x00000000u)
#define CSL_GE_RSZ_H_MAG_H_RESETVAL      (0x00000000u)

#define CSL_GE_RSZ_H_MAG_RESETVAL        (0x00000000u)

/* RSZ_V_MAG */


#define CSL_GE_RSZ_V_MAG_V_MASK          (0x00000FFFu)
#define CSL_GE_RSZ_V_MAG_V_SHIFT         (0x00000000u)
#define CSL_GE_RSZ_V_MAG_V_RESETVAL      (0x00000000u)

#define CSL_GE_RSZ_V_MAG_RESETVAL        (0x00000000u)

/* RSZ_H_PHASE */


#define CSL_GE_RSZ_H_PHASE_H_MASK        (0x00000FFFu)
#define CSL_GE_RSZ_H_PHASE_H_SHIFT       (0x00000000u)
#define CSL_GE_RSZ_H_PHASE_H_RESETVAL    (0x00000000u)

#define CSL_GE_RSZ_H_PHASE_RESETVAL      (0x00000000u)

/* RSZ_V_PHASE */


#define CSL_GE_RSZ_V_PHASE_V_MASK        (0x00000FFFu)
#define CSL_GE_RSZ_V_PHASE_V_SHIFT       (0x00000000u)
#define CSL_GE_RSZ_V_PHASE_V_RESETVAL    (0x00000000u)

#define CSL_GE_RSZ_V_PHASE_RESETVAL      (0x00000000u)

/* RSZ_INTNST */


#define CSL_GE_RSZ_INTNST_ALF_MASK       (0x000000FFu)
#define CSL_GE_RSZ_INTNST_ALF_SHIFT      (0x00000000u)
#define CSL_GE_RSZ_INTNST_ALF_RESETVAL   (0x00000000u)

#define CSL_GE_RSZ_INTNST_RESETVAL       (0x00000000u)

/* CCV_MD */


#define CSL_GE_CCV_MD_H_TYPE_MASK        (0x00000008u)
#define CSL_GE_CCV_MD_H_TYPE_SHIFT       (0x00000003u)
#define CSL_GE_CCV_MD_H_TYPE_RESETVAL    (0x00000000u)
/*----H_TYPE Tokens----*/
#define CSL_GE_CCV_MD_H_TYPE_4T_CUB_CON  (0x00000000u)
#define CSL_GE_CCV_MD_H_TYPE_4T_LIN_INT  (0x00000001u)

#define CSL_GE_CCV_MD_V_TYPE_MASK        (0x00000004u)
#define CSL_GE_CCV_MD_V_TYPE_SHIFT       (0x00000002u)
#define CSL_GE_CCV_MD_V_TYPE_RESETVAL    (0x00000000u)
/*----V_TYPE Tokens----*/
#define CSL_GE_CCV_MD_V_TYPE_4T_CUB_CON  (0x00000000u)
#define CSL_GE_CCV_MD_V_TYPE_4T_LIN_INT  (0x00000001u)

#define CSL_GE_CCV_MD_SRC_CODEC_MD_MASK  (0x00000002u)
#define CSL_GE_CCV_MD_SRC_CODEC_MD_SHIFT (0x00000001u)
#define CSL_GE_CCV_MD_SRC_CODEC_MD_RESETVAL (0x00000000u)
/*----SRC_CODEC_MD Tokens----*/
#define CSL_GE_CCV_MD_SRC_CODEC_MD_MPEG_2_4_H264_VC1 (0x00000000u)
#define CSL_GE_CCV_MD_SRC_CODEC_MD_MPEG_1 (0x00000001u)

#define CSL_GE_CCV_MD_RES_CODEC_MD_MASK  (0x00000001u)
#define CSL_GE_CCV_MD_RES_CODEC_MD_SHIFT (0x00000000u)
#define CSL_GE_CCV_MD_RES_CODEC_MD_RESETVAL (0x00000000u)
/*----RES_CODEC_MD Tokens----*/
#define CSL_GE_CCV_MD_RES_CODEC_MD_MPEG_2_4_H264_VC1 (0x00000000u)
#define CSL_GE_CCV_MD_RES_CODEC_MD_MPEG_1 (0x00000001u)

#define CSL_GE_CCV_MD_RESETVAL           (0x00000000u)

/* BLD_LUT_00 */

#define CSL_GE_BLD_LUT_00_FCT_MASK       (0xFF000000u)
#define CSL_GE_BLD_LUT_00_FCT_SHIFT      (0x00000018u)
#define CSL_GE_BLD_LUT_00_FCT_RESETVAL   (0x00000000u)

#define CSL_GE_BLD_LUT_00_Y_MASK         (0x00FF0000u)
#define CSL_GE_BLD_LUT_00_Y_SHIFT        (0x00000010u)
#define CSL_GE_BLD_LUT_00_Y_RESETVAL     (0x00000000u)

#define CSL_GE_BLD_LUT_00_CB_MASK        (0x0000FF00u)
#define CSL_GE_BLD_LUT_00_CB_SHIFT       (0x00000008u)
#define CSL_GE_BLD_LUT_00_CB_RESETVAL    (0x00000000u)

#define CSL_GE_BLD_LUT_00_CR_MASK        (0x000000FFu)
#define CSL_GE_BLD_LUT_00_CR_SHIFT       (0x00000000u)
#define CSL_GE_BLD_LUT_00_CR_RESETVAL    (0x00000000u)

#define CSL_GE_BLD_LUT_00_RESETVAL       (0x00000000u)

/* BLD_LUT_01 */

#define CSL_GE_BLD_LUT_01_FCT_MASK       (0xFF000000u)
#define CSL_GE_BLD_LUT_01_FCT_SHIFT      (0x00000018u)
#define CSL_GE_BLD_LUT_01_FCT_RESETVAL   (0x00000000u)

#define CSL_GE_BLD_LUT_01_Y_MASK         (0x00FF0000u)
#define CSL_GE_BLD_LUT_01_Y_SHIFT        (0x00000010u)
#define CSL_GE_BLD_LUT_01_Y_RESETVAL     (0x00000000u)

#define CSL_GE_BLD_LUT_01_CB_MASK        (0x0000FF00u)
#define CSL_GE_BLD_LUT_01_CB_SHIFT       (0x00000008u)
#define CSL_GE_BLD_LUT_01_CB_RESETVAL    (0x00000000u)

#define CSL_GE_BLD_LUT_01_CR_MASK        (0x000000FFu)
#define CSL_GE_BLD_LUT_01_CR_SHIFT       (0x00000000u)
#define CSL_GE_BLD_LUT_01_CR_RESETVAL    (0x00000000u)

#define CSL_GE_BLD_LUT_01_RESETVAL       (0x00000000u)

/* BLD_LUT_02 */

#define CSL_GE_BLD_LUT_02_FCT_MASK       (0xFF000000u)
#define CSL_GE_BLD_LUT_02_FCT_SHIFT      (0x00000018u)
#define CSL_GE_BLD_LUT_02_FCT_RESETVAL   (0x00000000u)

#define CSL_GE_BLD_LUT_02_Y_MASK         (0x00FF0000u)
#define CSL_GE_BLD_LUT_02_Y_SHIFT        (0x00000010u)
#define CSL_GE_BLD_LUT_02_Y_RESETVAL     (0x00000000u)

#define CSL_GE_BLD_LUT_02_CB_MASK        (0x0000FF00u)
#define CSL_GE_BLD_LUT_02_CB_SHIFT       (0x00000008u)
#define CSL_GE_BLD_LUT_02_CB_RESETVAL    (0x00000000u)

#define CSL_GE_BLD_LUT_02_CR_MASK        (0x000000FFu)
#define CSL_GE_BLD_LUT_02_CR_SHIFT       (0x00000000u)
#define CSL_GE_BLD_LUT_02_CR_RESETVAL    (0x00000000u)

#define CSL_GE_BLD_LUT_02_RESETVAL       (0x00000000u)

/* BLD_LUT_03 */

#define CSL_GE_BLD_LUT_03_FCT_MASK       (0xFF000000u)
#define CSL_GE_BLD_LUT_03_FCT_SHIFT      (0x00000018u)
#define CSL_GE_BLD_LUT_03_FCT_RESETVAL   (0x00000000u)

#define CSL_GE_BLD_LUT_03_Y_MASK         (0x00FF0000u)
#define CSL_GE_BLD_LUT_03_Y_SHIFT        (0x00000010u)
#define CSL_GE_BLD_LUT_03_Y_RESETVAL     (0x00000000u)

#define CSL_GE_BLD_LUT_03_CB_MASK        (0x0000FF00u)
#define CSL_GE_BLD_LUT_03_CB_SHIFT       (0x00000008u)
#define CSL_GE_BLD_LUT_03_CB_RESETVAL    (0x00000000u)

#define CSL_GE_BLD_LUT_03_CR_MASK        (0x000000FFu)
#define CSL_GE_BLD_LUT_03_CR_SHIFT       (0x00000000u)
#define CSL_GE_BLD_LUT_03_CR_RESETVAL    (0x00000000u)

#define CSL_GE_BLD_LUT_03_RESETVAL       (0x00000000u)

/* RGMP_CTRL */


#define CSL_GE_RGMP_CTRL_C_EN_MASK       (0x00000800u)
#define CSL_GE_RGMP_CTRL_C_EN_SHIFT      (0x0000000Bu)
#define CSL_GE_RGMP_CTRL_C_EN_RESETVAL   (0x00000000u)
/*----C_EN Tokens----*/
#define CSL_GE_RGMP_CTRL_C_EN_DISABLE    (0x00000000u)
#define CSL_GE_RGMP_CTRL_C_EN_ENABLE     (0x00000001u)

#define CSL_GE_RGMP_CTRL_C_MASK          (0x00000700u)
#define CSL_GE_RGMP_CTRL_C_SHIFT         (0x00000008u)
#define CSL_GE_RGMP_CTRL_C_RESETVAL      (0x00000000u)


#define CSL_GE_RGMP_CTRL_Y_EN_MASK       (0x00000008u)
#define CSL_GE_RGMP_CTRL_Y_EN_SHIFT      (0x00000003u)
#define CSL_GE_RGMP_CTRL_Y_EN_RESETVAL   (0x00000000u)
/*----Y_EN Tokens----*/
#define CSL_GE_RGMP_CTRL_Y_EN_DISABLE    (0x00000000u)
#define CSL_GE_RGMP_CTRL_Y_EN_ENABLE     (0x00000001u)

#define CSL_GE_RGMP_CTRL_Y_MASK          (0x00000007u)
#define CSL_GE_RGMP_CTRL_Y_SHIFT         (0x00000000u)
#define CSL_GE_RGMP_CTRL_Y_RESETVAL      (0x00000000u)

#define CSL_GE_RGMP_CTRL_RESETVAL        (0x00000000u)

/* EPD_CTRL */


#define CSL_GE_EPD_CTRL_MODE_MASK        (0x00000001u)
#define CSL_GE_EPD_CTRL_MODE_SHIFT       (0x00000000u)
#define CSL_GE_EPD_CTRL_MODE_RESETVAL    (0x00000000u)
/*----MODE Tokens----*/
#define CSL_GE_EPD_CTRL_MODE_INTERLACE   (0x00000000u)
#define CSL_GE_EPD_CTRL_MODE_PROGRESSIVE (0x00000001u)

#define CSL_GE_EPD_CTRL_RESETVAL         (0x00000000u)

/* EPD_LUMA_WIDTH */


#define CSL_GE_EPD_LUMA_WIDTH_VEXT_MASK  (0x00003F00u)
#define CSL_GE_EPD_LUMA_WIDTH_VEXT_SHIFT (0x00000008u)
#define CSL_GE_EPD_LUMA_WIDTH_VEXT_RESETVAL (0x00000000u)


#define CSL_GE_EPD_LUMA_WIDTH_HEXT_MASK  (0x0000003Fu)
#define CSL_GE_EPD_LUMA_WIDTH_HEXT_SHIFT (0x00000000u)
#define CSL_GE_EPD_LUMA_WIDTH_HEXT_RESETVAL (0x00000000u)

#define CSL_GE_EPD_LUMA_WIDTH_RESETVAL   (0x00000000u)

/* EPD_CROMA_WIDTH */


#define CSL_GE_EPD_CROMA_WIDTH_VEXT_MASK (0x00003F00u)
#define CSL_GE_EPD_CROMA_WIDTH_VEXT_SHIFT (0x00000008u)
#define CSL_GE_EPD_CROMA_WIDTH_VEXT_RESETVAL (0x00000000u)


#define CSL_GE_EPD_CROMA_WIDTH_HEXT_MASK (0x0000003Fu)
#define CSL_GE_EPD_CROMA_WIDTH_HEXT_SHIFT (0x00000000u)
#define CSL_GE_EPD_CROMA_WIDTH_HEXT_RESETVAL (0x00000000u)

#define CSL_GE_EPD_CROMA_WIDTH_RESETVAL  (0x00000000u)

#endif
