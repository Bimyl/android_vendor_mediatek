#include <utils/Log.h>
#include <fcntl.h>
#include <math.h>

#include "pd_buf_mgr.h"

class PD_OV13870MIPIRAW : protected PDBufMgr
{
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//  Ctor/Dtor.
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
private:    ////    Disallowed.
    MUINT32  m_PDBufSz;
    MUINT16 *m_PDBuf;
    MBOOL    m_bDebugEnable;

protected :
    /**
    * @brief checking current sensor is supported or not.
    */
    MBOOL IsSupport( SPDProfile_t &iPdProfile);

//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
//  Operations.
//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
public:
    PD_OV13870MIPIRAW();
    ~PD_OV13870MIPIRAW();

    static PDBufMgr* getInstance();



    /**
    * @brief convert PD data buffer format.
    */
    MUINT16* ConvertPDBufFormat( MUINT32 i4Size, MUINT32 i4Stride, MUINT8 *ptrBufAddr, MUINT32 u4BitDepth=12);
    /**
    * @brief get m_PDXSz, m_PDYSz, and m_PDBufSz.
    */
    MBOOL GetLRBufferInfo(MUINT32 &PDXsz, MUINT32 &PDYsz, MUINT32 &PDBufSz);
};