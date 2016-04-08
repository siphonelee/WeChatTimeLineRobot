/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMRefreshTableFooterDelegate.h"
#import "WeChat-Structs.h"
#import "MMUIView.h"
#import "UISearchBarDelegate.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"

@class UIView, UIImageView, NSString, MMTableView, MMUIViewController, WCTimeLineFooterView, MMUISearchBar, NSMutableArray, AttributeLabel;
@protocol FTSResultViewDelegate;

@interface FTSResultView : MMUIView <UISearchBarDelegate, UITableViewDelegate, UITableViewDataSource, MMRefreshTableFooterDelegate> {
	NSString* m_keyword;
	NSString* m_defaultKeyword;
	MMUIViewController* m_controller;
	UIView* m_bottomView;
	UIView* m_searchBarSuperView;
	UIImageView* m_searchBarWrap;
	MMUISearchBar* m_searchBar;
	MMTableView* m_tableView;
	WCTimeLineFooterView* m_footerView;
	NSMutableArray* m_resultAry;
	NSString* m_emptyTipSuffix;
	AttributeLabel* m_emptyTipLabel;
	BOOL m_popForCancel;
	BOOL m_hasMoving;
	float m_moveStartOffset;
	float m_moveCurOffset;
	float m_moveContentOffsetY;
	UIImageView* m_bottomViewShadow;
	id<FTSResultViewDelegate> m_detailViewDelegate;
	int m_searchScene;
	float _searchTextFieldNormalWidth;
	CGSize _searchIconDefaultSize;
	UIImageView* _searchIcon;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) __weak id<FTSResultViewDelegate> detailViewDelegate;
@property(assign, nonatomic) int searchScene;
@property(retain, nonatomic) NSString* emptyTipSuffix;
@property(retain, nonatomic) NSMutableArray* resultAry;
@property(retain, nonatomic) NSString* keyword;
@property(retain, nonatomic) MMUIViewController* viewController;
@property(retain, nonatomic) UIView* bottomView;
@property(retain, nonatomic) UIView* searchBarSuperView;
-(void).cxx_destruct;
-(int)tableView:(id)view editingStyleForRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view viewForFooterInSection:(int)section;
-(float)tableView:(id)view heightForFooterInSection:(int)section;
-(void)scrollViewDidScroll:(id)scrollView;
-(void)scrollViewWillBeginDragging:(id)scrollView;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(float)tableView:(id)view heightForRowAtIndexPath:(id)indexPath;
-(void)MMRefreshTableFooterDidTriggerRefresh:(id)mmrefreshTableFooter;
-(void)onLoadMore;
-(void)reloadData;
-(void)searchBarCancelButtonClicked:(id)clicked;
-(void)searchBarSearchButtonClicked:(id)clicked;
-(void)searchBar:(id)bar textDidChange:(id)text;
-(void)handleTextChanged:(id)changed immediately:(BOOL)immediately;
-(void)handlePanGesture:(id)gesture;
-(void)updateSearchBarPosition;
-(void)moveRight;
-(void)cancelMoveSearchBar;
-(BOOL)hasSearchDone:(id)done;
-(id)getSearchArray:(id)array;
-(void)resetSearchIconFrame;
-(id)getSearchIcon;
-(void)enableButton:(id)button;
-(void)remove;
-(void)pop;
-(void)show;
-(void)handleRotateEvent;
-(void)clearResource;
-(void)setDefaultKeyWord:(id)word;
-(void)loadView;
-(void)onReturn;
-(void)dealloc;
-(id)init;
-(float)getSearchTextFieldWidth;
@end

