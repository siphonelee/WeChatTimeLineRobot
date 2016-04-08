/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "WeChat-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface RKLBlockEnumerationHelper : XXUnknownSuperclass {
	struct {
		CFStringRef regexString;
		unsigned regexHash;
		unsigned options;
		uregex* icu_regex;
		int captureCount;
		CFStringRef setToString;
		unsigned setToHash;
		int setToLength;
		unsigned setToIsImmutable : 1;
		unsigned setToNeedsConversion : 1;
		unsigned short* setToUniChar;
		NSRange setToRange;
		NSRange lastFindRange;
		NSRange lastMatchRange;
		map<unsigned long, unsigned long, std::__1::less<unsigned long>, std::__1::allocator<std::__1::pair<const unsigned long, unsigned long> > >* buffer;
	} cachedRegex;
	struct {
		CFStringRef string;
		unsigned hash;
		int length;
		unsigned short* uniChar;
	} buffer;
	void* scratchBuffer[5];
	unsigned needToFreeBufferUniChar : 1;
}
-(void)dealloc;
-(id)initWithRegex:(id)regex options:(unsigned)options string:(id)string range:(NSRange)range error:(id*)error;
@end

