/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "NSObject.h"


@protocol SightDraftBoxDelegate <NSObject>
@optional
-(void)onPlayerCleared;
-(void)onUndo;
-(void)onItemDeleted;
-(void)onBackToCameraItemClicked;
-(void)onItemChecked:(int)checked withSightDraft:(id)sightDraft;
-(void)onItemClicked:(int)clicked withSightDraft:(id)sightDraft;
-(void)onItemLongClicked:(int)clicked;
@end

