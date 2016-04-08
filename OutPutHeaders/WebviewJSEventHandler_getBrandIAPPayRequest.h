/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "IBrandIAPMgrExt.h"
#import "WebviewJSEventHandlerBase.h"

@class JSEvent, NSString;

@interface WebviewJSEventHandler_getBrandIAPPayRequest : WebviewJSEventHandlerBase <IBrandIAPMgrExt> {
	JSEvent* jsEvent;
	NSString* productExtInfo;
}
@property(retain, nonatomic) NSString* productExtInfo;
@property(retain, nonatomic) JSEvent* jsEvent;
-(void).cxx_destruct;
-(void)OnBrandIAPGetResult:(id)result Error:(int)error;
-(void)OnBrandIAPPayFailForProduct:(id)product;
-(void)OnBrandIAPPayCancelForProduct:(id)product;
-(void)OnBrandIAPPaySuccessForProduct:(id)product;
-(void)OnBrandIAPPayRequestForProduct:(id)product;
-(void)OnBrandIAPPrepay:(id)prepay FailedWithError:(int)error;
-(void)OnBrandIAPPrepay:(id)prepay GetProductID:(id)anId ExtInfo:(id)info;
-(void)stopLoading:(BOOL)loading;
-(void)handleJSEvent:(id)event HandlerFacade:(id)facade ExtraData:(id)data;
-(void)dealloc;
@end

