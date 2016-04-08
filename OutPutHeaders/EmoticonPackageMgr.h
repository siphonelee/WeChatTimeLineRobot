/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "PBMessageObserverDelegate.h"
#import "MMService.h"

@class CEmoticonPackageDB, EmoticonSortSetting, NSString, NSRecursiveLock;

@interface EmoticonPackageMgr : MMService <MMService, PBMessageObserverDelegate> {
	CEmoticonPackageDB* m_oEmoticonPackageDB;
	NSRecursiveLock* m_oLock;
	EmoticonSortSetting* m_sortSetting;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) EmoticonSortSetting* m_sortSetting;
@property(retain, nonatomic) CEmoticonPackageDB* m_oEmoticonPackageDB;
@property(retain, nonatomic) NSRecursiveLock* m_oLock;
+(id)getEmoticonPackageImageByPid:(id)pid;
-(void).cxx_destruct;
-(void)clearAllEmoticonPackageData;
-(void)OnModEmotionPackage:(id)package;
-(id)PreProcessServerUpdateList:(id)list;
-(BOOL)addPackageList:(id)list;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(BOOL)SetPanelListRequestBuffer:(id)buffer;
-(id)pathForEmoticonPanelReqBufer;
-(id)GetPanelListRequestBuffer;
-(BOOL)installPackageAtPath:(id)path withName:(id)name withPid:(id)pid iconUrl:(id)url;
-(BOOL)installPackageAtPath:(id)path withName:(id)name withPid:(id)pid;
-(BOOL)unzipPackageAtPath:(id)path withPid:(id)pid;
-(BOOL)isEmoticonPackageDownLoaded:(id)loaded;
-(BOOL)isEmoticonPackagePurchased:(id)purchased;
-(BOOL)canPurchasePackageForPid:(id)pid;
-(id)getSortEmoticonPackageListWithDownloadedTusiji;
-(id)getSortEmoticonPackageListWithTusiji:(BOOL)tusiji withCustom:(BOOL)custom;
-(BOOL)hadSetCustomToTop;
-(void)saveSortNotNotify:(id)notify;
-(void)saveSort:(id)sort;
-(id)getTusijiPackage;
-(id)getCustomPackage;
-(id)getEmoticonPackageList;
-(BOOL)updateSilently:(id)silently downloadStatus:(unsigned long)status;
-(BOOL)update:(id)update downloadStatus:(unsigned long)status;
-(void)notifyPackageListChanged;
-(BOOL)update:(id)update payStatus:(unsigned long)status;
-(BOOL)deleteEmoticonPackageWithoutUploadByPid:(id)pid;
-(BOOL)addEmoticonPackageSilently:(id)silently name:(id)name payStatus:(unsigned long)status downloadStatus:(unsigned long)status4;
-(BOOL)addEmoticonPackageSilently:(id)silently name:(id)name iconUrl:(id)url payStatus:(unsigned long)status downloadStatus:(unsigned long)status5;
-(BOOL)addEmoticonPackage:(id)package name:(id)name payStatus:(unsigned long)status downloadStatus:(unsigned long)status4;
-(void)callUpdatePackageListExtension;
-(void)notifyUpdatePackageList;
-(void)hardcodeTusiji;
-(BOOL)addHardCode:(id)code name:(id)name;
-(void)initLocalList;
-(void)onServiceReloadData;
-(void)onServiceInit;
-(id)init;
-(void)dealloc;
@end

