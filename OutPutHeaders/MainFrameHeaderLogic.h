/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IMMWebViewKeepHolderMgrExt.h"
#import "IOnlineClientMgrExt.h"
#import "IMusicPlayerExt.h"
#import "IPublicWifiManagerExt.h"
#import "MFPushBannerDelegate.h"
#import "MFPushSystemMsgDelegate.h"
#import "MFMassSendBannerDelegate.h"
#import "MMObject.h"

@class MFMassSendBannerLogic, MMVoiceSearchBar, NSString, MFPushSystemMsgLogic, MFPublicWifiBtn, NSMutableArray, MFWebViewVCKeepHoldBtn, MFWebMMBtn, MFPushBannerLogic, MFMusicPlayBtn;
@protocol MainFrameHeaderDelegate;

@interface MainFrameHeaderLogic : MMObject <MFPushBannerDelegate, MFPushSystemMsgDelegate, MFMassSendBannerDelegate, IOnlineClientMgrExt, IMusicPlayerExt, IPublicWifiManagerExt, IMMWebViewKeepHolderMgrExt> {
	MMVoiceSearchBar* m_searchBar;
	NSMutableArray* m_bannerAry;
	BOOL m_bWebWXLogined;
	BOOL m_bBakChatStarted;
	MFWebMMBtn* m_webMMBtn;
	MFMusicPlayBtn* m_musicPlayBtn;
	MFPublicWifiBtn* m_publicWifiBtn;
	MFWebViewVCKeepHoldBtn* m_webViewRecoverBtn;
	MFPushBannerLogic* m_pushBannerLogic;
	MFPushSystemMsgLogic* m_pushSystemMsgLogic;
	MFMassSendBannerLogic* m_massSendBannerLogic;
	id<MainFrameHeaderDelegate> _delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<MainFrameHeaderDelegate> delegate;
@property(readonly, assign, nonatomic) unsigned bannerCount;
@property(readonly, assign, nonatomic) MMVoiceSearchBar* searchBar;
-(void).cxx_destruct;
-(void)onCancelMassSendTask:(id)task;
-(void)onRedoMassSendTask:(id)task;
-(void)removeMassSendBanner:(id)banner;
-(void)addMassSendBanner:(id)banner;
-(void)dismissPushSystemMsg;
-(void)showPushSystemMsg;
-(void)onHidePushBanner;
-(void)onShowPushBanner;
-(void)openContactInfo:(id)info;
-(void)onMFPushBannerFrameChanged;
-(void)PushViewController:(id)controller;
-(void)PopViewController;
-(void)initPushBanner;
-(void)onPublicWifiStatusChangedWithApBase:(id)apBase;
-(void)processPublicWifiBtn:(BOOL)btn apBase:(id)base;
-(void)showPublicWifiView;
-(void)initPublicWifiBtn:(id)btn;
-(void)showReadingWebview;
-(void)onKeepHoldWebViewVCForNewMainFrameBannerStatusChangedIsAddKeep:(BOOL)newMainFrameBannerStatusChangedIsAddKeep;
-(void)updateMusicPlayBanner;
-(void)onMusicPlayStatusChanged;
-(void)showCancelMusicPlay;
-(void)processMusicPlayBtn:(BOOL)btn;
-(void)initMusicPlayBtn;
-(void)onLoginWeb;
-(void)onLogoutWeb;
-(void)showLogoutWebOnline;
-(void)initWebMMBtn;
-(void)makeSearchBar:(id)bar;
-(void)removeBannerBtnWithoutAnim:(id)anim;
-(void)removeBannerBtn:(id)btn;
-(void)addBannerBtn:(id)btn atIndex:(unsigned long)index editable:(BOOL)editable withAnim:(BOOL)anim;
-(void)addBannerBtn:(id)btn atIndex:(unsigned long)index withAnim:(BOOL)anim;
-(void)addBannerBtn:(id)btn withAnim:(BOOL)anim;
-(void)dismissSystemMessage;
-(void)deleteBanner:(unsigned)banner;
-(void)trigBanner:(unsigned)banner;
-(BOOL)cellEditable:(unsigned)editable;
-(id)getBanner:(unsigned)banner;
-(void)initHeader;
-(void)unRegisterExt;
-(void)registerExt;
-(void)dealloc;
-(id)initWithViewControllerForSearch:(id)search;
@end

