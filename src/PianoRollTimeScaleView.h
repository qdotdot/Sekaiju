//******************************************************************************
// MIDIシーケンサーソフト『世界樹』
// ピアノロールタイムスケールビュークラス
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

#ifndef _PIANOROLLTIMESCALEVIEW_H_
#define _PIANOROLLTIMESCALEVIEW_H_

class CPianoRollTimeScaleView : public CSekaijuView {

	DECLARE_DYNCREATE (CPianoRollTimeScaleView)

	//--------------------------------------------------------------------------
	// 構築と破壊
	//--------------------------------------------------------------------------
public:
	CPianoRollTimeScaleView();          // コンストラクタ
	virtual ~CPianoRollTimeScaleView(); // デストラクタ

	//--------------------------------------------------------------------------
	// アトリビュート
	//--------------------------------------------------------------------------
protected:
	CPoint m_ptMouseDown;               // マウスが押されたときの座標
	CPoint m_ptMouseMove;               // マウスが動かされたときの前回の座標
	UINT   m_nMouseDownFlags;           // マウスが押されたときのフラグ
	UINT   m_nMouseMoveFlags;           // マウスが動かされたときの前回のフラグ
	long   m_lDownTime;                 // マウスが押されたときの時のタイム(0〜)[tick]
	long   m_lOldTime;                  // マウスが動かされたときの前回のタイム(0〜)[tick]
	long   m_lCurTime;                  // マウスが動かされたときの現在のタイム(0〜)[tick]
	long   m_lTempSnap;                 // 一時的なスナップタイム(1〜)[tick]

	//--------------------------------------------------------------------------
	// オペレーション
	//--------------------------------------------------------------------------
public:
	virtual void DrawFlagAndText (CDC* pDC, long lTime, LPCTSTR lpszText, long lColor);

	//--------------------------------------------------------------------------
	// オーバーライド
	//--------------------------------------------------------------------------
protected:
	virtual void OnDraw (CDC* pDC);
	virtual void OnPrepareDC (CDC* pDC, CPrintInfo* pInfo);
	virtual void OnUpdate (CView* pSender, LPARAM lHint, CObject* pHint);

	//--------------------------------------------------------------------------
	// メッセージマップ
	//--------------------------------------------------------------------------
protected:
	afx_msg BOOL OnCreate (LPCREATESTRUCT lpcs);
	afx_msg void OnKeyDown (UINT nChar, UINT nRepCnt, UINT nFlags);
	afx_msg void OnLButtonDown (UINT nFlags, CPoint point);
	afx_msg void OnRButtonDown (UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp (UINT nFlags, CPoint point);
	afx_msg void OnRButtonUp (UINT nFlags, CPoint point);
	afx_msg void OnMouseMove (UINT nFlags, CPoint point);
	afx_msg void OnLButtonDblClk (UINT nFlags, CPoint point);
	afx_msg void OnRButtonDblClk (UINT nFlags, CPoint point);
	afx_msg void OnTimer (UINT nIDEvent);
	afx_msg void OnMouseWheel40 (UINT nFlags, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#endif
