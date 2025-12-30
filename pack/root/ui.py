#after 
	def SetTop(self):
		wndMgr.SetTop(self.hWnd)

#add:

	if app.SET_BOTTOM_UI:
		def SetBottom(self):
			wndMgr.SetBottom(self.hWnd)