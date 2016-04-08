/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMPatternLockViewControllerDelegate.h"
#import "MMPatternLockMgrExt.h"
#import "WCPayControlLogic.h"
#import "WCPayPayPwdViewControllerDelegate.h"

@class MMPatternLockViewController, MMUINavigationController, NSString;
@protocol MMPatternLockLogicDelegate;

@interface MMPatternLockLogic : WCPayControlLogic <WCPayPayPwdViewControllerDelegate, MMPatternLockViewControllerDelegate, MMPatternLockMgrExt> {
	BOOL _isNeedOut2BizMain;
	BOOL _isPresent;
	id<MMPatternLockLogicDelegate> _delegate;
	int _curScene;
	NSString* _userToken;
	NSString* _oldHash;
	MMPatternLockViewController* _lockViewController;
	MMUINavigationController* _enteranceViewController;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) MMUINavigationController* enteranceViewController;
@property(retain, nonatomic) MMPatternLockViewController* lockViewController;
@property(assign, nonatomic) BOOL isPresent;
@property(retain, nonatomic) NSString* oldHash;
@property(assign, nonatomic) BOOL isNeedOut2BizMain;
@property(retain, nonatomic) NSString* userToken;
@property(assign, nonatomic) int curScene;
@property(assign, nonatomic) __weak id<MMPatternLockLogicDelegate> delegate;
-(void).cxx_destruct;
-(void)onVerifyPatternLockPwdFail;
-(void)onVerifyPatternLockPwdError;
-(void)onVerifyPatternLockPwdCorrect;
-(void)onModifyPatternLockPwdFail;
-(void)onModifyPatternLockPwdSuccess;
-(void)onClosePatternLockPwdFail;
-(void)onClosePatternLockPwdSuccess;
-(void)onSetupNewPatternLockPwdFail;
-(void)onSetupNewPatternLockPwdSuccess;
-(void)onPressBackOnPresnetedLockVC;
-(BOOL)isNeedSvrVerify;
-(void)onClosePatternLockPwdWithPatternHash:(id)patternHash;
-(void)onModifyPatternLockWithNewPatternHash:(id)newPatternHash;
-(void)onPatternLockVerifyPatternLockPwdWithPatternHash:(id)patternHash;
-(void)onPatternLockSetupNewWithPatternHash:(id)patternHash;
-(void)onPatternLockViewControllerDidErrorBeyondLimit;
-(void)onPatternLockViewControllerDidForgetPwd;
-(void)onPatternLockViewControllerDidOperateSuccess;
-(void)onPatternLockViewControllerDidOperateCancel;
-(void)goBack2EnteranceViewController;
-(void)OnPayPasswordError:(id)error ErrorCount:(int)count LockTotalCount:(unsigned long)count3;
-(void)onPayPasswordErrorAlertViewDismiss:(id)dismiss;
-(void)onAlertResetPwd:(id)pwd;
-(void)OnVerifyPayPassword:(id)password andRetToken:(id)token;
-(void)OnVerifyPayPassword:(id)password;
-(void)VerifyPayPwdNext:(id)next;
-(void)PayPwdRightActionBack;
-(void)PayPwdBack;
-(void)OnAlertGiveUpLogic;
-(void)onErrorAlertViewDismiss:(id)dismiss;
-(void)showGiveUpLogicAlert;
-(void)handlePatternLockEnterUnNeedPwd;
-(void)handlePatternLockBlock;
-(void)handlePatternLockEnterance;
-(void)handlePatterLockClose;
-(void)handlePatternLockModify;
-(void)handlePatternLockForget;
-(void)handlePatternLockSetup;
-(void)showPatternLockViewControllerIsPresnet:(BOOL)presnet;
-(void)onVerifyPayPwdSuccess;
-(void)showWCPayPwdViewController;
-(void)startLogic;
-(void)initDataWithPatternScene:(int)patternScene;
-(id)initWithPatternLockScene:(int)patternLockScene andDelegate:(id)delegate isPresent:(BOOL)present;
-(void)dealloc;
@end

