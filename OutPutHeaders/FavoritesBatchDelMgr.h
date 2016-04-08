/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "PBMessageObserverDelegate.h"
#import "MMObject.h"

@class NSMutableArray, FavoritesItemDB;
@protocol FavoritesBatchDelMgrDelegate;

@interface FavoritesBatchDelMgr : MMObject <PBMessageObserverDelegate> {
	FavoritesItemDB* _favItemDB;
	NSMutableArray* _batchDelArray;
	NSMutableArray* _failArray;
	id<FavoritesBatchDelMgrDelegate> _delegate;
	BOOL _isDeling;
}
@property(assign, nonatomic) __weak id<FavoritesBatchDelMgrDelegate> delegate;
-(void).cxx_destruct;
-(void)checkFailQueue;
-(void)MessageReturn:(id)aReturn Event:(unsigned long)event;
-(void)HandleBatchDelFavItemResp:(id)resp Event:(unsigned long)event;
-(void)TryStartBatchDel;
-(void)addBatchDelFavoritesItemList:(id)list;
-(void)dealloc;
-(BOOL)loadBatchDelQueue;
-(void)initDB:(id)db;
-(id)init;
@end

