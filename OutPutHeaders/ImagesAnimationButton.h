/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;
@protocol ImagesAnimationButtonDelegate;

@interface ImagesAnimationButton : XXUnknownSuperclass {
	BOOL m_isStop;
	unsigned long m_isEndImageStart;
	BOOL m_isQuitImagesAnimation;
	NSArray* m_arrCGImages;
	NSArray* m_arrEndCGImages;
	id<ImagesAnimationButtonDelegate> animationDelegate;
}
@property(assign, nonatomic) __weak id<ImagesAnimationButtonDelegate> animationDelegate;
-(void).cxx_destruct;
-(void)animationDidStop:(id)animation finished:(BOOL)finished;
-(void)startEndImagesAnimation;
-(void)startImagesAnimation;
-(void)setLastImageFromEndImages;
-(void)setLastImageFromStartImages;
-(void)startAnimationWithCGImages:(id)cgimages withDuration:(float)duration;
-(void)callStopAnimationEvent;
-(id)cgImageArrayFromImageArray:(id)imageArray;
-(void)setAnimationEndImages:(id)images;
-(void)setAnimationImages:(id)images;
-(void)quitImagesAnimation;
-(void)asycStopImagesAnimationWithEndImages:(id)endImages;
-(void)startImagesAnimationWithImages:(id)images;
-(void)dealloc;
-(id)init;
@end

