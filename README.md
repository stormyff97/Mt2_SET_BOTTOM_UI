DO NOT FORGET TO DEFINE "SET_BOTTOM_UI" into locale_inc.h

Flag Usage Example:

		if app.DESTINY_WHEEL:
			self.wheelbtn = ui.Button()
			self.wheelbtn.AddFlag("float") 
			if app.SET_BOTTOM_UI:
				self.wheelbtn.AddFlag("no_top_on_click")
			self.wheelbtn.SetUpVisual(IMG_DIR+"destinywheel.tga")
			self.wheelbtn.SetOverVisual(IMG_DIR+"destinywheel_hover.tga")
			self.wheelbtn.SetDownVisual(IMG_DIR+"destinywheel_push.tga")
			self.wheelbtn.SetEvent(self.OpenDestinyWheel)	
      
Explanation: This way the flag				self.wheelbtn.AddFlag("no_top_on_click") will don t allow the button to be setted top when is it clicked (nice for ui visual tricks)


Function Usage Example:

	if app.DESTINY_WHEEL:
		def OpenDestinyWheel(self):
			self.LoadFirstOpening()

			if app.ENABLE_CEF_BROWSER:
				self.OpenWeb(WHEEL_LINK)
			else:
				os.system("start \"\" " + WHEEL_LINK)
			if app.SET_BOTTOM_UI:
				self.wheelbtn.SetBottom()
        
Explanation: This way the function 				self.wheelbtn.SetBottom()    will set bottom the ui button (wheelbtn), another good way to use this function is to make a button that hides ui objects for example.

[Video Example]([LINK_COMPLETO_DEL_VIDEO](https://youtu.be/cotrHOYmnqI))
