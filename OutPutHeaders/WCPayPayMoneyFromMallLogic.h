/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCPayLogicMgrExt.h"
#import "WCPayPayMoneyLogicDelegate.h"
#import "WCBaseControlMgrExt.h"
#import "WCPayControlLogic.h"

@class NSString, WCPayPayMoneyLogic, WCPayMallPayStruct;

@interface WCPayPayMoneyFromMallLogic : WCPayControlLogic <WCBaseControlMgrExt, WCPayPayMoneyLogicDelegate, WCPayLogicMgrExt> {
	WCPayMallPayStruct* m_oWCPayMallPayStruct;
	WCPayPayMoneyLogic* m_payLogic;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)OnGetMallPrepayRequest:(id)request AppSource:(id)source Error:(id)error;
-(BOOL)gotoViewController:(id)controller;
-(void)onWCBaseLogicDidStop:(unsigned long)onWCBaseLogic;
-(void)stopLogic;
-(void)startLogic;
-(void)dealloc;
-(void)setWCPayMallPayStruct:(id)aStruct;
@end

