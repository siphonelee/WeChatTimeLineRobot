/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMService.h"
#import "WCAddressNetworkDelegate.h"
#import "MMPackageDownloadMgrExt.h"
#import "MMService.h"

@class NSMutableArray, WCAddressNetworkHelper, NSString;

@interface WCAddressLogicMgr : MMService <MMService, WCAddressNetworkDelegate, MMPackageDownloadMgrExt> {
	NSMutableArray* m_arrAddress;
	NSMutableArray* m_arrAddressStageData;
	unsigned long m_retainCount;
	unsigned long currentVersion;
	WCAddressNetworkHelper* m_networkHelper;
	unsigned m_timeStamp;
	int m_uiWCAddressGetAddressStategy;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
-(void).cxx_destruct;
-(void)onPackageDownloadProcessUpdated:(id)updated downloadSize:(int)size totalSize:(int)size3;
-(void)onPackageDownloadFinish:(id)finish package:(id)package;
-(void)onPackageListUpdated:(id)updated;
-(void)OnImportWCAddress:(id)address Request:(id)request Error:(id)error;
-(void)OnSelectWCAddress:(id)address Request:(id)request Error:(id)error;
-(void)OnModifyWCAddress:(id)address Request:(id)request Error:(id)error;
-(void)OnQueryWCAddress:(id)address Request:(id)request Error:(id)error;
-(void)HandleGetAddressStategy:(id)stategy UserName:(id)name NickName:(id)name3 Error:(id)error;
-(void)OnRemoveWCAddress:(id)address Request:(id)request Error:(id)error;
-(void)OnAddWCAddress:(id)address Request:(id)request Error:(id)error;
-(void)GetAllAddressStageData;
-(void)GetServerRequestToAddressStageData;
-(void)SetRecentlyUsedAddress:(id)address;
-(id)GetRecentlyUsedAddress;
-(void)GetAllAddress:(id)address;
-(void)ModifyAddress:(id)address;
-(void)DelAddress:(id)address;
-(void)AddAddress:(id)address;
-(void)GetLatestAddress:(id)address;
-(void)StopWCAddressService;
-(void)StartWCAddressService;
-(void)onServiceClearData;
-(BOOL)onServiceMemoryWarning;
-(void)onServiceTerminate;
-(void)onServiceEnterBackground;
-(void)onServiceReloadData;
-(void)onServiceInit;
-(void)importYiXunAdress;
-(void)setHadImportYiXunAddress;
-(BOOL)isImportYiXunAddress;
-(void)removeArchiveAddress;
-(id)safeGetAddress;
-(BOOL)isCachedAddress;
-(BOOL)safeArchiveAddress;
-(BOOL)GetAddressDataFromPath:(id)path Error:(id*)error;
-(id)GetRcptInfoNode:(id)node;
-(void)dealloc;
-(id)init;
@end
