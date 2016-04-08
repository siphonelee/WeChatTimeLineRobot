/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMObject.h"
#import "IPreEnterWechatLogicExt.h"

@class NSURL, NSString;

@interface OpenWebviewHandler : MMObject <IPreEnterWechatLogicExt> {
	NSString* _appId;
	NSString* _bundleId;
	NSURL* _url;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) NSURL* url;
@property(retain, nonatomic) NSString* bundleId;
@property(retain, nonatomic) NSString* appId;
-(void).cxx_destruct;
-(void)onPreEnterWechatDone;
-(id)encodeUrl:(id)url;
-(id)translateToInternalWebviewUrlString;
-(void)doOpenWebview;
-(void)startHandleAppId:(id)anId bundleId:(id)anId2 info:(id)info;
-(void)dealloc;
@end

