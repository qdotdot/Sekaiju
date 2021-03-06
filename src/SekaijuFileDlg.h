//******************************************************************************
// MIDIシーケンサーソフト『世界樹』
// 世界樹ファイルダイアログクラス
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

#ifndef _SEKAIJUFILEDLG_H_
#define _SEKAIJUFILEDLG_H_

class CSekaijuFileDlg : public CFileDialog {

	//DECLARE_DYNAMIC (CSekaijuFileDlg)
	
	//--------------------------------------------------------------------------
	// 構築と破壊
	//--------------------------------------------------------------------------
	// コンストラクタ
public:
	CSekaijuFileDlg (BOOL bOpenFileDialog); 
	CSekaijuFileDlg (BOOL bOpenFileDialog,
		LPCTSTR lpszDefExt, LPCTSTR lpszFileName, DWORD dwFlags,
		LPCTSTR lpszFilter, CWnd* pParentWnd);

	//--------------------------------------------------------------------------
	// アトリビュート
	//--------------------------------------------------------------------------
public:
	CString m_strDefExt; // デフォルトの拡張子(ファイルタイプを切り替えるたびに更新)

	//--------------------------------------------------------------------------
	// オーバーライド
	//--------------------------------------------------------------------------
public:
	//virtual int DoModal ();
	virtual void OnTypeChange (); // ファイルタイプが変更された
};

#endif
