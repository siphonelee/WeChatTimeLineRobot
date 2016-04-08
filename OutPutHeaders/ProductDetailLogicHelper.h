/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PBMessageObserverDelegate.h"
#import "LocationRetrieveDelegate.h"
#import "MMObject.h"
#import "IMsgExt.h"

@class LocationRetriever, NSString, ScanProductItem;
@protocol ProductDetailLogicHelperDelegate;

@interface ProductDetailLogicHelper : MMObject <LocationRetrieveDelegate, PBMessageObserverDelegate, IMsgExt> {
	LocationRetriever* m_locationRetriver;
	ScanProductItem* m_productItem;
	unsigned long long lastMsgSvrId;
	id<ProductDetailLogicHelperDelegate> _delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<ProductDetailLogicHelperDelegate> delegate;
-(void).cxx_destruct;
-(void)OnGetNewXmlMsg:(id)msg Type:(id)type MsgWrap:(id)wrap;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)onRetrieveLocationError:(int)error;
-(void)onRetrieveLocationTimeOut:(id)anOut;
-(void)onRetrieveLocationOK:(id)ok;
-(void)sendGetActionInfoRequest:(id)request;
-(void)startAsyncGetActionInfo;
-(void)dealloc;
-(id)initWithProductItem:(id)productItem;
@end

