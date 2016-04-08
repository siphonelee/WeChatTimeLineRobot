/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "NSObject.h"


@protocol MultiImageScrollViewDelegate <NSObject>
-(id)imageAtPage:(unsigned long)page;
-(id)viewAtPage:(unsigned long)page frame:(CGRect)frame;
@optional
-(id)imagePathAtPage:(unsigned long)page;
-(void)onChangePage;
-(void)multiImageScrollViewWillBeginDragging;
-(void)OnLongPressBegin:(id)begin;
-(void)OnLongPress:(id)press;
-(void)onDoubleTap:(id)tap;
-(void)onSingleTap:(id)tap;
@end

