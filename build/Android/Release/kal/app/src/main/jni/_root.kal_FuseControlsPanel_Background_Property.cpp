// This file was generated based on '/Users/mayur404/Dropbox/Public/Little Boat/InHouse/BlackBerry/Kalendar/Priv/fuse/.uno/kal.unoproj.g.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#include <_root.kal_FuseControlsPanel_Background_Property.h>
#include <Fuse.Controls.Control.h>
#include <Fuse.Controls.Panel.h>
#include <Uno.Object.h>
static uType* TYPES[1];

namespace g{

// internal sealed class kal_FuseControlsPanel_Background_Property :38
// {
::g::Uno::UX::Property_type* kal_FuseControlsPanel_Background_Property_typeof()
{
    static uSStrong< ::g::Uno::UX::Property_type*> type;
    if (type != NULL) return type;

    uTypeOptions options;
    options.FieldCount = 3;
    options.ObjectSize = sizeof(kal_FuseControlsPanel_Background_Property);
    options.TypeSize = sizeof(::g::Uno::UX::Property_type);
    type = (::g::Uno::UX::Property_type*)uClassType::New("kal_FuseControlsPanel_Background_Property", options);
    type->SetBase(::g::Uno::UX::Property_typeof()->MakeType(::g::Fuse::Drawing::Brush_typeof()));
    type->fp_OnGet = (void(*)(::g::Uno::UX::Property*, uTRef))kal_FuseControlsPanel_Background_Property__OnGet_fn;
    type->fp_OnSet = (void(*)(::g::Uno::UX::Property*, void*, uObject*))kal_FuseControlsPanel_Background_Property__OnSet_fn;
    ::TYPES[0] = ::g::Fuse::Controls::Control_typeof();
    type->SetFields(2,
        ::g::Fuse::Controls::Panel_typeof(), offsetof(::g::kal_FuseControlsPanel_Background_Property, _obj), 0);
    return type;
}

// public kal_FuseControlsPanel_Background_Property(Fuse.Controls.Panel obj) :41
void kal_FuseControlsPanel_Background_Property__ctor_1_fn(kal_FuseControlsPanel_Background_Property* __this, ::g::Fuse::Controls::Panel* obj)
{
    __this->ctor_1(obj);
}

// public kal_FuseControlsPanel_Background_Property New(Fuse.Controls.Panel obj) :41
void kal_FuseControlsPanel_Background_Property__New1_fn(::g::Fuse::Controls::Panel* obj, kal_FuseControlsPanel_Background_Property** __retval)
{
    *__retval = kal_FuseControlsPanel_Background_Property::New1(obj);
}

// protected override sealed Fuse.Drawing.Brush OnGet() :42
void kal_FuseControlsPanel_Background_Property__OnGet_fn(kal_FuseControlsPanel_Background_Property* __this, ::g::Fuse::Drawing::Brush** __retval)
{
    return *__retval = uPtr(__this->_obj)->Background(), void();
}

// protected override sealed void OnSet(Fuse.Drawing.Brush v, object origin) :43
void kal_FuseControlsPanel_Background_Property__OnSet_fn(kal_FuseControlsPanel_Background_Property* __this, ::g::Fuse::Drawing::Brush* v, uObject* origin)
{
    uPtr(__this->_obj)->Background(v);
}

// public kal_FuseControlsPanel_Background_Property(Fuse.Controls.Panel obj) [instance] :41
void kal_FuseControlsPanel_Background_Property::ctor_1(::g::Fuse::Controls::Panel* obj)
{
    ctor_();
    _obj = obj;
}

// public kal_FuseControlsPanel_Background_Property New(Fuse.Controls.Panel obj) [static] :41
kal_FuseControlsPanel_Background_Property* kal_FuseControlsPanel_Background_Property::New1(::g::Fuse::Controls::Panel* obj)
{
    kal_FuseControlsPanel_Background_Property* obj1 = (kal_FuseControlsPanel_Background_Property*)uNew(kal_FuseControlsPanel_Background_Property_typeof());
    obj1->ctor_1(obj);
    return obj1;
}
// }

} // ::g