// after the function 	void CWindow::SetTop(CWindow * pWin)
    //add this function:

    #ifdef SET_BOTTOM_UI
	void CWindow::SetBottom(CWindow* pWin)
	{
		if (!pWin->IsFlag(CWindow::FLAG_FLOAT))
			return;

		TWindowContainer::iterator itor = std::find(m_pChildList.begin(), m_pChildList.end(), pWin);

		if (m_pChildList.end() != itor)
		{
			m_pChildList.push_front(*itor);
			m_pChildList.erase(itor);
		}
		else
		{
			TraceError(" CWindow::SetBottom - Failed to find child window\n");
		}
	}
#endif