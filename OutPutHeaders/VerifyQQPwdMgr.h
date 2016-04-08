/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "ICheckQQExt.h"
#import "PasswordLogicDelegate.h"
#import "MMService.h"

@class PasswordLogic, NSString;

@interface VerifyQQPwdMgr : MMService <MMService, PasswordLogicDelegate, ICheckQQExt> {
	unsigned long long m_lastCanOldWTBufTime;
	PasswordLogic* m_pswLogic;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)onServiceClearData;
-(BOOL)onServiceMemoryWarning;
-(void)onServiceTerminate;
-(void)onServiceEnterForeground;
-(void)onServiceEnterBackground;
-(void)onServiceReloadData;
-(void)onServiceInit;
-(void)passwordLogicPause;
-(void)passwordLogicStart;
-(void)passwordLogicCancel;
-(void)verifyPasswordOK:(id)ok;
-(void)verifyPasswordFail;
-(void)unknownFail;
-(void)OnCheckQQ;
-(void)dealloc;
-(id)init;
-(void)unregExt;
-(void)regExt;
@end

