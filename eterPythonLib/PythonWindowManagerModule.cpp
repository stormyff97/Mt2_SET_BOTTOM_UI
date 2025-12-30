//after the function:
PyObject * wndMgrSetTop(PyObject * poSelf, PyObject * poArgs)
{.....}
    //add
#ifdef SET_BOTTOM_UI
PyObject* wndMgrSetBottom(PyObject* poSelf, PyObject* poArgs)
{
	UI::CWindow* pWin;
	if (!PyTuple_GetWindow(poArgs, 0, &pWin))
		return Py_BuildException();

	UI::CWindowManager::Instance().SetBottom(pWin);
	return Py_BuildNone();
}
#endif

//into PyObject * wndMgrAddFlag(PyObject * poSelf, PyObject * poArgs)
    //after:
		else if (!stricmp(pszFlag, "ltr"))
			pWin->RemoveFlag(UI::CWindow::FLAG_RTL);
//add:
#ifdef SET_BOTTOM_UI
		else if (!stricmp(pszFlag, "no_top_on_click"))
			pWin->AddFlag(UI::CWindow::FLAG_NO_TOP_ON_CLICK);
#endif

//after:
		{ "SetTop",						wndMgrSetTop,						METH_VARARGS },
//add:
#ifdef SET_BOTTOM_UI
		{ "SetBottom",					wndMgrSetBottom,					METH_VARARGS },
#endif