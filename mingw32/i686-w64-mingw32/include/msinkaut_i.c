/*** Autogenerated by WIDL 7.0 from include/msinkaut.idl - Do not edit ***/

#include <rpc.h>
#include <rpcndr.h>

#ifdef _MIDL_USE_GUIDDEF_

#ifndef INITGUID
#define INITGUID
#include <guiddef.h>
#undef INITGUID
#else
#include <guiddef.h>
#endif

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
    DEFINE_GUID(name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8)

#elif defined(__cplusplus)

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
    EXTERN_C const type DECLSPEC_SELECTANY name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#else

#define MIDL_DEFINE_GUID(type,name,l,w1,w2,b1,b2,b3,b4,b5,b6,b7,b8) \
    const type DECLSPEC_SELECTANY name = {l,w1,w2,{b1,b2,b3,b4,b5,b6,b7,b8}}

#endif

#ifdef __cplusplus
extern "C" {
#endif

MIDL_DEFINE_GUID(IID, IID_IInkExtendedProperty, 0xdb489209, 0xb7c3, 0x411d, 0x90,0xf6, 0x15,0x48,0xcf,0xff,0x27,0x1e);
MIDL_DEFINE_GUID(IID, IID_IInkExtendedProperties, 0x89f2a8be, 0x95a9, 0x4530, 0x8b,0x8f, 0x88,0xe9,0x71,0xe3,0xe2,0x5f);
MIDL_DEFINE_GUID(IID, IID_IInkDrawingAttributes, 0xbf519b75, 0x0a15, 0x4623, 0xad,0xc9, 0xc0,0x0d,0x43,0x6a,0x80,0x92);
MIDL_DEFINE_GUID(IID, IID_IInkRectangle, 0x9794ff82, 0x6071, 0x4717, 0x8a,0x8b, 0x6a,0xc7,0xc6,0x4a,0x68,0x6e);
MIDL_DEFINE_GUID(IID, IID_IInkTablet, 0x2de25eaa, 0x6ef8, 0x42d5, 0xae,0xe9, 0x18,0x5b,0xc8,0x1b,0x91,0x2d);
MIDL_DEFINE_GUID(IID, IID_IInkCursorButton, 0x85ef9417, 0x1d59, 0x49b2, 0xa1,0x3c, 0x70,0x2c,0x85,0x43,0x08,0x94);
MIDL_DEFINE_GUID(IID, IID_IInkCursorButtons, 0x3671cc40, 0xb624, 0x4671, 0x9f,0xa0, 0xdb,0x11,0x9d,0x95,0x2d,0x54);
MIDL_DEFINE_GUID(IID, IID_IInkCursor, 0xad30c630, 0x40c5, 0x4350, 0x84,0x05, 0x9c,0x71,0x01,0x2f,0xc5,0x58);
MIDL_DEFINE_GUID(IID, IID_IInkTransform, 0x615f1d43, 0x8703, 0x4565, 0x88,0xe2, 0x82,0x01,0xd2,0xec,0xd7,0xb7);
MIDL_DEFINE_GUID(IID, IID_IInkRecognitionAlternates, 0x286a167f, 0x9f19, 0x4c61, 0x9d,0x53, 0x4f,0x07,0xbe,0x62,0x2b,0x84);
MIDL_DEFINE_GUID(IID, IID_IInkRecognitionAlternate, 0xb7e660ad, 0x77e4, 0x429b, 0xad,0xda, 0x87,0x37,0x80,0xd1,0xfc,0x4a);
MIDL_DEFINE_GUID(IID, IID_IInkRecognitionResult, 0x3bc129a8, 0x86cd, 0x45ad, 0xbd,0xe8, 0xe0,0xd3,0x2d,0x61,0xc1,0x6d);
MIDL_DEFINE_GUID(IID, IID_IInkStrokeDisp, 0x43242fea, 0x91d1, 0x4a72, 0x96,0x3e, 0xfb,0xb9,0x18,0x29,0xcf,0xa2);
MIDL_DEFINE_GUID(IID, IID_IInkCustomStrokes, 0x7e23a88f, 0xc30e, 0x420f, 0x9b,0xdb, 0x28,0x90,0x25,0x43,0xf0,0xc1);
MIDL_DEFINE_GUID(IID, IID_IInkDisp, 0x9d398fa0, 0xc4e2, 0x4fcd, 0x99,0x73, 0x97,0x5c,0xaa,0xf4,0x7e,0xa6);
MIDL_DEFINE_GUID(IID, IID_IInkStrokes, 0xf1f4c9d8, 0x590a, 0x4963, 0xb3,0xae, 0x19,0x35,0x67,0x1b,0xb6,0xf3);
MIDL_DEFINE_GUID(IID, IID_IInkRenderer, 0xe6257a9c, 0xb511, 0x4f4c, 0xa8,0xb0, 0xa7,0xdb,0xc9,0x50,0x6b,0x83);
MIDL_DEFINE_GUID(IID, IID_IInkCursors, 0xa248c1ac, 0xc698, 0x4e06, 0x9e,0x5c, 0xd5,0x7f,0x77,0xc7,0xe6,0x47);
MIDL_DEFINE_GUID(IID, IID_IInkCollector, 0xf0f060b5, 0x8b1f, 0x4a7c, 0x89,0xec, 0x88,0x06,0x92,0x58,0x8a,0x4f);
MIDL_DEFINE_GUID(IID, DIID__IInkCollectorEvents, 0x11a583f2, 0x712d, 0x4fea, 0xab,0xcf, 0xab,0x4a,0xf3,0x8e,0xa0,0x6b);
MIDL_DEFINE_GUID(CLSID, CLSID_InkCollector, 0x43fb1553, 0xad74, 0x4ee8, 0x88,0xe4, 0x3e,0x6d,0xaa,0xc9,0x15,0xdb);

#ifdef __cplusplus
}
#endif

#undef MIDL_DEFINE_GUID
