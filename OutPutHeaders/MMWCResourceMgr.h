/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMResDownloadMgrDelegate.h"
#import "MMResBatchDownloadMgrDelegate.h"
#import "MMService.h"
#import "MMService.h"
#import "MMResBatchSaveHandlerDelegate.h"

@class MMResBatchDownloadMgr, MMWCWebviewCacheCleaner, MMWebCacheDataManager, NSString, NSMutableDictionary, MMResourceDownloadMgr, MMWCResCleanupMgr, NSMutableArray, MMWebCacheUpdater, NSRecursiveLock, WebviewSessionCache;

@interface MMWCResourceMgr : MMService <MMResBatchSaveHandlerDelegate, MMResDownloadMgrDelegate, MMResBatchDownloadMgrDelegate, MMService> {
	NSRecursiveLock* _lock;
	NSMutableDictionary* _distFileDataForPath;
	WebviewSessionCache* _webviewSession;
	MMWCWebviewCacheCleaner* _webviewCacheCleaner;
	NSMutableArray* _arrWebcacheDomain;
	MMResourceDownloadMgr* _resDownloadMgr;
	MMResBatchDownloadMgr* _batchDownloadMgr;
	MMWebCacheDataManager* _dataManager;
	MMWebCacheUpdater* _pushUpdater;
	id _endEventBlock;
	MMWCResCleanupMgr* _cleanupManager;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) MMWCResCleanupMgr* cleanupManager;
@property(copy, nonatomic) id endEventBlock;
@property(retain, nonatomic) MMWebCacheUpdater* pushUpdater;
@property(retain, nonatomic) MMWebCacheDataManager* dataManager;
-(void).cxx_destruct;
-(BOOL)abtestBranPrePushEnable;
-(BOOL)abtestWebCacheEnable;
-(void)forceToDeleteAll;
-(void)addBatchDownloadTask:(id)task;
-(void)addSingleDownloadTask:(id)task;
-(id)getResInfoCacheForMainUrlInSession:(id)session resUrl:(id)url;
-(void)addNoneResInfoInSessionForMainUrl:(id)mainUrl resUrl:(id)url;
-(void)addResInfoInSession:(id)session forMainUrl:(id)mainUrl resUrl:(id)url;
-(id)getAsyncConfigResListCacheInSession:(id)session;
-(void)addConfigResListInSession:(id)session configId:(id)anId;
-(void)addPackageIdInSession:(id)session resInfo:(id)info;
-(void)forceUpdateCacheDataIfNeed;
-(void)clearTmpResCacheWhenChangePage;
-(void)handleWebViewGoBack;
-(void)onBatchSaveHandler:(id)handler finish:(BOOL)finish failedUrlInfoList:(id)list errMsgList:(id)list4 handlerId:(unsigned long)anId configInfo:(id)info;
-(void)saveSyncBatchDownloadTask:(id)task;
-(void)onBatchDownloadFinish:(BOOL)finish errMsgList:(id)list batchTask:(id)task;
-(void)onDownloadTaskEnd:(int)end downloadData:(id)data task:(id)task;
-(void)deleteWebCacheForAppId:(id)appId domain:(id)domain packageId:(id)anId;
-(void)disableWebCacheForAppId:(id)appId domain:(id)domain packageId:(id)anId;
-(BOOL)hasWebCacheFeatureForDomain:(id)domain;
-(void)saveWebcacheDomainList;
-(void)removeDomainFromDomainList:(id)domainList;
-(void)addDomainToDomainList:(id)domainList;
-(void)loadWebcacheDomainList;
-(void)saveNewSyncResData:(id)data mainDocumentUrl:(id)url resUrl:(id)url3 appId:(id)anId;
-(void)processSyncResCacheRequest:(id)request appId:(id)anId page:(id)page resUrlList:(id)list;
-(void)updateConfigInfoForPublicResWithPackageId:(id)packageId downloadTask:(id)task;
-(void)parseUpdatePublicResCacheConfigJson:(id)json data:(id)data;
-(void)processUpdatePublicResCacheRequestConfigUrl:(id)url;
-(void)parseAsyncCacheConfigJson:(id)json data:(id)data;
-(void)downloadAsyncCacheConfigUrl:(id)url appId:(id)anId mainUrl:(id)url3;
-(void)processAsyncResCacheRequest:(id)request appId:(id)anId configUrl:(id)url;
-(void)updatePublicResData:(id)data task:(id)task;
-(void)savePublicResDataIfNeed:(id)need mainDocumentUrl:(id)url resUrl:(id)url3;
-(BOOL)savePageResourceIfNeed:(id)need resUrl:(id)url resData:(id)data;
-(BOOL)updateAccessTimeForResInfo:(id)resInfo;
-(void)updateSyncMainPage:(id)page;
-(id)getResDataForResInfo:(id)resInfo;
-(id)getSyncResInfoForResourceUrl:(id)resourceUrl mainUrlDomain:(id)domain;
-(id)getAsyncResInfoForResourceUrl:(id)resourceUrl mainUrlDomain:(id)domain packageId:(id)anId version:(id)version;
-(id)getPageResInfoForPageUrl:(id)pageUrl;
-(id)getPublicResInfoForPublicResUrl:(id)publicResUrl;
-(id)getAsyncConfigForConfigId:(id)configId;
-(id)getAsyncConfigResListFromDBForPageResInfo:(id)pageResInfo;
-(id)getVersionOfAsyncResUrl:(id)asyncResUrl configResDict:(id)dict;
-(BOOL)isPageForResUrl:(id)resUrl mainUrl:(id)url;
-(BOOL)isPublicResUrl:(id)url;
-(void)callbackJSEvent:(id)event;
-(BOOL)isSameCrc32:(unsigned long)a32 ofConfigId:(id)configId;
-(id)parseJSONData:(id)data;
-(void)makeUrlInfoFrom:(id)from to:(id)to withPrefix:(id)prefix isPage:(BOOL)page;
-(id)getUrlPrefixWithMainUrl:(id)mainUrl base:(id)base;
-(id)dictFromConfigResString:(id)configResString;
-(void)onMemoryWarning;
-(id)fileDataWithPath:(id)path;
-(void)onServiceEnterBackground;
-(void)onServiceClearData;
-(void)onServiceReloadData;
-(void)onServiceInit;
-(void)dealloc;
-(id)init;
@end

