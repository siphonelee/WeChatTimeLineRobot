/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"
#import "MMRefreshTableFooterDelegate.h"

@class EmoticonStoreFootView, NSString;
@protocol EmotionCollectionFooterViewDelegate;

@interface EmotionCollectionFooterView : XXUnknownSuperclass <MMRefreshTableFooterDelegate> {
	EmoticonStoreFootView* _footerView;
	id<EmotionCollectionFooterViewDelegate> _delegate;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<EmotionCollectionFooterViewDelegate> delegate;
-(void).cxx_destruct;
-(void)MMRefreshTableFooterDidTriggerRefresh:(id)mmrefreshTableFooter;
-(void)onStateOfNoData:(id)noData;
-(void)onStateOfNoMoreData:(id)noMoreData;
-(void)onStateOfLoading;
-(void)onStateOfNormal;
-(void)refreshCollectionViewDataSourceDidFinishedLoading:(id)refreshCollectionViewDataSource;
-(void)refreshCollectionViewDidScroll:(id)refreshCollectionView;
-(void)reset;
-(id)initWithFrame:(CGRect)frame;
@end

