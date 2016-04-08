/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"
#import "MMWebImageViewDelegate.h"

@class MMWebImageView, NSString;

@interface MMDeviceHeadImageView : XXUnknownSuperclass <MMWebImageViewDelegate> {
	MMWebImageView* m_headView;
	BOOL m_borderRadius;
	BOOL _isRound;
	CGSize m_headSize;
}
@property(readonly, copy) NSString* debugDescription;
@property(readonly, copy) NSString* description;
@property(readonly, assign) Class superclass;
@property(readonly, assign) unsigned hash;
@property(assign, nonatomic) BOOL isRound;
@property(assign, nonatomic) CGSize m_headSize;
-(void).cxx_destruct;
-(void)onLoadImageOK:(id)ok;
-(void)reset;
-(void)setDeviceIconUrl:(id)url;
-(void)layoutSubviews;
-(void)setUpdateUrl:(id)url;
-(void)SetHeadImage:(id)image;
-(void)TrySetDefaultHeadImage:(id)image;
-(void)TrySetDefaultHeadImage;
-(id)initWithFrame:(CGRect)frame;
@end

