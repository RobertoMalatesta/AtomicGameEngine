
#pragma once

#include "UIWidget.h"

namespace Atomic
{

class UITextField : public UIWidget
{
    OBJECT(UITextField)

public:

    UITextField(Context* context, bool createWidget = true);
    virtual ~UITextField();

protected:

    virtual bool OnEvent(const tb::TBWidgetEvent &ev);

private:

};

}
