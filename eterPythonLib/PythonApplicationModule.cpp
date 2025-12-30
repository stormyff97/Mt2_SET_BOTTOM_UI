//after the other exported constants add (att the bottom of the file):
#ifdef SET_BOTTOM_UI
	PyModule_AddIntConstant(poModule, "SET_BOTTOM_UI", 1);
#else
	PyModule_AddIntConstant(poModule, "SET_BOTTOM_UI", 0);
#endif
