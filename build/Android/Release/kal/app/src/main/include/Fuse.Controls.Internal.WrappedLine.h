// This file was generated based on '/usr/local/share/uno/Packages/Fuse.Controls/0.27.10/Internal/$.uno#4'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>
namespace g{namespace Fuse{namespace Controls{namespace Internal{struct WordWrapInfo;}}}}
namespace g{namespace Fuse{namespace Controls{namespace Internal{struct WrappedLine;}}}}

namespace g{
namespace Fuse{
namespace Controls{
namespace Internal{

// internal sealed class WrappedLine :470
// {
uType* WrappedLine_typeof();
void WrappedLine__ctor__fn(WrappedLine* __this, uString* text, int* lineTextStartOffset, float* yOffset, float* lineWidth);
void WrappedLine__GetXOffset_fn(WrappedLine* __this, int* textAlignment, float* boundsWidth, float* absoluteZoom, float* __retval);
void WrappedLine__get_LineTextEndOffset_fn(WrappedLine* __this, int* __retval);
void WrappedLine__New1_fn(uString* text, int* lineTextStartOffset, float* yOffset, float* lineWidth, WrappedLine** __retval);
void WrappedLine__PosToBounds_fn(WrappedLine* __this, ::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int* p, float* __retval);

struct WrappedLine : uObject
{
    int LineTextStartOffset;
    float LineWidth;
    uStrong<uString*> Text;
    float YOffset;

    void ctor_(uString* text, int lineTextStartOffset, float yOffset, float lineWidth);
    float GetXOffset(int textAlignment, float boundsWidth, float absoluteZoom);
    int LineTextEndOffset();
    float PosToBounds(::g::Fuse::Controls::Internal::WordWrapInfo* wrapInfo, int p);
    static WrappedLine* New1(uString* text, int lineTextStartOffset, float yOffset, float lineWidth);
};
// }

}}}} // ::g::Fuse::Controls::Internal