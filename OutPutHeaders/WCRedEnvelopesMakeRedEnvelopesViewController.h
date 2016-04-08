/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "UITextFieldDelegate.h"
#import "UITextViewDelegate.h"
#import "WeChat-Structs.h"
#import "WCPayNoticeBannerDelegate.h"
#import "MMTableViewInfoDelegate.h"
#import "WCRedEnvelopesBaseViewController.h"
#import "ILinkEventExt.h"

@class UILabel, UIView, NSString, WCPayNoticeBanner, UIButton, MMTextView, RichTextView, WCBaseKeyboardToolBar, WCUITextField;
@protocol WCRedEnvelopesMakeRedEnvelopesViewControllerDelegate;

@interface WCRedEnvelopesMakeRedEnvelopesViewController : WCRedEnvelopesBaseViewController <WCPayNoticeBannerDelegate, UITextFieldDelegate, UITextViewDelegate, ILinkEventExt, MMTableViewInfoDelegate> {
	id<WCRedEnvelopesMakeRedEnvelopesViewControllerDelegate> m_delegate;
	int m_enMakeRedEnvelopesScene;
	WCUITextField* m_oSelectCountTextField;
	unsigned long m_uiSelectCount;
	UILabel* moneyLabel;
	UILabel* nsDefaultWishingLabel;
	WCUITextField* m_oMoneyTextField;
	MMTextView* m_textView;
	UIButton* normalRedEnvelopesButton;
	WCBaseKeyboardToolBar* m_keyboardBar;
	BOOL m_bDidBack;
	BOOL m_bCanHandleScrollViewDidChangedEvent;
	BOOL m_bNomalMoney;
	RichTextView* richTextView;
	UIView* m_oErrorView;
	UILabel* m_oErrorLabel;
	BOOL m_bError;
	BOOL m_bWaitFiveMintes;
	UIView* oCountSelectView;
	UIView* oSimpleMoneyView;
	int m_inputErrorType;
	WCPayNoticeBanner* _banner;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) WCPayNoticeBanner* banner;
@property(assign, nonatomic) int m_enMakeRedEnvelopesScene;
-(void).cxx_destruct;
-(void)handleTap:(id)tap;
-(void)banner:(id)banner clickWithUrl:(id)url;
-(void)refreshButtonFiveMintes;
-(void)setButtonWaitFiveMin;
-(void)OnClickTailActivity;
-(void)onLinkClicked:(id)clicked withRect:(CGRect)rect;
-(void)SetErrorTips;
-(void)SetLeftBarButtonClose;
-(void)textViewDidChange:(id)textView;
-(void)textViewDidEndEditing:(id)textView;
-(void)textViewDidBeginEditing:(id)textView;
-(BOOL)textView:(id)view shouldChangeTextInRange:(NSRange)range replacementText:(id)text;
-(BOOL)textViewShouldEndEditing:(id)textView;
-(BOOL)textViewShouldBeginEditing:(id)textView;
-(void)resetToCanHandleScrollViewChangedEnvent;
-(BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;
-(void)textFieldDidChanged:(id)textField;
-(void)textFieldDidEndEditing:(id)textField;
-(void)textFieldDidEndOnExit:(id)textField;
-(BOOL)textFieldShouldEndEditing:(id)textField;
-(BOOL)textFieldShouldBeginEditing:(id)textField;
-(void)setDelegate:(id)delegate;
-(void)OnMakeWCRedEnvelopesButtonClick;
-(void)adjustMoneyLabel;
-(void)checkDataError;
-(void)checkNextButtonStatus;
-(void)viewDidLoad;
-(void)animationDidStop:(id)animation finished:(id)finished context:(void*)context;
-(void)hideErrorViewWithAnimation;
-(void)hideErrorView;
-(void)showErrorView:(id)view ErrorType:(int)type;
-(void)initErrorView;
-(void)refreshViewWithData:(id)data;
-(void)reloadContentView;
-(void)initData;
-(void)dealloc;
-(void)viewDidBePoped:(BOOL)view;
-(void)OnRightBarButtonClick;
-(void)OnLeftBarButtonDone;
-(BOOL)useTransparentNavibar;
-(void)initNavigationBar;
@end

