/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "MMComponentData.h"

@class SimpleImgInfo, NSString;

@interface MMFavImgComponentData : MMComponentData {
	BOOL _m_bNeedCompress;
	NSString* m_ThumbPath;
	NSString* m_CDNThumbUrl;
	NSString* m_CDNThumbKey;
	NSString* m_des;
	NSString* m_ocr;
	int favType;
	NSString* m_defaultThumbPath;
	unsigned long localId;
	NSString* label;
	NSString* poiname;
	unsigned long _m_CDNThumbSize;
	int _m_count;
	unsigned long _duration;
	SimpleImgInfo* _sightImgInfo;
	double lng;
	double lat;
	double scale;
}
@property(retain, nonatomic) NSString* poiname;
@property(retain, nonatomic) NSString* label;
@property(assign, nonatomic) double scale;
@property(assign, nonatomic) double lat;
@property(assign, nonatomic) double lng;
@property(assign, nonatomic) unsigned long localId;
@property(assign, nonatomic) int favType;
@property(retain, nonatomic) SimpleImgInfo* sightImgInfo;
@property(assign, nonatomic) unsigned long duration;
@property(retain, nonatomic) NSString* m_ocr;
@property(retain, nonatomic) NSString* m_des;
@property(assign, nonatomic) int m_count;
@property(retain, nonatomic) NSString* m_defaultThumbPath;
@property(assign, nonatomic) unsigned long m_CDNThumbSize;
@property(retain, nonatomic) NSString* m_CDNThumbKey;
@property(retain, nonatomic) NSString* m_CDNThumbUrl;
@property(retain, nonatomic) NSString* m_ThumbPath;
@property(assign, nonatomic) BOOL m_bNeedCompress;
-(void).cxx_destruct;
@end
