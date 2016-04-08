/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMThemeManagerExt.h"
#import "UITabBarControllerDelegate.h"
#import "UIAlertViewDelegate.h"
#import "MMKernelExt.h"
#import "IVoiceReminderExt.h"
#import "WCFacadeExt.h"
#import "IMsgExt.h"
#import "MMObject.h"

@class UIWindow, NSString, MMTabBarController, NSMutableArray, CMMVector, PreEnterWechatLogic, SvrErrorTipWindow;

@interface CAppViewControllerManager : MMObject <UITabBarControllerDelegate, MMThemeManagerExt, MMKernelExt, IMsgExt, IVoiceReminderExt, WCFacadeExt, UIAlertViewDelegate, UITabBarControllerDelegate> {
	UIWindow* m_window;
	NSMutableArray* m_arrViewController;
	NSMutableArray* m_arrTabBarBaseViewController;
	unsigned long m_uCurrentTabViewIndex;
	CMMVector* m_vecViewController;
	BOOL m_bFromReg;
	BOOL m_isChangingTheme;
	BOOL m_isInBackground;
	SvrErrorTipWindow* m_svrErrorTipWindow;
	PreEnterWechatLogic* m_PreEnterWechatLogic;
	MMTabBarController* m_tabbarController;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) BOOL m_isInBackground;
+(id)topViewControllerOfWindow:(id)window;
+(id)topMostController;
+(id)getCurrentNavigationController;
+(id)getTabBarController;
+(id)getAppViewControllerManager;
+(BOOL)hasEnterWechatMain;
-(void).cxx_destruct;
-(id)getTabBarController;
-(void)onDataChangedWithAdded:(id)added andChanged:(id)changed andDeleted:(id)deleted;
-(id)getEnteranceViewContoller;
-(void)onPatternLockLogicOperateSuccess;
-(void)onNotifyRemindMsg:(id)msg;
-(void)setupUserInfoAndCategoryForNotification:(id)notification message:(id)message username:(id)username;
-(void)OnShowPush:(id)push;
-(void)keyboardWillHide:(id)keyboard;
-(void)keyboardWillShow:(id)keyboard;
-(void)UIWindowDidResignKeyNotification:(id)uiwindow;
-(void)UIWindowDidBecomeKeyNotification:(id)uiwindow;
-(void)UIWindowDidBecomeHiddenNotification:(id)uiwindow;
-(void)UIWindowDidBecomeVisibleNotification:(id)uiwindow;
-(void)enterBackground;
-(void)enterForeground;
-(void)onPreQuit;
-(void)jumpToChat:(id)chat msgToLocate:(unsigned long)locate;
-(void)JumpToViewController:(id)viewController;
-(void)HandleMoreJump:(id)jump;
-(void)HandleFindFriendJump:(id)jump;
-(void)HandleMainFrameJump:(id)jump;
-(void)fixOnStatusBarClick;
-(id)getMainWindow;
-(void)changeLanguage;
-(void)refreshLanguage:(int)language;
-(void)refreshMainFrame;
-(void)refreshLanguage:(int)language withChildScene:(id)childScene;
-(void)jumpToOfflinePay;
-(void)jumpToShareCard;
-(void)jumpToAlbum;
-(void)jumpToNewYearShake;
-(void)jumpToShake;
-(void)jumpToCameraScan:(int)cameraScan showMainView:(BOOL)view;
-(void)jumpToCameraScan:(int)cameraScan;
-(void)jumpToURLShardBy3rdApp:(id)urlshardBy3rdApp;
-(BOOL)isChangingTheme;
-(void)onThemeChanged;
-(unsigned long)getCurTabBarIndex;
-(id)getTopViewController;
-(void)removeViewController:(id)controller;
-(void)addViewController:(id)controller;
-(void)removeViewFromRootViewController:(id)rootViewController;
-(void)addViewControllerToRootView:(id)rootView;
-(void)removeViewFromRootView:(id)rootView;
-(void)addViewToRootView:(id)rootView;
-(BOOL)isInStatusBarShowViewController;
-(unsigned long)getTotalUnReadCount;
-(void)closeMainFrame;
-(void)openMainFrame:(BOOL)frame showStyle:(id)style;
-(void)openFirstView;
-(void)OnMainFrameDoubleClicked:(id)clicked;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)setAllTabBarItemEnabled:(BOOL)enabled;
-(void)newMessageByEnterpriseContact:(id)contact msgWrapToAdd:(id)add showMainView:(BOOL)view showSessionList:(BOOL)list animated:(BOOL)animated extraInfo:(id)info;
-(void)newMessageByContact:(id)contact msgWrapToAdd:(id)add;
-(void)newMessageByContact:(id)contact msgWrapToAdd:(id)add animated:(BOOL)animated;
-(void)newMessageByContact:(id)contact msgWrapToAdd:(id)add showMainView:(BOOL)view;
-(void)newMessageByContact:(id)contact msgWrapToAdd:(id)add showMainView:(BOOL)view animated:(BOOL)animated extraInfo:(id)info;
-(void)newMessageByContact:(id)contact msgWrapToAdd:(id)add showMainView:(BOOL)view animated:(BOOL)animated;
-(void)moveToTab:(int)tab showMainView:(BOOL)view;
-(void)moveToRootViewControllerForIndex:(int)index;
-(void)moveToRootViewController;
-(void)dismissToRootViewControllerForIndex:(int)index;
-(void)dismissToRootViewController;
-(void)tabBarController:(id)controller didSelectViewController:(id)controller2;
-(void)dealloc;
-(void)createMainFrameWithShowStyle:(id)showStyle;
-(void)replaceTwoFile:(id)file desFile:(id)file2;
-(void)createMoreViewController;
-(void)createFindFriendViewController;
-(void)recreateFindFriendViewController;
-(void)createContactsViewController;
-(void)createNewMainFrameViewController;
-(id)getTabBarBaseViewController:(unsigned)controller;
-(id)getNewMainFrameViewController;
-(void)forceRedrawNavigationViewControllers:(id)controllers;
-(void)forceRedrawNavigationViewControllers;
-(void)forceRedrawNavigationBars;
-(id)initWithWindow:(id)window;
-(void)restartAllFailUploadFromLocalNotification;
-(void)reSendAllMsgFromNotificationDone;
-(void)resendAllFailMsgFromLocalNotification:(id)localNotification;
-(BOOL)checkResentFailMsg:(id)msg isFromLaunch:(BOOL)launch;
-(void)openView:(unsigned long)view launchOptions:(id)options isAppUpdated:(BOOL)updated;
@end

