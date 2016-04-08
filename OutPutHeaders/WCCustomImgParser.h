/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import "ImageParser.h"

@class UIFont;

@interface WCCustomImgParser : ImageParser {
}
@property(retain, nonatomic) UIFont* font;
+(id)newInstance;
-(id)getImageForText:(id)text;
-(id)stylesForString:(id)string withRange:(NSRange)range withParserPosition:(NSParserPosition*)parserPosition;
-(id)styleStringForContent:(id)content withParserPosition:(NSParserPosition)parserPosition outputLastPosition:(NSParserPosition*)position;
-(id)getImageStylesForString:(id)string withStyleString:(id)styleString;
-(id)getStylesForString:(id)string withStyleString:(id)styleString;
-(NSRange)rangeOfObjectInString:(id)string withRange:(NSRange)range;
-(id)getImage;
-(void)setImageSrc:(id)src;
@end

