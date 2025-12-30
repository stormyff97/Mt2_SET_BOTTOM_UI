//after the function	void CWindowManager::SetTop(CWindow * pWin)

//add:
#ifdef SET_BOTTOM_UI
	void CWindowManager::SetBottom(CWindow* pWin)
	{
		if (!pWin->HasParent())
			return;

		CWindow* pParentWindow = pWin->GetParent();
		pParentWindow->SetBottom(pWin);
	}
#endif

//into 	void CWindowManager::SetTopUIWindow()
    //after
		if (pTopWindow)
		{
    //add:
#ifdef SET_BOTTOM_UI
			if (pTopWindow->IsFlag(CWindow::FLAG_NO_TOP_ON_CLICK))
				return;
#endif



//example:
		if (pTopWindow)
		{
#ifdef SET_BOTTOM_UI
			if (pTopWindow->IsFlag(CWindow::FLAG_NO_TOP_ON_CLICK))
				return;
#endif
			SetTop(pTopWindow);
		}