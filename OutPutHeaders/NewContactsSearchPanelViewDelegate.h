/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol NewContactsSearchPanelViewDelegate <NSObject>
-(void)didSearchViewTableSelect:(id)select;
-(float)heightForSearchViewTable:(id)searchViewTable;
-(id)cellForSearchViewTable:(id)searchViewTable index:(id)index;
@optional
-(void)doTagSearch:(id)search arrContacts:(id)contacts;
-(void)cancelSearch;
-(void)doSearch:(id)search Pre:(BOOL)pre;
-(void)searchTextFieldDidBeginEditing;
-(void)didDeleteLastWithKey:(id)key;
-(void)didClickImageAtIndex:(unsigned long)index withKey:(id)key;
@end

