/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol WCListViewRowViewDelegate <NSObject>
@optional
-(void)onRestoreWCListCellView:(id)view;
-(void)handleClickImageView:(id)view;
-(void)handleFeedView:(id)view;
-(void)handleShortVideoView:(id)view;
-(void)handleVideoView:(id)view;
-(void)handleMusicView:(id)view;
-(void)handleTextView:(id)view;
-(id)getImageViewByDataItem:(id)item;
@end

