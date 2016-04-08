/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "WCSnsRedEnvelopesNetworkHelperDelegate.h"
#import "MMService.h"

@class NSString, WCSnsRedEnvelopesNetworkHelperV4;

@interface WCSnsRedEnvelopesLogicMgrV4 : MMService <MMService, WCSnsRedEnvelopesNetworkHelperDelegate> {
	WCSnsRedEnvelopesNetworkHelperV4* m_networkHelper;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)ThanksForRedEnvelopesRequest:(id)redEnvelopesRequest;
-(void)ClearserSendOrReceiveRedEnveloperListRequest:(id)request;
-(void)DeleteRedEnvelopesRecord:(id)record;
-(void)QueryUserSendOrReceiveRedEnveloperListRequest:(id)request;
-(void)QueryRedEnvelopesDetailRequest:(id)request;
-(void)OpenRedEnvelopesRequest:(id)request;
-(void)ReceiverQueryRedEnvelopesRequest:(id)request;
-(void)SendShareRedEnvelopesoRequest:(id)request;
-(void)GenRedEnvelopesPayRequest:(id)request;
-(void)QueryRedEnvelopesUserInfoNoCache:(id)cache;
-(void)QueryRedEnvelopesUserInfo:(id)info;
-(void)GetHongbaoBusinessRequest:(id)request CMDID:(unsigned long)cmdid OutputType:(unsigned long)type;
-(void)OnWCToHongbaoCommonResponse:(id)hongbaoCommonResponse Request:(id)request;
-(void)OnWCToHongbaoCommonErrorResponse:(id)hongbaoCommonErrorResponse Request:(id)request;
-(void)OnWCToHongbaoCommonSystemErrorResponse:(id)hongbaoCommonSystemErrorResponse Request:(id)request;
-(void)dealloc;
-(id)init;
@end

