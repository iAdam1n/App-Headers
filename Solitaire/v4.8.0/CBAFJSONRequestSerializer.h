/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <SolitaireFree/CBAFHTTPRequestSerializer.h>

@interface CBAFJSONRequestSerializer : CBAFHTTPRequestSerializer {

	unsigned long long _writingOptions;

}

@property (assign,nonatomic) unsigned long long writingOptions;              //@synthesize writingOptions=_writingOptions - In the implementation block
+(id)serializerWithWritingOptions:(unsigned long long)arg1 ;
+(id)serializer;
-(id)requestBySerializingRequest:(id)arg1 withParameters:(id)arg2 error:(id*)arg3 ;
-(void)setWritingOptions:(unsigned long long)arg1 ;
-(unsigned long long)writingOptions;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

