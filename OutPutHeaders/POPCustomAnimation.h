/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "POPAnimation.h"
#import "WeChat-Structs.h"


@interface POPCustomAnimation : POPAnimation {
	id _animate;
	double _currentTime;
	double _elapsedTime;
}
@property(copy, nonatomic) id animate;
@property(readonly, assign, nonatomic) double elapsedTime;
@property(readonly, assign, nonatomic) double currentTime;
+(id)animationWithBlock:(id)block;
-(void).cxx_destruct;
-(void)_appendDescription:(id)description debug:(BOOL)debug;
-(BOOL)_advance:(id)advance currentTime:(double)time elapsedTime:(double)time3;
-(double)beginTime;
-(id)_init;
-(id)copyWithZone:(NSZone*)zone;
@end

