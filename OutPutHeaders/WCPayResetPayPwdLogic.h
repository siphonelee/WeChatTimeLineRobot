/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCPayResetPwdCardInfoViewControllerDelegate.h"
#import "WCPayResetPwdBindedCardListViewControllerDelegate.h"
#import "WCPayResetPwdBindCardViewControllerDelegate.h"
#import "WCPayVerifyPayCardViewControllerDelegate.h"
#import "WCPayControlLogic.h"
#import "WCPayPayPwdViewControllerDelegate.h"

@class NSString;

@interface WCPayResetPayPwdLogic : WCPayControlLogic <WCPayResetPwdCardInfoViewControllerDelegate, WCPayVerifyPayCardViewControllerDelegate, WCPayPayPwdViewControllerDelegate, WCPayResetPwdBindedCardListViewControllerDelegate, WCPayResetPwdBindCardViewControllerDelegate> {
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void)OnHandleVerifiedSMSString:(id)string;
-(void)OnGetAvailableBank:(id)bank Error:(id)error;
-(void)OnGetBindingCardBin:(id)bin Error:(id)error;
-(void)OnGetBindingCardBin:(id)bin AvailableBank:(id)bank Error:(id)error;
-(void)OnGetBindQueryInfo:(id)info Error:(id)error;
-(void)OnSetWCPayPasswordInReset:(id)reset;
-(void)OnResetWCPayPasswordVerifySMS:(id)sms;
-(void)OnResetWCPayPasswordVerifyCard:(id)card Error:(id)error;
-(void)OnWCPayResetPwdBindCardBack;
-(void)OnWCPayResetPwdBindCardNext;
-(void)OnResetPwdBindedCardListNext;
-(void)OnResetPwdBindedCardListBack;
-(void)OnResetPwdBindedCardListNewCardClicked;
-(BOOL)OnSelectBindCardAvailble:(id)availble;
-(void)openNewCardErrorPathWebView;
-(void)PayPwdRightActionBack;
-(void)PayPwdBack;
-(void)SetPayPwdNext:(id)next;
-(void)VerifyPayPwdNext:(id)next;
-(void)showGiveUpResetAlert;
-(void)OnAlertGiveUpResetPwd;
-(void)VerifyPayCardAgain:(id)again;
-(void)VerifyPayCardNext:(id)next;
-(void)VerifyPayCardBack;
-(void)ResetPwdCardInfoReadAgreement;
-(void)ResetPwdCardInfoNext:(id)next;
-(void)ResetPwdCardInfoCardInfoCancel;
-(void)onErrorAlertViewDismiss:(id)dismiss;
-(void)BackToRootView;
-(void)startLogic;
@end

