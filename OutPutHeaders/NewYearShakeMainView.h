/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMUIScrollView.h"

@class UIActivityIndicatorView, UIView, UIImageView, UILabel;
@protocol NewYearShakeMainDelegate;

@interface NewYearShakeMainView : MMUIScrollView {
	UIImageView* m_backgroundView;
	UIView* m_bkgViewUp;
	UIView* m_bkgViewDown;
	UIImageView* m_imageUpView;
	UIImageView* m_imageDownView;
	UIImageView* m_upWordingView;
	UILabel* m_welcomeTips;
	UIImageView* m_flower1View;
	UIImageView* m_flower2View;
	UIImageView* m_flower3View;
	UIView* m_splitLineUp;
	UIView* m_splitLineDown;
	BOOL m_bAnimating;
	UIActivityIndicatorView* m_loadingView;
	id<NewYearShakeMainDelegate> m_delegate;
}
-(void).cxx_destruct;
-(id)shakeHiddenViewBackgroundColor;
-(void)onAnimationMergeCompleted;
-(void)internalStopAllAnimation;
-(void)startAnimationMerge;
-(void)waitToNextAnimation;
-(void)startAnimationSplit;
-(BOOL)bIsAnimating;
-(void)layoutSubviews;
-(void)hiddenSpliteLine;
-(void)showSplitLine;
-(void)layoutLoadingView;
-(void)setupSubviewLayoutForNormal;
-(void)initView;
-(void)stopAllAnimation;
-(void)updateViewForLoading;
-(void)updateViewForNormal;
-(void)updateView;
-(void)dealloc;
-(id)initWithFrame:(CGRect)frame;
-(void)setM_Delegate:(id)delegate;
@end

