#ifndef _COMBOBOX_H_
#define _COMBOBOX_H_

#include "Window.h"
#include "Types.h"

namespace Framework
{
	namespace Win32
	{
		class CComboBox : public CWindow
		{
		public:
							CComboBox(HWND, RECT*, unsigned long = 0);
			unsigned int	AddString(const xchar*);
			int				GetSelection();
			void			SetSelection(int);
			unsigned int	GetItemCount();
			void			SetItemData(unsigned int, uint32);
			uint32			GetItemData(unsigned int);
			int				FindItemData(uint32);
			void			FixHeight(unsigned int);
		};
	}
}

#endif