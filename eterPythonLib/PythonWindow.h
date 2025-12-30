//into this enum:
			enum EFlags

            //add
#ifdef SET_BOTTOM_UI
				FLAG_NO_TOP_ON_CLICK	= (1 << 12),   // IMPORTANT: VALUE 12 IS JUST AN EXAMPLE USE AN UNIQUE VALUE, FOR YOU!!!
#endif

//example:
			enum EFlags
			{
				FLAG_MOVABLE			= (1 <<  0),
				FLAG_LIMIT				= (1 <<  1),
				FLAG_SNAP				= (1 <<  2),
				FLAG_DRAGABLE			= (1 <<  3),
				FLAG_ATTACH				= (1 <<  4),
				FLAG_RESTRICT_X			= (1 <<  5),
				FLAG_RESTRICT_Y			= (1 <<  6),
				FLAG_NOT_CAPTURE		= (1 <<  7),
				FLAG_FLOAT				= (1 <<  8),
				FLAG_NOT_PICK			= (1 <<  9),
				FLAG_IGNORE_SIZE		= (1 << 10),
				FLAG_RTL				= (1 << 11),	// Right-to-left
#ifdef SET_BOTTOM_UI
				FLAG_NO_TOP_ON_CLICK	= (1 << 12),
#endif
			};

//search:
			void			SetTop(CWindow * pWin);

			//add after:
#ifdef SET_BOTTOM_UI
			void			SetBottom(CWindow* pWin); 
#endif