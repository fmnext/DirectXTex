//-------------------------------------------------------------------------------------------------
// Copyright (C) Microsoft Corporation.  All Rights Reserved.
//
// XG library for Xbox.
// 
// XG is an auxiliary graphics library that is used for preparing resources and other
// graphics-related tasks that are performed outside the bounds of the Direct3D runtime
// interfaces.
//

#pragma once
#include <windows.h>

//-------------------------------------------------------------------------------------------------
// XG_TILE_MODE represents the tile mode used by a 1D, 2D, or 3D texture. Special usages of textures,
// such as depth/stencil buffers and presentable buffers, require specific tile mode indices to be used.

enum XG_TILE_MODE
{
    XG_TILE_MODE_INVALID        = -1,
    XG_TILE_MODE_COMP_DEPTH_0   =  0,
    XG_TILE_MODE_COMP_DEPTH_1   =  1,
    XG_TILE_MODE_COMP_DEPTH_2   =  2,
    XG_TILE_MODE_COMP_DEPTH_3   =  3,
    XG_TILE_MODE_COMP_DEPTH_4   =  4,
    XG_TILE_MODE_UNC_DEPTH_5    =  5,
    XG_TILE_MODE_UNC_DEPTH_6    =  6,
    XG_TILE_MODE_UNC_DEPTH_7    =  7,
    XG_TILE_MODE_LINEAR         =  8,
    XG_TILE_MODE_DISPLAY        =  9,
    XG_TILE_MODE_2D_DISPLAY     = 10,
    XG_TILE_MODE_RESERVED_11    = 11,
    XG_TILE_MODE_RESERVED_12    = 12,
    XG_TILE_MODE_1D_THIN        = 13,
    XG_TILE_MODE_2D_THIN        = 14,
    XG_TILE_MODE_RESERVED_15    = 15,
    XG_TILE_MODE_TILED_1D_THIN  = 16,
    XG_TILE_MODE_TILED_2D_THIN  = 17,
    XG_TILE_MODE_RESERVED_18    = 18,
    XG_TILE_MODE_RESERVED_19    = 19,
    XG_TILE_MODE_RESERVED_20    = 20,
    XG_TILE_MODE_RESERVED_21    = 21,
    XG_TILE_MODE_RESERVED_22    = 22,
    XG_TILE_MODE_RESERVED_23    = 23,
    XG_TILE_MODE_RESERVED_24    = 24,
    XG_TILE_MODE_RESERVED_25    = 25,
    XG_TILE_MODE_RESERVED_26    = 26,
    XG_TILE_MODE_RESERVED_27    = 27,
    XG_TILE_MODE_RESERVED_28    = 28,
    XG_TILE_MODE_RESERVED_29    = 29,
    XG_TILE_MODE_RESERVED_30    = 30,
    XG_TILE_MODE_LINEAR_GENERAL = 31,
    XG_TILE_MODE_TILED_2D_DEPTH = XG_TILE_MODE_UNC_DEPTH_7,
};

//-------------------------------------------------------------------------------------------------
// XG_FORMAT is identical to DXGI_FORMAT on Xbox, and is a superset of DXGI_FORMAT for D3D 11.1 on Windows 8.

enum XG_FORMAT
{
    XG_FORMAT_UNKNOWN                     = 0,
    XG_FORMAT_R32G32B32A32_TYPELESS       = 1,
    XG_FORMAT_R32G32B32A32_FLOAT          = 2,
    XG_FORMAT_R32G32B32A32_UINT           = 3,
    XG_FORMAT_R32G32B32A32_SINT           = 4,
    XG_FORMAT_R32G32B32_TYPELESS          = 5,
    XG_FORMAT_R32G32B32_FLOAT             = 6,
    XG_FORMAT_R32G32B32_UINT              = 7,
    XG_FORMAT_R32G32B32_SINT              = 8,
    XG_FORMAT_R16G16B16A16_TYPELESS       = 9,
    XG_FORMAT_R16G16B16A16_FLOAT          = 10,
    XG_FORMAT_R16G16B16A16_UNORM          = 11,
    XG_FORMAT_R16G16B16A16_UINT           = 12,
    XG_FORMAT_R16G16B16A16_SNORM          = 13,
    XG_FORMAT_R16G16B16A16_SINT           = 14,
    XG_FORMAT_R32G32_TYPELESS             = 15,
    XG_FORMAT_R32G32_FLOAT                = 16,
    XG_FORMAT_R32G32_UINT                 = 17,
    XG_FORMAT_R32G32_SINT                 = 18,
    XG_FORMAT_R32G8X24_TYPELESS           = 19,
    XG_FORMAT_D32_FLOAT_S8X24_UINT        = 20,
    XG_FORMAT_R32_FLOAT_X8X24_TYPELESS    = 21,
    XG_FORMAT_X32_TYPELESS_G8X24_UINT     = 22,
    XG_FORMAT_R10G10B10A2_TYPELESS        = 23,
    XG_FORMAT_R10G10B10A2_UNORM           = 24,
    XG_FORMAT_R10G10B10A2_UINT            = 25,
    XG_FORMAT_R11G11B10_FLOAT             = 26,
    XG_FORMAT_R8G8B8A8_TYPELESS           = 27,
    XG_FORMAT_R8G8B8A8_UNORM              = 28,
    XG_FORMAT_R8G8B8A8_UNORM_SRGB         = 29,
    XG_FORMAT_R8G8B8A8_UINT               = 30,
    XG_FORMAT_R8G8B8A8_SNORM              = 31,
    XG_FORMAT_R8G8B8A8_SINT               = 32,
    XG_FORMAT_R16G16_TYPELESS             = 33,
    XG_FORMAT_R16G16_FLOAT                = 34,
    XG_FORMAT_R16G16_UNORM                = 35,
    XG_FORMAT_R16G16_UINT                 = 36,
    XG_FORMAT_R16G16_SNORM                = 37,
    XG_FORMAT_R16G16_SINT                 = 38,
    XG_FORMAT_R32_TYPELESS                = 39,
    XG_FORMAT_D32_FLOAT                   = 40,
    XG_FORMAT_R32_FLOAT                   = 41,
    XG_FORMAT_R32_UINT                    = 42,
    XG_FORMAT_R32_SINT                    = 43,
    XG_FORMAT_R24G8_TYPELESS              = 44,
    XG_FORMAT_D24_UNORM_S8_UINT           = 45,
    XG_FORMAT_R24_UNORM_X8_TYPELESS       = 46,
    XG_FORMAT_X24_TYPELESS_G8_UINT        = 47,
    XG_FORMAT_R8G8_TYPELESS               = 48,
    XG_FORMAT_R8G8_UNORM                  = 49,
    XG_FORMAT_R8G8_UINT                   = 50,
    XG_FORMAT_R8G8_SNORM                  = 51,
    XG_FORMAT_R8G8_SINT                   = 52,
    XG_FORMAT_R16_TYPELESS                = 53,
    XG_FORMAT_R16_FLOAT                   = 54,
    XG_FORMAT_D16_UNORM                   = 55,
    XG_FORMAT_R16_UNORM                   = 56,
    XG_FORMAT_R16_UINT                    = 57,
    XG_FORMAT_R16_SNORM                   = 58,
    XG_FORMAT_R16_SINT                    = 59,
    XG_FORMAT_R8_TYPELESS                 = 60,
    XG_FORMAT_R8_UNORM                    = 61,
    XG_FORMAT_R8_UINT                     = 62,
    XG_FORMAT_R8_SNORM                    = 63,
    XG_FORMAT_R8_SINT                     = 64,
    XG_FORMAT_A8_UNORM                    = 65,
    XG_FORMAT_R1_UNORM                    = 66,
    XG_FORMAT_R9G9B9E5_SHAREDEXP          = 67,
    XG_FORMAT_R8G8_B8G8_UNORM             = 68,
    XG_FORMAT_G8R8_G8B8_UNORM             = 69,
    XG_FORMAT_BC1_TYPELESS                = 70,
    XG_FORMAT_BC1_UNORM                   = 71,
    XG_FORMAT_BC1_UNORM_SRGB              = 72,
    XG_FORMAT_BC2_TYPELESS                = 73,
    XG_FORMAT_BC2_UNORM                   = 74,
    XG_FORMAT_BC2_UNORM_SRGB              = 75,
    XG_FORMAT_BC3_TYPELESS                = 76,
    XG_FORMAT_BC3_UNORM                   = 77,
    XG_FORMAT_BC3_UNORM_SRGB              = 78,
    XG_FORMAT_BC4_TYPELESS                = 79,
    XG_FORMAT_BC4_UNORM                   = 80,
    XG_FORMAT_BC4_SNORM                   = 81,
    XG_FORMAT_BC5_TYPELESS                = 82,
    XG_FORMAT_BC5_UNORM                   = 83,
    XG_FORMAT_BC5_SNORM                   = 84,
    XG_FORMAT_B5G6R5_UNORM                = 85,
    XG_FORMAT_B5G5R5A1_UNORM              = 86,
    XG_FORMAT_B8G8R8A8_UNORM              = 87,
    XG_FORMAT_B8G8R8X8_UNORM              = 88,
    XG_FORMAT_R10G10B10_XR_BIAS_A2_UNORM  = 89,
    XG_FORMAT_B8G8R8A8_TYPELESS           = 90,
    XG_FORMAT_B8G8R8A8_UNORM_SRGB         = 91,
    XG_FORMAT_B8G8R8X8_TYPELESS           = 92,
    XG_FORMAT_B8G8R8X8_UNORM_SRGB         = 93,
    XG_FORMAT_BC6H_TYPELESS               = 94,
    XG_FORMAT_BC6H_UF16                   = 95,
    XG_FORMAT_BC6H_SF16                   = 96,
    XG_FORMAT_BC7_TYPELESS                = 97,
    XG_FORMAT_BC7_UNORM                   = 98,
    XG_FORMAT_BC7_UNORM_SRGB              = 99,
    XG_FORMAT_AYUV                        = 100,
    XG_FORMAT_Y410                        = 101,
    XG_FORMAT_Y416                        = 102,
    XG_FORMAT_NV12                        = 103,
    XG_FORMAT_P010                        = 104,
    XG_FORMAT_P016                        = 105,
    XG_FORMAT_420_OPAQUE                  = 106,
    XG_FORMAT_YUY2                        = 107,
    XG_FORMAT_Y210                        = 108,
    XG_FORMAT_Y216                        = 109,
    XG_FORMAT_NV11                        = 110,
    XG_FORMAT_AI44                        = 111,
    XG_FORMAT_IA44                        = 112,
    XG_FORMAT_P8                          = 113,
    XG_FORMAT_A8P8                        = 114,
    XG_FORMAT_B4G4R4A4_UNORM              = 115,
    XG_FORMAT_R10G10B10_7E3_A2_FLOAT      = 116,
    XG_FORMAT_R10G10B10_6E4_A2_FLOAT      = 117,
    XG_FORMAT_D16_UNORM_S8_UINT           = 118,
    XG_FORMAT_R16_UNORM_X8_TYPELESS       = 119,
    XG_FORMAT_X16_TYPELESS_G8_UINT        = 120,
    XG_FORMAT_FORCE_UINT                  = 0xffffffff
};

//-------------------------------------------------------------------------------------------------
// XG_RESOURCE_DIMENSION is the same as D3D11_RESOURCE_DIMENSION.

enum XG_RESOURCE_DIMENSION
{
    XG_RESOURCE_DIMENSION_UNKNOWN   = 0,
    XG_RESOURCE_DIMENSION_BUFFER    = 1,
    XG_RESOURCE_DIMENSION_TEXTURE1D = 2,
    XG_RESOURCE_DIMENSION_TEXTURE2D = 3,
    XG_RESOURCE_DIMENSION_TEXTURE3D = 4
};

//-------------------------------------------------------------------------------------------------
// XG_USAGE is the same as D3D11_USAGE.

enum XG_USAGE
{
    XG_USAGE_DEFAULT    = 0,
    XG_USAGE_IMMUTABLE  = 1,
    XG_USAGE_DYNAMIC    = 2,
    XG_USAGE_STAGING    = 3
};

//-------------------------------------------------------------------------------------------------
// XG_PLANE_USAGE is a value returned by the XG texture layout APIs to indicate the purpose of each
// of the 1-3 planes comprising a texture resource.

enum XG_PLANE_USAGE
{
    XG_PLANE_USAGE_UNUSED         = 0,
    XG_PLANE_USAGE_DEFAULT        = 1,
    XG_PLANE_USAGE_COLOR_MASK     = 2,
    XG_PLANE_USAGE_FRAGMENT_MASK  = 3,
    XG_PLANE_USAGE_HTILE          = 4,
    XG_PLANE_USAGE_LUMA           = 5,
    XG_PLANE_USAGE_CHROMA         = 6,
    XG_PLANE_USAGE_DEPTH          = 7,
    XG_PLANE_USAGE_STENCIL        = 8,
};

//-------------------------------------------------------------------------------------------------
// XG_BIND_FLAG is equivalent to D3D11_BIND_FLAG.

enum XG_BIND_FLAG
{
    XG_BIND_VERTEX_BUFFER    = 0x1L,
    XG_BIND_INDEX_BUFFER     = 0x2L,
    XG_BIND_CONSTANT_BUFFER  = 0x4L,
    XG_BIND_SHADER_RESOURCE  = 0x8L,
    XG_BIND_STREAM_OUTPUT    = 0x10L,
    XG_BIND_RENDER_TARGET    = 0x20L,
    XG_BIND_DEPTH_STENCIL    = 0x40L,
    XG_BIND_UNORDERED_ACCESS = 0x80L,
    XG_BIND_DECODER          = 0x200L,
    XG_BIND_VIDEO_ENCODER    = 0x400L
};

//-------------------------------------------------------------------------------------------------
// XG_CPU_ACCESS_FLAG is equivalent to D3D11_CPU_ACCESS_FLAG.

enum XG_CPU_ACCESS_FLAG
{
    XG_CPU_ACCESS_WRITE = 0x10000L,
    XG_CPU_ACCESS_READ  = 0x20000L
};

//-------------------------------------------------------------------------------------------------
// XG_RESOURCE_MISC_FLAG is a subset of D3D11_RESOURCE_MISC_FLAG.
// The set of flags that exist in XG_RESOURCE_MISC_FLAG match the values of their corresponding
// flags in D3D11_RESOURCE_MISC_FLAG found in d3d11_x.h.

enum XG_RESOURCE_MISC_FLAG
{
    XG_RESOURCE_MISC_GENERATE_MIPS                  = 0x1L,
    XG_RESOURCE_MISC_TEXTURECUBE                    = 0x4L,
    XG_RESOURCE_MISC_DRAWINDIRECT_ARGS              = 0x10L,
    XG_RESOURCE_MISC_BUFFER_ALLOW_RAW_VIEWS         = 0x20L,
    XG_RESOURCE_MISC_BUFFER_STRUCTURED              = 0x40L,
    XG_RESOURCE_MISC_RESOURCE_CLAMP                 = 0x80L,
    XG_RESOURCE_MISC_RESTRICTED_CONTENT             = 0x1000L,
    XG_RESOURCE_MISC_ESRAM_RESIDENT                 = 0x20000L,
    XG_RESOURCE_MISC_NO_COLOR_COMPRESSION           = 0x80000L,
    XG_RESOURCE_MISC_NO_DEPTH_COMPRESSION           = 0x100000L,
    XG_RESOURCE_MISC_NO_STENCIL_COMPRESSION         = 0x200000L,
    XG_RESOURCE_MISC_TILE_POOL                      = 0x4000000L,
    XG_RESOURCE_MISC_TILED                          = 0x8000000L,
};

//-------------------------------------------------------------------------------------------------
// XG_SAMPLE_DESC is equivalent to DXGI_SAMPLE_DESC.

struct XG_SAMPLE_DESC
{
    UINT Count;
    UINT Quality;
};

//-------------------------------------------------------------------------------------------------
// XG_BUFFER_DESC is equivalent to D3D11_BUFFER_DESC.

struct XG_BUFFER_DESC
{
    UINT ByteWidth;
    XG_USAGE Usage;
    UINT BindFlags;                 // Any of XG_BIND_FLAG.
    UINT CPUAccessFlags;            // Any of XG_CPU_ACCESS_FLAG.
    UINT MiscFlags;                 // Any of XG_RESOURCE_MISC_FLAG.
    UINT StructureByteStride;
    UINT ESRAMOffsetBytes;
    UINT ESRAMUsageBytes;
};

//-------------------------------------------------------------------------------------------------
// XG_TEXTURE1D_DESC is a superset of D3D11_TEXTURE1D_DESC, and contains additional parameters used
// to describe a 1D texture for the XG texture layout APIs.

struct XG_TEXTURE1D_DESC
{
    UINT Width;
    UINT MipLevels;
    UINT ArraySize;
    XG_FORMAT Format;
    XG_USAGE Usage;
    UINT BindFlags;                 // Any of XG_BIND_FLAG.
    UINT CPUAccessFlags;            // Any of XG_CPU_ACCESS_FLAG.
    UINT MiscFlags;                 // Any of XG_RESOURCE_MISC_FLAG.
    UINT ESRAMOffsetBytes;
    UINT ESRAMUsageBytes;
    XG_TILE_MODE TileMode;
    UINT Pitch;
};

//-------------------------------------------------------------------------------------------------
// XG_TEXTURE2D_DESC is a superset of D3D11_TEXTURE2D_DESC, and contains additional parameters used
// to describe a 2D texture for the XG texture layout APIs.

struct XG_TEXTURE2D_DESC
{
    UINT Width;
    UINT Height;
    UINT MipLevels;
    UINT ArraySize;
    XG_FORMAT Format;
    XG_SAMPLE_DESC SampleDesc;
    XG_USAGE Usage;
    UINT BindFlags;                 // Any of XG_BIND_FLAG.
    UINT CPUAccessFlags;            // Any of XG_CPU_ACCESS_FLAG.
    UINT MiscFlags;                 // Any of XG_RESOURCE_MISC_FLAG.
    UINT ESRAMOffsetBytes;
    UINT ESRAMUsageBytes;
    XG_TILE_MODE TileMode;
    UINT Pitch;
};

//-------------------------------------------------------------------------------------------------
// XG_TEXTURE3D_DESC is a superset of D3D11_TEXTURE3D_DESC, and contains additional parameters used
// to describe a 3D texture for the XG texture layout APIs.

struct XG_TEXTURE3D_DESC
{
    UINT Width;
    UINT Height;
    UINT Depth;
    UINT MipLevels;
    XG_FORMAT Format;
    XG_USAGE Usage;
    UINT BindFlags;                 // Any of XG_BIND_FLAG.
    UINT CPUAccessFlags;            // Any of XG_CPU_ACCESS_FLAG.
    UINT MiscFlags;                 // Any of XG_RESOURCE_MISC_FLAG.
    UINT ESRAMOffsetBytes;
    UINT ESRAMUsageBytes;
    XG_TILE_MODE TileMode;
    UINT Pitch;
};

//-------------------------------------------------------------------------------------------------
// XG_MIPLEVEL_LAYOUT describes a single mip level in the hardware layout of a texture.
// Note that each mip level comprises a number of contiguous slices in the case of an array or volume texture.

struct XG_MIPLEVEL_LAYOUT
{
    UINT64 SizeBytes;
    UINT64 OffsetBytes;
    UINT64 Slice2DSizeBytes;
    UINT32 PitchPixels;
    UINT32 PitchBytes;
    UINT32 AlignmentBytes;
    UINT32 PaddedWidthElements;
    UINT32 PaddedHeightElements;
    UINT32 PaddedDepthOrArraySize;
    UINT32 WidthElements;
    UINT32 HeightElements;
    UINT32 DepthOrArraySize;
    UINT32 SampleCount;
    XG_TILE_MODE TileMode;
};

//-------------------------------------------------------------------------------------------------
// XG_PLANE_LAYOUT describes a mip chain in the hardware layout of a texture.

struct XG_PLANE_LAYOUT
{
    XG_PLANE_USAGE Usage;
    UINT64 SizeBytes;
    UINT64 BaseOffsetBytes;
    UINT64 BaseAlignmentBytes;
    UINT32 BytesPerElement;
    XG_MIPLEVEL_LAYOUT MipLayout[15];
};

//-------------------------------------------------------------------------------------------------
// XG_RESOURCE_LAYOUT describes the entire hardware layout of a single resource.  Certain resource
// configurations include up to 3 planes, each plane being a single mip chain.

struct XG_RESOURCE_LAYOUT
{
    UINT64 SizeBytes;
    UINT64 BaseAlignmentBytes;
    UINT32 MipLevels;
    UINT32 Planes;
    XG_PLANE_LAYOUT Plane[3];
    XG_RESOURCE_DIMENSION Dimension;
};

//--------------------------------------------------------------------------------------------------
typedef struct XG_SUBRESOURCE_TILING
{
    UINT32 WidthInTiles;
    UINT16 HeightInTiles;
    UINT16 DepthInTiles;
    UINT32 StartTileIndexInOverallResource;
} XG_SUBRESOURCE_TILING;

#define	XG_PACKED_TILE	( 0xffffffff )

//--------------------------------------------------------------------------------------------------
typedef struct XG_TILE_SHAPE
{
    UINT32 WidthInTexels;
    UINT32 HeightInTexels;
    UINT32 DepthInTexels;
} XG_TILE_SHAPE;

//--------------------------------------------------------------------------------------------------
typedef struct XG_TILE_SHAPE_ELEMENTS
{
    UINT32 WidthInElements;
    UINT32 HeightInElements;
    UINT32 DepthInElements;
} XG_TILE_SHAPE_ELEMENTS;

//--------------------------------------------------------------------------------------------------
typedef struct XG_PACKED_MIP_DESC
{
    UINT8  NumStandardMips;
    UINT8  NumPackedMips;
    UINT32 NumTilesForPackedMips;
    UINT32 StartTileIndexInOverallResource;
} XG_PACKED_MIP_DESC;

#define	XG_TILED_RESOURCE_TILE_SIZE_IN_BYTES	( 65536 )

//-------------------------------------------------------------------------------------------------
// XGComputeBufferLayout computes the hardware alignment for a buffer.

HRESULT __cdecl XGComputeBufferLayout( 
    _In_ const XG_BUFFER_DESC* pDesc,
    _Out_ XG_RESOURCE_LAYOUT* pLayout
);

//-------------------------------------------------------------------------------------------------
// XGComputeTexture1DLayout computes the hardware layout for a 1D texture.

HRESULT __cdecl XGComputeTexture1DLayout( 
    _In_  const XG_TEXTURE1D_DESC* pDesc,
    _Out_ XG_RESOURCE_LAYOUT* pLayout
);

//-------------------------------------------------------------------------------------------------
// XGComputeTexture2DLayout computes the hardware layout for a 2D texture.

HRESULT __cdecl XGComputeTexture2DLayout( 
    _In_  const XG_TEXTURE2D_DESC* pDesc,
    _Out_ XG_RESOURCE_LAYOUT* pLayout
);

//-------------------------------------------------------------------------------------------------
// XGComputeTexture3DLayout computes the hardware layout for a 3D texture.

HRESULT __cdecl XGComputeTexture3DLayout( 
    _In_  const XG_TEXTURE3D_DESC* pDesc,
    _Out_ XG_RESOURCE_LAYOUT* pLayout
);

//-------------------------------------------------------------------------------------------------
// XGComputeOptimalTileMode computes the bandwidth optimal tile mode for the given texture configuration.

XG_TILE_MODE __cdecl XGComputeOptimalTileMode(
    _In_  XG_RESOURCE_DIMENSION ResourceDimension,
    _In_  XG_FORMAT Format,
    _In_  UINT32 Width,
    _In_  UINT32 Height,
    _In_  UINT32 DepthOrArraySize,
    _In_  UINT32 SampleCount,
    _In_  UINT BindFlags,                   // Any of XG_BIND_FLAG.
    _In_  UINT MiscFlags = 0                // Any of XG_RESOURCE_MISC_FLAG.
);

//-------------------------------------------------------------------------------------------------
// XGComputeOptimalDepthStencilTileModes computes the correct tile modes for the given depth 
// stencil configuration.

VOID __cdecl XGComputeOptimalDepthStencilTileModes(
    _In_  XG_FORMAT Format,
    _In_  UINT32 Width,
    _In_  UINT32 Height,
    _In_  UINT32 DepthOrArraySize,
    _In_  UINT32 SampleCount,
    _In_  BOOL Compressed,
    _Out_ XG_TILE_MODE* pDepthTileMode,
    _Out_ XG_TILE_MODE* pStencilTileMode
);

//-------------------------------------------------------------------------------------------------
// XGTextureAddressComputer holds a computed texture layout for a given texture resource, along with 
// additional state that allows the user to perform texture element microtiling and macrotiling.
// The class is refcounted and will delete itself when its refcount reaches 0.

class XGTextureAddressComputer
{
public:
    //-------------------------------------------------------------------------------------------------
    // Increments the refcount and returns the new value.
    virtual ULONG __cdecl AddRef() = 0;

    //-------------------------------------------------------------------------------------------------
    // Decrements the refcount and returns the new value.  If the new value is 0, the object is deleted.
    virtual ULONG __cdecl Release() = 0;

    //-------------------------------------------------------------------------------------------------
    // Returns the XG_RESOURCE_LAYOUT that was computed for this texture resource.
    virtual HRESULT __cdecl GetResourceLayout( 
        _Out_ XG_RESOURCE_LAYOUT* pLayout 
    ) = 0;

    //-------------------------------------------------------------------------------------------------
    // Computes the offset in bytes of the given mip level on the given plane, from the base address
    // of the resource.
    virtual UINT64 __cdecl GetMipLevelOffsetBytes(
        _In_  UINT32 Plane,
        _In_  UINT32 MipLevel
    ) = 0;

    //-------------------------------------------------------------------------------------------------
    // Computes the offset in bytes of the given texel element, from the base address of the resource.
    virtual UINT64 __cdecl GetTexelElementOffsetBytes(
        _In_  UINT32 Plane,
        _In_  UINT32 MipLevel,
        _In_  UINT64 X,
        _In_  UINT32 Y,
        _In_  UINT32 ZOrSlice,
        _In_  UINT32 Sample 
    ) = 0;

    //-------------------------------------------------------------------------------------------------
    // Copies the 2D or 3D linear input data into the given subresource (mip + slice) of the resource,
    // using pTiledResourceBaseAddress as the resource's base address.  For offline texture preparation,
    // pTiledResourceBaseAddress does not need to be properly aligned.
    virtual HRESULT __cdecl CopyIntoSubresource(
        _Inout_ VOID* pTiledResourceBaseAddress,
        _In_    UINT32 Plane,
        _In_    UINT32 Subresource,
        _In_    const VOID* pLinearData,
        _In_    UINT32 RowPitchBytes,
        _In_    UINT32 SlicePitchBytes 
    ) = 0;

    //-------------------------------------------------------------------------------------------------
    // Copies the 2D or 3D linear input data into the given subresource (mip + slice) of the resource,
    // using pTiledResourceBaseAddress as the resource's base address.  For offline texture preparation,
    // pTiledResourceBaseAddress does not need to be properly aligned.
    virtual HRESULT __cdecl CopyFromSubresource(
        _Inout_ VOID* pLinearData,
        _In_    UINT32 Plane,
        _In_    UINT32 Subresource,
        _In_    const VOID* pTiledResourceBaseAddress,
        _In_    UINT32 RowPitchBytes,
        _In_    UINT32 SlicePitchBytes 
    ) = 0;

    //-------------------------------------------------------------------------------------------------
    // Returns the resource tiling layout, if the resource is created as a tiled resource using the
    // XG_RESOURCE_MISC_TILED flag.
    virtual HRESULT __cdecl GetResourceTiling(
        _Out_opt_   UINT32 *pNumTilesForEntireResource,
        _Out_opt_   XG_PACKED_MIP_DESC *pPackedMipDesc,
        _Out_opt_   XG_TILE_SHAPE *pStandardTileShapeForNonPackedMips,
        _Inout_opt_ UINT32 *pNumSubresourceTilings,
        _In_        UINT32 FirstSubresourceTilingToGet,
        _Out_writes_(*pNumSubresourceTilings) XG_SUBRESOURCE_TILING *pSubresourceTilingsForNonPackedMips
    ) = 0;
};

//-------------------------------------------------------------------------------------------------
// XGCreateTexture1DComputer creates a texture address computer object for the given 1D texture desc.

HRESULT __cdecl XGCreateTexture1DComputer( 
    _In_  const XG_TEXTURE1D_DESC* pDesc,
    _Out_ XGTextureAddressComputer** ppComputer 
);

//-------------------------------------------------------------------------------------------------
// XGCreateTexture2DComputer creates a texture address computer object for the given 2D texture desc.

HRESULT __cdecl XGCreateTexture2DComputer( 
    _In_  const XG_TEXTURE2D_DESC* pDesc,
    _Out_ XGTextureAddressComputer** ppComputer 
);

//-------------------------------------------------------------------------------------------------
// XGCreateTexture3DComputer creates a texture address computer object for the given 3D texture desc.

HRESULT __cdecl XGCreateTexture3DComputer( 
    _In_  const XG_TEXTURE3D_DESC* pDesc,
    _Out_ XGTextureAddressComputer** ppComputer 
);

//--------------------------------------------------------------------------------------------------
// XG_VALIDATED_JPEG_DESC holds the validation results of a JPEG file stream.
struct XG_VALIDATED_JPEG_DESC
{
    XG_FORMAT DecodedFormat;
    UINT32 PixelWidth;
    UINT32 PixelHeight;
    UINT32 UnusedHeadersBytes;
};

//--------------------------------------------------------------------------------------------------
// XGValidateJpegFile validates a JPEG file for hardware decode.  The JPEG file is passed as a
// memory buffer, and the results are passed in the output desc.  This method only examines the JFIF
// header data, and does not decode the image on the CPU or inspect any of the image data in any way.
// If XGValidateJpegFile returns an error code, then the DMA engine JPEG decoder will not be able to 
// successfully decode the JPEG file.
HRESULT __cdecl XGValidateJpegFile(
    _In_  const void* pJpegFileBuffer,
    _In_  UINT32 JpegFileBufferSizeBytes,
    _Out_ XG_VALIDATED_JPEG_DESC* pDesc 
);

//--------------------------------------------------------------------------------------------------
// XGComputeTileShape returns the shape of a single tiled resource tile for the given format.
// If Format is XG_FORMAT_UNKNOWN, then the BytesPerElement parameter is used instead; 
// in that case BytesPerElement must be 1, 2, 4, 8, or 16 bytes.  If Format is not 
// XG_FORMAT_UNKNOWN, then the value of BytesPerElement is ignored and is computed by this function.
// SampleCount must be 1 for all resource dimensions other than Texture2D. 
// For Texture2D, SampleCount must be one of 1, 2, 4, or 8.
// The tile shape is returned both in units of texels and elements.  If Format is XG_FORMAT_UNKNOWN,
// then pTileShapeInTexels will be filled with zeros if present.
HRESULT __cdecl XGComputeTileShape(
    _In_      XG_RESOURCE_DIMENSION Dimension,
    _In_      XG_FORMAT Format,
    _In_      UINT32 BytesPerElement,
    _In_      UINT32 SampleCount,
    _Out_opt_ XG_TILE_SHAPE* pTileShapeInTexels,
    _Out_opt_ XG_TILE_SHAPE_ELEMENTS* pTileShapeInElements );

