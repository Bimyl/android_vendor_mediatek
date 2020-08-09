#define IDX_MASK_SL2F_DIM_NS    1
#define IDX_MASK_SL2F_FACTOR_SZ    1
#define IDX_MASK_SL2F_ENTRY_NS    10

static unsigned int _cam_mask_entry_SL2F_key0000[] = {0X00000001, };
static unsigned int _cam_mask_entry_SL2F_key0001[] = {0X00000002, };
static unsigned int _cam_mask_entry_SL2F_key0002[] = {0X00000004, };
static unsigned int _cam_mask_entry_SL2F_key0003[] = {0X00000008, };
static unsigned int _cam_mask_entry_SL2F_key0004[] = {0X00000010, };
static unsigned int _cam_mask_entry_SL2F_key0005[] = {0X00000020, };
static unsigned int _cam_mask_entry_SL2F_key0006[] = {0X00000040, };
static unsigned int _cam_mask_entry_SL2F_key0007[] = {0X00000080, };
static unsigned int _cam_mask_entry_SL2F_key0008[] = {0X00000100, };
static unsigned int _cam_mask_entry_SL2F_key0009[] = {0X00000200, };

static IDX_MASK_ENTRY _cam_mask_entry_SL2F[IDX_MASK_SL2F_ENTRY_NS] =
{
    {(unsigned int*)&_cam_mask_entry_SL2F_key0000, 0, 25},
    {(unsigned int*)&_cam_mask_entry_SL2F_key0001, 1, 25},
    {(unsigned int*)&_cam_mask_entry_SL2F_key0002, 2, 25},
    {(unsigned int*)&_cam_mask_entry_SL2F_key0003, 3, 25},
    {(unsigned int*)&_cam_mask_entry_SL2F_key0004, 4, 25},
    {(unsigned int*)&_cam_mask_entry_SL2F_key0005, 5, 25},
    {(unsigned int*)&_cam_mask_entry_SL2F_key0006, 6, 25},
    {(unsigned int*)&_cam_mask_entry_SL2F_key0007, 7, 25},
    {(unsigned int*)&_cam_mask_entry_SL2F_key0008, 8, 25},
    {(unsigned int*)&_cam_mask_entry_SL2F_key0009, 9, 25},
};

static unsigned short _cam_mask_dims_SL2F[] = 
{
    EDim_SensorMode,
};

const IDX_MASK_T cam_mask_SL2F =
{
    {IDX_ALGO_MASK, IDX_MASK_SL2F_DIM_NS, (unsigned short*)&_cam_mask_dims_SL2F},
    {IDX_MASK_SL2F_ENTRY_NS, IDX_MASK_SL2F_FACTOR_SZ, (IDX_MASK_ENTRY*)&_cam_mask_entry_SL2F}
};