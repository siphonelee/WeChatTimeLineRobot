/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "QZoneLoginStatusDelegate.h"
#import "WCActionSheetDelegate.h"
#import "MFMessageComposeViewControllerDelegate.h"
#import "MMUIViewController.h"
#import "UIAlertViewDelegate.h"

@class CBaseContact, NSArray, UIView, NSString, UIButton, QZoneLoginStatus;

@interface ContactNoWeixinViewController : MMUIViewController <MFMessageComposeViewControllerDelegate, WCActionSheetDelegate, QZoneLoginStatusDelegate, UIAlertViewDelegate> {
	UIView* m_TipsView;
	CBaseContact* m_contact;
	UIButton* m_btn;
	UIButton* m_btnSendQQMsg;
	UIView* m_headerView;
	NSArray* m_arrMobiles;
	QZoneLoginStatus* m_qzone;
	NSString* m_googleImageUrl;
	int m_searchScene;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) int m_searchScene;
@property(retain, nonatomic) NSString* m_googleImageUrl;
@property(retain, nonatomic) NSArray* m_arrMobiles;
-(void).cxx_destruct;
-(void)onQZoneUrl:(id)url;
-(id)initWithContact:(id)contact;
-(void)viewDidLoad;
-(void)viewDidLayoutSubviews;
-(void)initView;
-(void)initTipsWordView:(id)view withFrame:(CGRect)frame;
-(BOOL)isShowInviteBtn;
-(void)onInvite:(id)invite;
-(void)messageComposeViewController:(id)controller didFinishWithResult:(int)result;
-(void)showAlert:(id)alert;
-(void)initDetailInfoView;
-(id)getInfoUsrName;
-(id)getQQUsrName;
-(id)getInfoDetailText;
-(id)getInfoDisplayName;
-(id)getInfoIcon;
-(void)invitedAnimation;
-(void)actionSheet:(id)sheet clickedButtonAtIndex:(int)index;
-(void)OnQQAction:(id)action;
-(void)Call;
-(void)onSendQQMsg:(id)msg;
-(void)sendSMSInvite:(id)invite;
@end

