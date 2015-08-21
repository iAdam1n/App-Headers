/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:50 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/NSSecureCoding.h>

@class TNLAttemptMetaData, NSHTTPURLResponse, NSError;

@interface TNLAttemptMetrics : NSObject <NSSecureCoding> {

	long long _attemptId;
	long long _attemptType;
	unsigned long long _startMachTime;
	unsigned long long _endMachTime;
	TNLAttemptMetaData* _metaData;
	NSHTTPURLResponse* _URLResponse;
	NSError* _operationError;

}

@property (nonatomic,readonly) long long attemptId;                           //@synthesize attemptId=_attemptId - In the implementation block
@property (nonatomic,readonly) long long attemptType;                         //@synthesize attemptType=_attemptType - In the implementation block
@property (nonatomic,readonly) unsigned long long startMachTime;              //@synthesize startMachTime=_startMachTime - In the implementation block
@property (nonatomic,readonly) unsigned long long endMachTime;                //@synthesize endMachTime=_endMachTime - In the implementation block
@property (nonatomic,readonly) TNLAttemptMetaData * metaData;                 //@synthesize metaData=_metaData - In the implementation block
@property (nonatomic,readonly) NSHTTPURLResponse * URLResponse;               //@synthesize URLResponse=_URLResponse - In the implementation block
@property (nonatomic,readonly) NSError * operationError;                      //@synthesize operationError=_operationError - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)attemptType;
-(unsigned long long)startMachTime;
-(unsigned long long)endMachTime;
-(void)setEndMachTime:(unsigned long long)arg1 ;
-(id)initWithType:(long long)arg1 startMachTime:(unsigned long long)arg2 endMachTime:(unsigned long long)arg3 metaData:(id)arg4 URLResponse:(id)arg5 operationError:(id)arg6 ;
-(void)setMetaData:(TNLAttemptMetaData *)arg1 ;
-(long long)attemptId;
-(id)initWithAttemptId:(long long)arg1 type:(long long)arg2 startMachTime:(unsigned long long)arg3 endMachTime:(unsigned long long)arg4 metaData:(id)arg5 URLResponse:(id)arg6 operationError:(id)arg7 ;
-(NSError *)operationError;
-(void)setOperationError:(NSError *)arg1 ;
-(NSHTTPURLResponse *)URLResponse;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(double)duration;
-(TNLAttemptMetaData *)metaData;
-(void)setURLResponse:(NSHTTPURLResponse *)arg1 ;
@end

