/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "MMUIView.h"

@protocol FirstUnReadTipViewDelegate;

@interface FirstUnReadTipView : MMUIView {
	id<FirstUnReadTipViewDelegate> _delegate;
}
@property(assign, nonatomic) __weak id<FirstUnReadTipViewDelegate> delegate;
+(id)showTipWithDelegate:(id)delegate parentView:(id)view content:(id)content;
-(void).cxx_destruct;
-(void)setContentNormal;
-(void)setContentHighlighted;
-(void)performBgAction;
-(void)initView;
-(id)init;
@end

