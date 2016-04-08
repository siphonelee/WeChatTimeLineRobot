/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCAccountGraphicVerifyControlLogicDelegate.h"
#import "WCAccountSafeDeviceControlLogicDelegate.h"
#import "WCAccountBaseControlLogic.h"
#import "MMWebViewDelegate.h"
#import "PBMessageObserverDelegate.h"
#import "IRsaCertMgrExt.h"

@class WCAccountSafeDeviceControlLogic, NSString, WCAccountGraphicVerifyControlLogic;
@protocol WCAccountManualAuthControlLogicDelegate;

@interface WCAccountManualAuthControlLogic : WCAccountBaseControlLogic <WCAccountGraphicVerifyControlLogicDelegate, WCAccountSafeDeviceControlLogicDelegate, MMWebViewDelegate, PBMessageObserverDelegate, IRsaCertMgrExt> {
	WCAccountSafeDeviceControlLogic* m_safeDeviceLogic;
	WCAccountGraphicVerifyControlLogic* m_graphicVerifyLogic;
	id<WCAccountManualAuthControlLogicDelegate> m_delegate;
	unsigned long m_ecdh_error_count;
	unsigned long m_cert_error_count;
	unsigned long m_idc_redirect_count;
	BOOL m_bFromAutoAuth;
	BOOL m_bSessionKeyNeedECDHDecrypt;
	BOOL m_bStopCloseAcct;
	unsigned long long m_ui64BeginTime;
	BOOL m_bDontFillWTBuf;
	unsigned long m_uiCGIScene;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL m_bDontFillWTBuf;
@property(assign, nonatomic) unsigned long m_uiCGIScene;
-(void).cxx_destruct;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)handleAuthResponse:(id)response;
-(void)onStopCloseAcct;
-(void)onStopLogic;
-(void)OnRsaCertFail;
-(void)OnRsaCertCGIAgain;
-(void)onSafeDeviceControlLogicReturnOK;
-(void)onSafeDeviceControlLogicCancel;
-(void)onGraphicVerifyControlLogicReturn:(id)aReturn;
-(id)onGraphicVerifyControlLogicGetAuthRequest:(BOOL)request;
-(void)onGraphicVerifyControlLogicCancel;
-(void)startLogicFromAutoAuth;
-(void)startLogic;
-(id)genManualAuthRequest;
-(id)genManualAuthRequest:(BOOL)request;
-(BOOL)startManualAuth:(id)auth;
-(void)setDelegate:(id)delegate;
-(void)dealloc;
-(void)stopLoading;
-(void)startLoading;
-(id)initWithData:(id)data;
@end

