/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCAccountBaseControlLogic.h"
#import "WCAccountLoginFirstViewControllerDelegate.h"
#import "WCAccountManualAuthControlLogicDelegate.h"
#import "WCAccountLoginFirstUserViewControllerDelegate.h"
#import "WCAccountLoginLastUserViewControllerDelegate.h"
#import "IMMFacebookMgrExt.h"
#import "WCAccountBackDeviceFirstViewControllerDelegate.h"

@class WCAccountManualAuthControlLogic, NSString, VoicePrintHandler;

@interface WCAccountLoginControlLogic : WCAccountBaseControlLogic <IMMFacebookMgrExt, WCAccountLoginFirstViewControllerDelegate, WCAccountLoginFirstUserViewControllerDelegate, WCAccountLoginLastUserViewControllerDelegate, WCAccountManualAuthControlLogicDelegate, WCAccountBackDeviceFirstViewControllerDelegate> {
	BOOL m_bFromLogout;
	BOOL m_bNeverAutoStop;
	unsigned long m_uiPwdErrCount;
	WCAccountBaseControlLogic* m_subFBLogic;
	WCAccountManualAuthControlLogic* m_manualAuthLogic;
	VoicePrintHandler* m_VPHandler;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)OnLoginVerifyOverLimit;
-(void)OnLoginVerifySucessWithRandomAuthKey:(id)randomAuthKey andTicket:(id)ticket;
-(BOOL)recoverFromArchive:(id)archive;
-(id)getArchive;
-(BOOL)onManualAuthControlLogicError:(id)error;
-(void)onManualAuthControlLogicStop:(unsigned)stop response:(id)response;
-(void)onLastUserChangeAccountWithView:(id)view;
-(void)onLastUserChangeAccount:(id)account;
-(void)onLoginByQRCodeWithOneClickDisconnect;
-(void)onLoginByQRCode;
-(void)onIpadOneKeyLoginByQQ;
-(void)onLoginByQQ;
-(void)onLastUserLoginByQRCode;
-(void)onUseIPadOnly;
-(void)onUseBothDevice;
-(void)onLoginByPhone;
-(void)onLastUserRegister;
-(void)onLastUserLoginUserName:(id)name Pwd:(id)pwd;
-(void)onFirstUserProblem:(id)problem;
-(void)onFirstUserBack;
-(void)onFirstUserLoginUserName:(id)name Pwd:(id)pwd;
-(void)loginAccount:(BOOL)account;
-(void)onWCBaseLogicDidStop:(unsigned long)onWCBaseLogic;
-(void)onLoginByPhoneFromQQ;
-(void)onFacebookConnect;
-(void)onFirstViewRegester;
-(void)onFirstViewLogin;
-(void)onLastUserVoicePrintLogin:(id)login;
-(void)onLastUserLoginFromePhone:(id)phone;
-(void)onLastUserGoToHelpCenter:(id)helpCenter;
-(void)onLastUserGoToSecurityCenter:(id)securityCenter;
-(void)onLastUserProblem:(id)problem;
-(void)onGoToSecurityCenter:(unsigned long)securityCenter;
-(void)resetPwdByPhone;
-(void)resetPwdByQQ;
-(void)stopLogic;
-(void)startIPhoneLoginLogic;
-(void)startIPadLoginLogic;
-(void)startLogic;
-(void)pause;
-(void)checkStopLogic;
-(id)setRootviewController:(Class)controller withData:(id)data shouldHideNavBar:(BOOL)bar;
-(id)setRootviewController:(Class)controller withData:(id)data;
@end

