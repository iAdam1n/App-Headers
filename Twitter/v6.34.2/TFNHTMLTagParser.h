/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:49 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSData, NSString;

@interface TFNHTMLTagParser : NSObject {

	BOOL _valid;
	const char* _tagMap;
	NSData* _cachedPreviousChunk;
	unsigned long long _encoding;
	NSString* _tag;
	unsigned long long _maximumCacheSize;
	NSString* _parsedTagText;

}

@property (nonatomic,readonly) unsigned long long encoding;                      //@synthesize encoding=_encoding - In the implementation block
@property (nonatomic,copy,readonly) NSString * tag;                              //@synthesize tag=_tag - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumCacheSize;              //@synthesize maximumCacheSize=_maximumCacheSize - In the implementation block
@property (nonatomic,readonly) unsigned long long currentCacheSize; 
@property (nonatomic,copy,readonly) NSString * parsedTagText;                    //@synthesize parsedTagText=_parsedTagText - In the implementation block
-(id)initForTag:(id)arg1 stringEncoding:(unsigned long long)arg2 ;
-(BOOL)continueParseWithData:(id)arg1 cacheExceeded:(BOOL*)arg2 ;
-(NSString *)parsedTagText;
-(id)initForTag:(id)arg1 stringEncoding:(unsigned long long)arg2 maximumCacheSize:(unsigned long long)arg3 ;
-(BOOL)_validateTagAndEncoding;
-(id)_parseWithData:(id)arg1 parsedFinalLength:(unsigned long long*)arg2 ;
-(unsigned long long)currentCacheSize;
-(BOOL)continueParseWithData:(id)arg1 ;
-(unsigned long long)maximumCacheSize;
-(NSString *)tag;
-(unsigned long long)encoding;
@end

