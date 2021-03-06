/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:02 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <Slack/AFHTTPResponseSerializer.h>

@interface AFPropertyListResponseSerializer : AFHTTPResponseSerializer {

	unsigned long long _format;
	unsigned long long _readOptions;

}

@property (assign,nonatomic) unsigned long long format;                   //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) unsigned long long readOptions;              //@synthesize readOptions=_readOptions - In the implementation block
+(id)serializerWithFormat:(unsigned long long)arg1 readOptions:(unsigned long long)arg2 ;
+(id)serializer;
-(id)responseObjectForResponse:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(void)setReadOptions:(unsigned long long)arg1 ;
-(unsigned long long)readOptions;
-(unsigned long long)format;
-(void)setFormat:(unsigned long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

