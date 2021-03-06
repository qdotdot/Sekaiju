//******************************************************************************
// MIDIシーケンサーソフト『世界樹』
// インプレースエディットクラス
// (C)2002-2010 おーぷんMIDIぷろじぇくと／くず
//******************************************************************************

/* This library is free software; you can redistribute it and/or */
/* modify it under the terms of the GNU Lesser General Public */
/* License as published by the Free Software Foundation; either */
/* version 2.1 of the License, or (at your option) any later version. */

/* This library is distributed in the hope that it will be useful, */
/* but WITHOUT ANY WARRANTY; without even the implied warranty of */
/* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU */
/* Lesser General Public License for more details. */

/* You should have received a copy of the GNU Lesser General Public */
/* License along with this library; if not, write to the Free Software */
/* Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA */

#ifndef _INPLACEEDIT_H_
#define _INPLACEEDIT_H_

class CInplaceEdit : public CEdit {

	DECLARE_DYNCREATE (CInplaceEdit);

	//--------------------------------------------------------------------------
	// 構築と破壊
	//--------------------------------------------------------------------------
public:
	CInplaceEdit ();                    // コンストラクタ
	virtual ~CInplaceEdit ();           // デストラクタ

	//--------------------------------------------------------------------------
	// メッセージマップ
	//--------------------------------------------------------------------------
protected:
	afx_msg void OnKillFocus (CWnd* pNewWnd);
	afx_msg void OnKeyDown (UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnChar (UINT nChar, UINT nRepCnt, UINT nFlags);
	DECLARE_MESSAGE_MAP()

};

#endif
