/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCAccountBaseControlLogic.h"
#import "WCAccountRegisterViewControllerDelegate.h"
#import "IRsaCertMgrExt.h"
#import "WCAccountGraphicVerifyViewControllerDelegate.h"
#import "IAddressBookMgrExt.h"

@class NSString, NSMutableSet;

@interface WCAccountRegisterControlLogic : WCAccountBaseControlLogic <IAddressBookMgrExt, WCAccountRegisterViewControllerDelegate, WCAccountGraphicVerifyViewControllerDelegate, IRsaCertMgrExt> {
	NSMutableSet* m_suggestAlias;
	BOOL m_bCanSyncAddressBook;
	unsigned long m_idc_redirect_count;
	unsigned long m_getSuggestAlias_EventID;
	unsigned long long m_ui64BeginTime;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)DidEnterForeground:(id);
-(void)DidEnterBackground:(id);
-(void)resume;
-(void)pause;
-(BOOL)recoverFromArchive:(id)archive;
-(id)getArchive;
-(void)RSAProtobufMessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)handleRespForSuggestAlias:(id)suggestAlias;
-(void)handleNewRegResponse:(id)response;
-(void)onEnableAddressBookTip;
-(void)showDeniedTip;
-(void)showEnableTip;
-(void)enableAddressBook;
-(void)jumpToMainFrame;
-(void)OnConfirmAddressBookStatus:(unsigned long)status;
-(void)onGraphicVerifyChangeImage;
-(void)onGraphicVerifyBack;
-(void)onGraphicVerifyWithVerifyCode:(id)verifyCode;
-(void)onGetSuggestAlias:(id)alias alias:(id)alias2;
-(void)onRegNickNameReg:(id)reg alias:(id)alias headImage:(id)image;
-(void)onRegNickNameBack;
-(void)getSuggestAlias;
-(BOOL)regAccount;
-(id)genNewRegRequest;
-(id)getBindName;
-(void)startLogic;
-(void)dealloc;
-(id)initWithData:(id)data;
@end

