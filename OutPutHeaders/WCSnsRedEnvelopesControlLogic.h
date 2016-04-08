/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WCRedEnvelopesLogicMgrExt.h"
#import "WCBizControlLogic.h"

@class WCRedEnvelopesControlData, NSString;

@interface WCSnsRedEnvelopesControlLogic : WCBizControlLogic <WCRedEnvelopesLogicMgrExt> {
	WCRedEnvelopesControlData* m_data;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)OnWCRedEnvBizBaseRequestCommonSystemError:(id)error HBCmdType:(int)type;
-(void)OnWCRedEnvBizBaseRequestCommonError:(id)error HBCmdType:(int)type;
-(void)OnWCRedEnvEnterpriseBaseRequestCommonSystemError:(id)error HBCmdType:(int)type;
-(void)OnWCRedEnvEnterpriseBaseRequestCommonError:(id)error HBCmdType:(int)type;
-(void)OnWCRedEnvelopesBaseRequestCommonSystemError:(id)error HongbaoCmdType:(int)type;
-(void)OnWCRedEnvelopesBaseRequestCommonError:(id)error HongbaoCmdType:(int)type;
-(BOOL)onNeedToControlCurrentPublicError;
-(BOOL)onError:(id)error;
-(void)onErrorAlertViewDismiss:(id)dismiss;
-(void)onErrorAlertViewStopLogic:(id)logic;
-(BOOL)OnCheckDismissCurrentViewControllerAndStopLogicAfterDismiss;
-(BOOL)OnCheckDismissCurrentViewControllerAndStopLogicBeforeDismiss;
-(void)stopLoading;
-(void)startWCPayLoading;
-(void)startLoading;
-(void)stopLogic;
-(void)pause;
-(void)resume;
-(void)dealloc;
-(id)initWithData:(id)data;
-(id)init;
@end

