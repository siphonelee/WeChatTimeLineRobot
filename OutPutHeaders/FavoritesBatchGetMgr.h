/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PBMessageObserverDelegate.h"
#import "MMObject.h"
#import "INetworkStatusMgrExt.h"

@class NSMutableArray, FavoritesItemDB;
@protocol FavoritesBatchGetMgrDelegate;

@interface FavoritesBatchGetMgr : MMObject <PBMessageObserverDelegate, INetworkStatusMgrExt> {
	FavoritesItemDB* _favItemDB;
	NSMutableArray* _batchGetArray;
	id<FavoritesBatchGetMgrDelegate> _delegate;
	BOOL _isGetting;
	unsigned long _autoBatchGetCount;
	BOOL _hasStartBatchGet;
}
@property(assign, nonatomic) __weak id<FavoritesBatchGetMgrDelegate> delegate;
-(void).cxx_destruct;
-(BOOL)shouldBetchGetAll;
-(void)onNetworkStatusChange:(unsigned long)change;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)HandleBatchGetFavItemResp:(id)resp Event:(unsigned long)event;
-(void)asyncDoAddNewItemList:(id)list;
-(BOOL)checkConflict:(id)conflict vs:(id)vs;
-(void)TryStartBatchGet;
-(void)addBatchGetFavoritesItemList:(id)list;
-(void)dealloc;
-(void)initDB:(id)db;
-(id)init;
@end

