/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "UIScrollViewDelegate.h"
#import "MMUIView.h"

@class MMUIScrollView, NSString, NSMutableDictionary;
@protocol SequencePageScrollViewDataSource;

@interface SequencePageScrollView : MMUIView <UIScrollViewDelegate> {
	MMUIScrollView* m_scrollView;
	id<SequencePageScrollViewDataSource> m_delegate;
	int m_curPageNum;
	float m_topOffset;
	NSMutableDictionary* m_loadedNumDic;
	NSMutableDictionary* m_reuseDic;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) float m_topOffset;
@property(assign, nonatomic) int m_curPageNum;
@property(assign, nonatomic) __weak id<SequencePageScrollViewDataSource> m_delegate;
@property(retain, nonatomic) NSMutableDictionary* m_reuseDic;
@property(retain, nonatomic) NSMutableDictionary* m_loadedNumDic;
@property(retain, nonatomic) MMUIScrollView* m_scrollView;
-(void).cxx_destruct;
-(void)layoutInternal;
-(void)layoutSubviews;
-(void)cutViewOutOfBounds;
-(void)loadPageAtIndex:(int)index;
-(id)getPageNumString:(int)string;
-(id)requestBaseViewForIdentity:(id)identity atPageNum:(int)pageNum;
-(void)addReuseView:(id)view forKey:(id)key;
-(id)baseViewIdentityKey;
-(void)scrollViewDidEndDecelerating:(id)scrollView;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)setTopDisplayOffset:(float)offset;
-(void)changeToPageOfNum:(int)num;
-(void)reloadData;
-(id)initWithFrame:(CGRect)frame withDelegate:(id)delegate;
-(id)initWithFrame:(CGRect)frame;
@end

