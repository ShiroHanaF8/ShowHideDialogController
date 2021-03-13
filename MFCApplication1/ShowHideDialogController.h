#pragma once
/**
 * ShowHideDialogController.h
 * Controller to hide associated dialog temporarily
 * This class is supposed to use as temp value
 * 
 * These codes are licensed under CC0.
 * http://creativecommons.org/publicdomain/zero/1.0/deed.ja
 *
*/

class ShowHideDialogController
{
public:
	// Hide associated dialog
	ShowHideDialogController(CWnd* dialog)
	{
		m_objectiveDialog = dialog;

		if (m_objectiveDialog != nullptr
			&& ::IsWindow(m_objectiveDialog->GetSafeHwnd())
			&& m_objectiveDialog->IsWindowVisible())
		{
			m_isDialogHidden = true;
			m_objectiveDialog->ShowWindow(SW_HIDE);
		}
	}

	// Show associated dialog if needed
	~ShowHideDialogController()
	{
		if (m_isDialogHidden) {
			if (m_objectiveDialog != nullptr
				&& ::IsWindow(m_objectiveDialog->GetSafeHwnd())) {
				m_objectiveDialog->ShowWindow(SW_SHOW);
			}
		}
	}

	bool IsDlalogHidden() { return m_isDialogHidden; }
private:
	bool m_isDialogHidden = false;
	CWnd* m_objectiveDialog = nullptr;
};

