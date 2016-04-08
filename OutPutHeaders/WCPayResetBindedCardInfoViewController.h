/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "WCPayBaseViewController.h"
#import "ILinkEventExt.h"

@class WCPayValidDateItem, NSString, UIButton, WCPayCVVItem, WCBaseKeyboardToolBar;
@protocol WCPayResetBindedCardInfoViewControllerDelegate;

@interface WCPayResetBindedCardInfoViewController : WCPayBaseViewController <ILinkEventExt> {
	BOOL m_bCVV;
	BOOL m_bValidDate;
	UIButton* m_footerButton;
	WCPayCVVItem* m_textFieldCVVItem;
	WCPayValidDateItem* m_pikerValidDateItem;
	WCBaseKeyboardToolBar* m_keyboardBar;
	id<WCPayResetBindedCardInfoViewControllerDelegate> m_delegate;
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
-(void)showDetailTip;
-(void)setDelegate:(id)delegate;
-(void)didReceiveMemoryWarning;
-(void)viewDidLoad;
-(void)makeInfoCell:(id)cell cellInfo:(id)info;
-(void)setItemWithCVV:(BOOL)cvv ValidDate:(BOOL)date;
-(void)initNavigationBar;
-(void)initFooterView;
-(void)onNext;
-(void)dealloc;
-(id)init;
@end

