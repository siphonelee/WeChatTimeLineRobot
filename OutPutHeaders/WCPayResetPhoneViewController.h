/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "WCPayBaseViewController.h"
#import "ILinkEventExt.h"

@class NSString, UIButton, WCBizInfoGroup, WCBaseKeyboardToolBar, WCPayPhoneTextItem;
@protocol WCPayResetPhoneViewViewControllerDelegate;

@interface WCPayResetPhoneViewController : WCPayBaseViewController <ILinkEventExt> {
	UIButton* m_footerButton;
	WCBizInfoGroup* m_group;
	WCPayPhoneTextItem* m_textFieldItem;
	WCBaseKeyboardToolBar* m_keyboardBar;
	id<WCPayResetPhoneViewViewControllerDelegate> m_delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)WCBaseInfoItemEndEdit:(id)edit;
-(void)WCBaseInfoItemBeginEdit:(id)edit;
-(void)WCBaseInfoItemEditChanged:(id)changed;
-(void)onPhoneClicked:(id)clicked withRect:(CGRect)rect;
-(void)makeInfoCell:(id)cell cellInfo:(id)info;
-(void)setDelegate:(id)delegate;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(void)showDetailTip;
-(void)reloadTableView;
-(void)initNavigationBar;
-(void)initFooterView;
-(void)onNext;
-(void)dealloc;
-(id)init;
@end

