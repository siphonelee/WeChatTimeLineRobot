/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface FavTypeObjectItem : XXUnknownSuperclass {
	NSString* _labelText;
	NSString* _imgName;
	NSString* _imgHLName;
	int _type;
}
@property(retain, nonatomic) NSString* imgHLName;
@property(retain, nonatomic) NSString* imgName;
@property(retain, nonatomic) NSString* labelText;
@property(assign, nonatomic) int type;
-(void).cxx_destruct;
-(id)initWithImgName:(id)imgName hightLightName:(id)name type:(int)type labelText:(id)text;
@end

