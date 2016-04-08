/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "ICdnComMgrExt.h"

@class CdnComMediaInfo, NSString;
@protocol WCRedEnvelopesCdnManagerDelegate;

@interface WCRedEnvelopesCdnManager : XXUnknownSuperclass <ICdnComMgrExt> {
	id<WCRedEnvelopesCdnManagerDelegate> _delegate;
	CdnComMediaInfo* _currentUploadingMediaInfo;
	CdnComMediaInfo* _currentDownloadingMediaInfo;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) CdnComMediaInfo* currentDownloadingMediaInfo;
@property(retain, nonatomic) CdnComMediaInfo* currentUploadingMediaInfo;
@property(assign, nonatomic) __weak id<WCRedEnvelopesCdnManagerDelegate> delegate;
-(void).cxx_destruct;
-(void)OnCdnDownload:(id)download;
-(void)OnCdnUploadProgress:(id)progress;
-(void)OnCdnUpload:(id)upload;
-(void)stopDownloadImage;
-(BOOL)downloadImage:(id)image;
-(void)stopUploadImage;
-(BOOL)uploadImage:(id)image;
-(id)init;
-(void)dealloc;
@end
