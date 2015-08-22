/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:50 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Twitter/Twitter-Structs.h>
@class NSData, NSMutableData;

@interface CJSONDeserializer : NSObject {

	NSData* _data;
	unsigned long long _scanLocation;
	char* _end;
	char* _current;
	char* _start;
	NSMutableData* _scratchData;
	CFDictionaryRef _stringsByHash;
	id _nullObject;
	unsigned long long _options;

}

@property (nonatomic,retain) id nullObject;                           //@synthesize nullObject=_nullObject - In the implementation block
@property (assign,nonatomic) unsigned long long options;              //@synthesize options=_options - In the implementation block
+(id)deserializer;
-(id)deserialize:(id)arg1 error:(id*)arg2 ;
-(BOOL)_setData:(id)arg1 error:(id*)arg2 ;
-(BOOL)_scanJSONObject:(id*)arg1 sharedKeySet:(id*)arg2 error:(id*)arg3 ;
-(id)_error:(long long)arg1 description:(id)arg2 ;
-(BOOL)_scanJSONDictionary:(id*)arg1 sharedKeySet:(id*)arg2 error:(id*)arg3 ;
-(BOOL)_scanJSONArray:(id*)arg1 error:(id*)arg2 ;
-(id)_error:(long long)arg1 underlyingError:(id)arg2 description:(id)arg3 ;
-(BOOL)_scanJSONStringConstant:(id*)arg1 key:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)_scanJSONNumberConstant:(id*)arg1 error:(id*)arg2 ;
-(BOOL)_scanNotQuoteCharactersIntoRange:(SCD_Struct_CJ49*)arg1 ;
-(BOOL)_scanDoubleCharactersIntoRange:(SCD_Struct_CJ49*)arg1 ;
-(id)_userInfoForScanLocation;
-(id)deserializeAsDictionary:(id)arg1 error:(id*)arg2 ;
-(id)deserializeAsArray:(id)arg1 error:(id*)arg2 ;
-(id)nullObject;
-(void)setNullObject:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned long long)options;
-(unsigned long long)scanLocation;
@end
