/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:42:14 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/2E0DF6B4-8C57-4F66-9862-2B2C129D4027/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <SolitaireFree/Chartboost_AFHTTPRequestSerializer.h>

@interface Chartboost_AFPropertyListRequestSerializer : Chartboost_AFHTTPRequestSerializer {

	unsigned long long _format;
	unsigned long long _writeOptions;

}

@property (assign,nonatomic) unsigned long long format;                    //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) unsigned long long writeOptions;              //@synthesize writeOptions=_writeOptions - In the implementation block
+(id)serializerWithFormat:(unsigned long long)arg1 writeOptions:(unsigned long long)arg2 ;
+(id)serializer;
-(id)requestBySerializingRequest:(id)arg1 withParameters:(id)arg2 error:(id*)arg3 ;
-(void)setWriteOptions:(unsigned long long)arg1 ;
-(unsigned long long)writeOptions;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)format;
-(void)setFormat:(unsigned long long)arg1 ;
@end
