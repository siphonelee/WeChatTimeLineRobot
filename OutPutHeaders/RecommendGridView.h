/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "UICollectionViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "EmoticonStoreCellDelegate.h"
#import "MMUIView.h"

@class NSMutableArray, UICollectionView, NSString;
@protocol RecommendGridViewDelegate;

@interface RecommendGridView : MMUIView <UICollectionViewDataSource, UICollectionViewDelegate, EmoticonStoreCellDelegate> {
	NSMutableArray* _emotionsArray;
	NSString* _packageId;
	UICollectionView* _collectionView;
	id<RecommendGridViewDelegate> _delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(retain, nonatomic) id<RecommendGridViewDelegate> delegate;
@property(retain, nonatomic) UICollectionView* collectionView;
@property(retain, nonatomic) NSString* packageId;
@property(retain, nonatomic) NSMutableArray* emotionsArray;
+(id)getStoreItemPid;
-(void).cxx_destruct;
-(void)OnShowAlertWithIKnow:(id)iknow;
-(void)OnShowAlertWithOK:(id)ok;
-(void)OnStopLoading;
-(void)OnStopLoadingAndShowError:(id)error;
-(void)OnStopLoadingAndShowOK:(id)ok;
-(void)OnStartLoadingAndShowStringBlocked:(id)blocked;
-(void)OnStartLoadingAndShowString:(id)string;
-(void)collectionView:(id)view didSelectItemAtIndexPath:(id)indexPath;
-(CGSize)collectionView:(id)view layout:(id)layout sizeForItemAtIndexPath:(id)indexPath;
-(int)numberOfSectionsInCollectionView:(id)collectionView;
-(id)collectionView:(id)view cellForItemAtIndexPath:(id)indexPath;
-(int)collectionView:(id)view numberOfItemsInSection:(int)section;
-(void)configCollectionView;
-(void)configViews;
-(void)reloadData;
-(void)setRecommendGridViewDelegate:(id)delegate;
-(id)initWithFrame:(CGRect)frame;
@end

