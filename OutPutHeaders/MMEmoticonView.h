/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "WeChat-Structs.h"

@class CEmoticonWrap, UIImageView, MMGifView;

@interface MMEmoticonView : XXUnknownSuperclass {
	CEmoticonWrap* emoticonWrap;
	float maxHeight;
	UIImageView* m_imageView;
	MMGifView* m_gifView;
}
@property(retain, nonatomic) UIImageView* m_imageView;
@property(retain, nonatomic) MMGifView* m_gifView;
@property(assign, nonatomic) float maxHeight;
@property(retain, nonatomic) CEmoticonWrap* emoticonWrap;
+(unsigned)getIdKeyDisplayFailed;
+(unsigned)getIdKeyIdEmoticon;
-(void).cxx_destruct;
-(void)dealloc;
-(void)setGifViewMaxEdge:(float)edge;
-(void)setFrame:(CGRect)frame;
-(void)setPlayGif:(BOOL)gif;
-(BOOL)isPlayGif;
-(void)setEmoticonWrap:(id)wrap PlayGif:(BOOL)gif;
-(BOOL)formGifView:(BOOL)view;
-(BOOL)formImageView:(id)view;
-(id)initWithFrame:(CGRect)frame;
-(id)init;
@end

