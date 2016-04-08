/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "WCTimelineCellABTestBaseTip.h"
#import "RichTextLayoutDelegate.h"
#import "ILinkEventExt.h"

@class UIImageView, NSMutableArray, NSString;

@interface WCTimelineCellABTestActionListTip : WCTimelineCellABTestBaseTip <ILinkEventExt, RichTextLayoutDelegate> {
	NSMutableArray* arrRichTextActionView;
	NSMutableArray* arrActionItemView;
	UIImageView* backgroundImageView;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
+(float)heightForTipView:(id)tipView;
-(void).cxx_destruct;
-(BOOL)shouldOpenNewLineAtY:(float)y withLineHeight:(float)lineHeight richTextView:(id)view;
-(void)onLinkClicked:(id)clicked withRect:(CGRect)rect withView:(id)view;
-(void)resetStatus;
-(void)initView;
-(void)onActionJump:(id)jump;
-(void)createNormalCellView:(id)view paddingTop:(float)top addLine:(BOOL)line;
-(void)createRevokeCellView:(id)view paddingTop:(float)top addLine:(BOOL)line;
@end

