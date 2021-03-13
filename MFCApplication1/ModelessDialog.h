#pragma once
#include <afxwin.h>
#include "resource.h"

class ModelessDialog :
    public CDialog
{
public:
    ModelessDialog(CWnd *pParent = NULL) : CDialog(IDD_MODELESS_DIALOG, pParent){

    }

    enum IDD {idd = IDD_MODELESS_DIALOG};
    virtual BOOL OnInitDialog();
};

