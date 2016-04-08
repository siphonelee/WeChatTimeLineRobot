/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "ICdnComMgrExt.h"
#import "MMService.h"

@class FavCdnTaskInfo, NSMutableArray, NSString, NSMutableSet;

@interface FavCdnDownloadMgr : MMService <ICdnComMgrExt, MMService> {
	NSMutableArray* m_queue;
	BOOL m_downloading;
	int m_downloadingCount;
	NSMutableSet* m_set;
	FavCdnTaskInfo* current_taskInfo;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)OnCdnDownload:(id)download;
-(void)tryNext;
-(void)StartDownloadFavMedia:(id)media;
-(void)dealloc;
-(id)init;
@end

