/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMTableViewUserInfo.h"

@class NSMutableArray;

@interface MMTableViewSectionInfo : MMTableViewUserInfo {
	SEL _makeHeaderSel;
	id _makeHeaderTarget;
	SEL _makeFooterSel;
	id _makeFooterTarget;
	float _fHeaderHeight;
	float _fFooterHeight;
	NSMutableArray* _arrCells;
	BOOL _bUseDynamicSize;
}
@property(assign, nonatomic) BOOL bUseDynamicSize;
@property(assign, nonatomic) float fFooterHeight;
@property(assign, nonatomic) float fHeaderHeight;
@property(assign, nonatomic) __weak id makeFooterTarget;
@property(assign, nonatomic) SEL makeFooterSel;
@property(assign, nonatomic) __weak id makeHeaderTarget;
@property(assign, nonatomic) SEL makeHeaderSel;
+(id)sectionInfoFooterWithView:(id)view;
+(id)sectionInfoHeaderWithView:(id)view;
+(id)sectionInfoHeaderMakeSel:(SEL)sel makeTarget:(id)target;
+(id)sectionInfoHeader:(id)header Footer:(id)footer;
+(id)sectionInfoFooter:(id)footer;
+(id)sectionInfoHeader:(id)header;
+(id)sectionInfoDefaut;
-(void).cxx_destruct;
-(void)setHeaderTitle:(id)title;
-(void)setFooterTitle:(id)title;
-(id)getHeaderView;
-(void)setHeaderView:(id)view;
-(void)setFooterView:(id)view;
-(void)removeCellAt:(unsigned)at;
-(id)getCellAt:(unsigned)at;
-(unsigned)getCellCount;
-(void)addCell:(id)cell;
-(void)insertCell:(id)cell At:(unsigned long)at;
-(id)init;
-(void)sortCellsByText;
-(void)sortCellsByTheText;
@end

