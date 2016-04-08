/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IWCPayControlLogicExt.h"
#import "WCPayControlLogic.h"
#import "WCPayPayPwdViewControllerDelegate.h"

@class NSString, WCPayAddPayCardLogic;

@interface WCPayCreateOfflinePayLogic : WCPayControlLogic <WCPayPayPwdViewControllerDelegate, IWCPayControlLogicExt> {
	WCPayAddPayCardLogic* m_cardLogic;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)OnAddCardBtnDonw:(id)donw;
-(void)OnAddCardError:(id)error ErrorType:(unsigned long)type;
-(void)OnCreateOfflinePayResponse:(id)response Error:(id)error;
-(void)OnGetBindQueryInfo:(id)info Error:(id)error;
-(void)OnPreFinishedWCPayLogic:(id)logic waitUntilDone:(BOOL*)done;
-(void)onWCBaseLogicDidStop:(unsigned long)onWCBaseLogic;
-(void)onErrorAlertViewDismiss:(id)dismiss;
-(void)PayPwdRightActionBack;
-(void)PayPwdBack;
-(void)VerifyPayPwdNext:(id)next;
-(void)justEndCreateOfflinePay:(BOOL)pay;
-(void)EndCreateOfflinePayWithResponse:(id)response;
-(void)onNeedVerifyCancel;
-(void)onNeedVerifyConfirm;
-(void)startLogic;
-(void)dealloc;
@end

