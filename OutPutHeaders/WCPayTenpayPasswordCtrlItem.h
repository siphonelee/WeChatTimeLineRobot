/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "WCPayLogicMgrExt.h"
#import "TenpayPasswordCtrlDelegate.h"
#import "WCBaseInfoItem.h"

@class UIImage, TenpayPasswordCtrl, NSString;

@interface WCPayTenpayPasswordCtrlItem : WCBaseInfoItem <TenpayPasswordCtrlDelegate, WCPayLogicMgrExt> {
	TenpayPasswordCtrl* m_textField;
	UIImage* m_image;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)autoRemarkKeyBoradType;
-(void)OnGetTenpaySecureCtrlSalt:(id)salt Date:(id)date Error:(id)error;
-(BOOL)onError:(id)error;
-(void)passwordCtrlDidEndEditing:(id)passwordCtrl;
-(void)passwordCtrlDidBeginEditing:(id)passwordCtrl;
-(void)passwordCtrlShouldChange:(id)passwordCtrl;
-(id)getHashData;
-(void)dealloc;
-(id)initWithImage:(id)image;
-(void)resignFirstResponder;
-(void)becomeFirstResponder;
-(void)clearInput;
-(void)initView:(CGRect)view;
-(id)getValue;
-(CGSize)getSize;
-(int)getTextLength;
@end

