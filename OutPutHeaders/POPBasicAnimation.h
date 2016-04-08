/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "POPPropertyAnimation.h"

@class CAMediaTimingFunction;

@interface POPBasicAnimation : POPPropertyAnimation {
}
@property(retain, nonatomic) CAMediaTimingFunction* timingFunction;
@property(assign, nonatomic) double duration;
+(id)defaultAnimation;
+(id)easeInEaseOutAnimation;
+(id)easeOutAnimation;
+(id)easeInAnimation;
+(id)linearAnimation;
+(id)animationWithPropertyNamed:(id)propertyNamed;
+(id)animation;
-(void)_appendDescription:(id)description debug:(BOOL)debug;
-(id)init;
-(void)_initState;
-(id)copyWithZone:(NSZone*)zone;
@end

