/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "TextParser.h"
#import "WeChat-Structs.h"

@class UIColor, NSString;

@interface WCCustomLinkParser : TextParser {
	NSString* _url;
	NSString* _sourceUrl;
	UIColor* _highlightedColor;
	BOOL _bBackgroundEnabled;
}
@property(retain, nonatomic) NSString* sourceUrl;
@property(retain, nonatomic) NSString* url;
+(id)newInstance;
-(void).cxx_destruct;
-(id)attributeStringForContent:(id)content;
-(id)getStyle;
-(id)getStylesForString:(id)string withStyleString:(id)styleString;
-(id)styleStringForContent:(id)content withParserPosition:(NSParserPosition)parserPosition outputLastPosition:(NSParserPosition*)position;
-(id)stylesForString:(id)string withRange:(NSRange)range withParserPosition:(NSParserPosition*)parserPosition;
-(NSRange)rangeOfObjectInString:(id)string withRange:(NSRange)range;
-(id)init;
@end

