/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCBaseControlLogic.h"

@class WCBizLoadingView;

@interface WCBizControlLogic : WCBaseControlLogic {
	WCBizLoadingView* m_loadView;
}
-(void).cxx_destruct;
-(void)showLoadingOK:(id)ok;
-(void)stopLoading;
-(void)startLoadingWithTip:(id)tip;
-(void)startLoading;
-(void)dealloc;
-(void)initLoadView;
@end

