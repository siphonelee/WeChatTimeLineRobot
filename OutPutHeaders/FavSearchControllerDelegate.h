/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol FavSearchControllerDelegate <NSObject>
-(void)resetHeaderView:(id)view;
-(BOOL)shouldShowSearchResult:(id)result;
-(void)onSelectFavItem:(id)item tableView:(id)view atIndexPath:(id)indexPath;
-(id)getCurrentViewController;
@optional
-(void)onBtnEdit;
-(void)onWillBeginSearch;
-(void)onSelectFavDataItem:(id)item tableView:(id)view atIndexPath:(id)indexPath;
@end
