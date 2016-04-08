/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol MultiTalkSessionListViewControllerDelegate <NSObject>
-(void)viewControllerDidBePop;
-(BOOL)handleCellDeleteAtIndexPath:(id)indexPath inTableView:(id)tableView;
-(void)handleCellSelectAtIndexPath:(id)indexPath inTableView:(id)tableView;
-(float)cellHeightAtIndexPath:(id)indexPath inTableView:(id)tableView;
-(id)cellDataAtIndexPath:(id)indexPath inTableView:(id)tableView;
-(int)numberOfRowInSection:(int)section inTableView:(id)tableView;
-(int)numberOfSectionInTableView:(id)tableView;
@optional
-(id)getViewControllerConfigData;
@end

