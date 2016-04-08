/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "WCAccountBaseViewController.h"
#import "TakeOrSelectHeadImageLogicDelegate.h"

@class MMTimer, UILabel, UIImageView, NSString, TakeOrSelectHeadImageLogic, UIButton, NSMutableDictionary, UIImage, UIActivityIndicatorView, WCAccountTextFieldItem, NSMutableArray, WCBaseKeyboardToolBar;
@protocol WCAccountRegisterViewControllerDelegate;

@interface WCAccountRegisterViewController : WCAccountBaseViewController <TakeOrSelectHeadImageLogicDelegate> {
	BOOL m_bReadAgreement;
	WCAccountTextFieldItem* m_textFieldNameItem;
	WCAccountTextFieldItem* m_textFieldIDItem;
	WCBaseKeyboardToolBar* m_keyboardBar;
	UIButton* m_btnHeadimage;
	UIImageView* m_idTipImageView;
	UILabel* m_footerTip;
	UIImageView* m_nameOKImageView;
	UIImageView* m_idOKImageView;
	UIActivityIndicatorView* m_idLoadingView;
	TakeOrSelectHeadImageLogic* m_photoLogic;
	id<WCAccountRegisterViewControllerDelegate> m_delegate;
	UIImage* m_headImage;
	UIButton* m_btnNext;
	NSMutableArray* m_arrMenuItems;
	NSMutableDictionary* m_dicAction;
	MMTimer* m_aliasTimer;
	NSString* m_nsLastWechatID;
	BOOL m_bFirstSuggestAlias;
	NSString* m_nsWechatIDTip;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(BOOL)recoverFromArchive:(id)archive;
-(id)getArchive;
-(void)WCBaseInfoItemEditChanged:(id)changed;
-(void)WCBaseInfoItemEndEdit:(id)edit;
-(void)WCBaseInfoItemPressReturnKey:(id)key;
-(void)WCBaseInfoItemBeginEdit:(id)edit;
-(void)resetSuggestAlias;
-(void)getSuggestAlias;
-(BOOL)isLastWeChatIDChanged;
-(BOOL)canPerformAction:(SEL)action withSender:(id)sender;
-(BOOL)canBecomeFirstResponder;
-(void)MenuControllerWillHide:(id)menuController;
-(void)refreshViewWithUserName:(id)userName;
-(void)updateMenu:(id)menu;
-(void)forwarder:(id)forwarder;
-(void)setDelegate:(id)delegate;
-(void)didReceiveMemoryWarning;
-(void)getAliasDone;
-(void)setAliasOK;
-(void)setError:(id)error;
-(void)viewDidLoad;
-(BOOL)isShowWeChatID;
-(BOOL)isShowHead;
-(void)showHeadImageOption;
-(void)onGetHeadImage:(id)image;
-(void)onNext;
-(void)initNavigationBar;
-(void)onRegNickNameBack;
-(void)dealloc;
-(id)init;
@end

