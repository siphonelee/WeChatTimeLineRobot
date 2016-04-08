/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMResBatchDownloadTaskContext.h"

@class MMWCPushInfo;

@interface MMWebCacheBatchDownloadTaskContext : MMResBatchDownloadTaskContext {
	BOOL _needCleanWebviewCacheAfterBatchSave;
	unsigned long _configCrc32;
	MMWCPushInfo* _pushInfo;
	unsigned _scene;
}
@property(assign, nonatomic) unsigned scene;
@property(retain, nonatomic) MMWCPushInfo* pushInfo;
@property(assign, nonatomic) BOOL needCleanWebviewCacheAfterBatchSave;
@property(assign, nonatomic) unsigned long configCrc32;
-(void).cxx_destruct;
@end

