/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:15 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/OptimizelyAFHTTPResponseSerializer.h>

@interface OptimizelyAFJSONResponseSerializer : OptimizelyAFHTTPResponseSerializer {

	BOOL _removesKeysWithNullValues;
	unsigned long long _readingOptions;

}

@property (assign,nonatomic) unsigned long long readingOptions;              //@synthesize readingOptions=_readingOptions - In the implementation block
@property (assign,nonatomic) BOOL removesKeysWithNullValues;                 //@synthesize removesKeysWithNullValues=_removesKeysWithNullValues - In the implementation block
+(id)serializerWithReadingOptions:(unsigned long long)arg1 ;
+(id)serializer;
-(id)responseObjectForResponse:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(void)setReadingOptions:(unsigned long long)arg1 ;
-(BOOL)removesKeysWithNullValues;
-(void)setRemovesKeysWithNullValues:(BOOL)arg1 ;
-(unsigned long long)readingOptions;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
