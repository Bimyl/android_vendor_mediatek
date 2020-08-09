#define IDX_DATA_MFNR_THRES_DIM_NS    4
#define IDX_DATA_MFNR_THRES_FACTOR_SZ    3
#define IDX_DATA_MFNR_THRES_ENTRY_NS    7

static unsigned int _cam_data_entry_MFNR_THRES_key0000[] = {0X000001E0, 0X80000000, 0X00001F00, };
static unsigned int _cam_data_entry_MFNR_THRES_key0001[] = {0X000001E0, 0X40000000, 0X00001F00, };
static unsigned int _cam_data_entry_MFNR_THRES_key0002[] = {0X000001E0, 0X80000000, 0X00002F00, };
static unsigned int _cam_data_entry_MFNR_THRES_key0003[] = {0X000001E0, 0X40000000, 0X00002F00, };
static unsigned int _cam_data_entry_MFNR_THRES_key0004[] = {0X00000000, 0XC000000F, 0X00003FFF, };
static unsigned int _cam_data_entry_MFNR_THRES_key0005[] = {0X000001E0, 0XC0000000, 0X000036FF, };
static unsigned int _cam_data_entry_MFNR_THRES_key0006[] = {0X00000000, 0XC000000F, 0X000036FF, };

static IDX_MASK_ENTRY _cam_data_entry_MFNR_THRES[IDX_DATA_MFNR_THRES_ENTRY_NS] =
{
    {(unsigned int*)&_cam_data_entry_MFNR_THRES_key0000, 0, 0, 0, 0},
    {(unsigned int*)&_cam_data_entry_MFNR_THRES_key0001, 0, 1, 0, 0},
    {(unsigned int*)&_cam_data_entry_MFNR_THRES_key0002, 1, 2, 0, 0},
    {(unsigned int*)&_cam_data_entry_MFNR_THRES_key0003, 1, 3, 0, 0},
    {(unsigned int*)&_cam_data_entry_MFNR_THRES_key0004, 0, 17, 0, 0},
    {(unsigned int*)&_cam_data_entry_MFNR_THRES_key0005, 0, 21, 0, 0},
    {(unsigned int*)&_cam_data_entry_MFNR_THRES_key0006, 0, 22, 0, 0},
};

static unsigned short _cam_data_dims_MFNR_THRES[] = 
{
    EDim_IspProfile,
    EDim_SensorMode,
    EDim_Flash,
    EDim_FaceDetection,
};

static unsigned short _cam_data_expand_MFNR_THRES[] = 
{0, 0, 0};

const IDX_MASK_T cam_data_MFNR_THRES =
{
    {IDX_ALGO_MASK, IDX_DATA_MFNR_THRES_DIM_NS, (unsigned short*)&_cam_data_dims_MFNR_THRES, (unsigned short*)&_cam_data_expand_MFNR_THRES},
    {IDX_DATA_MFNR_THRES_ENTRY_NS, IDX_DATA_MFNR_THRES_FACTOR_SZ, (IDX_MASK_ENTRY*)&_cam_data_entry_MFNR_THRES}
};