/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PBMessageObserverDelegate.h"
#import "MMObject.h"
#import "ICdnComMgrExt.h"

@class NSString;
@protocol ExposeWithProofCgiDelegate;

@interface MMExposeWithProofCgi : MMObject <ICdnComMgrExt, PBMessageObserverDelegate> {
	id<ExposeWithProofCgiDelegate> m_delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<ExposeWithProofCgiDelegate> m_delegate;
-(void).cxx_destruct;
-(void)OnCdnDownload:(id)download;
-(void)OnCdnUpload:(id)upload;
-(void)testDownloadImgFromCdn:(id)cdn;
-(void)stopUploadExposeImgToCdn:(id)cdn;
-(void)uploadExposeImgToCdn:(id)cdn;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)sendGetExposeLinkRequest:(id)request;
-(void)sendExposeWithProofRequest:(id)proofRequest;
-(void)dealloc;
-(id)init;
@end

