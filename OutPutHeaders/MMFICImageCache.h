/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMService.h"
#import "IClearDataMgrExt.h"
#import "MMService.h"

@class NSRecursiveLock, NSString, NSMutableDictionary, NSObject;
@protocol OS_dispatch_queue;

@interface MMFICImageCache : MMService <IClearDataMgrExt, MMService> {
	NSMutableDictionary* _imageTables;
	NSRecursiveLock* _tableLock;
	NSObject<OS_dispatch_queue>* _imageCacheDispatchQueue;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)onDiskStorageWarningCleanedSize:(unsigned*)size CacheMask:(unsigned long)mask;
-(void)onDiskStorageWarningCleanedSize:(unsigned*)size subQueue:(id)queue;
-(void)onDiskStorageWarningCleanedSize:(unsigned*)size;
-(void)executeEntityCreating:(id)creating withImage:(id)image;
-(void)asyncCreateFICImgForEntity:(id)entity withImage:(id)image;
-(void)asyncCreateFICImgForEntity:(id)entity;
-(void)cleanupFICImageInMemoryWithFormat:(id)format;
-(void)clearImgTableWithPrefix:(id)prefix;
-(void)reset;
-(void)deleteImageForEntity:(id)entity;
-(BOOL)imageExistsForEntity:(id)entity;
-(id)retrieveImageForEntity:(id)entity isNeedMemoryCache:(BOOL)cache;
-(BOOL)addFormatIfNotExist:(id)exist imgSize:(CGSize)size maxImgCnt:(unsigned)cnt version:(unsigned)version;
-(BOOL)onServiceMemoryWarning;
-(void)onServiceClearData;
-(void)onServiceReloadData;
-(void)dealloc;
-(id)init;
@end

