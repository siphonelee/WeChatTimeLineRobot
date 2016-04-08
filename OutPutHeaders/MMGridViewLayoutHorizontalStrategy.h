/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMGridViewLayoutStrategyBase.h"
#import "MMGridViewLayoutStrategy.h"

@class NSString;

@interface MMGridViewLayoutHorizontalStrategy : MMGridViewLayoutStrategyBase <MMGridViewLayoutStrategy> {
	int _numberOfItemsPerColumn;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(readonly, assign, nonatomic) int numberOfItemsPerColumn;
+(BOOL)requiresEnablingPaging;
-(NSRange)rangeOfPositionsInBoundsFromOffset:(CGPoint)offset;
-(int)itemPositionFromLocation:(CGPoint)location;
-(CGPoint)originForItemAtPosition:(int)position;
-(void)rebaseWithItemCount:(int)itemCount insideOfBounds:(CGRect)bounds;
-(id)init;
@end

