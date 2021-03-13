#pragma once
#include <afxwin.h>
#include "resource.h"

class ModalDialog :
    public CDialog
{
public:
    ModalDialog(CWnd* pParent = NULL) : CDialog(IDD_MODELESS_DIALOG, pParent)
    {
    }
};

