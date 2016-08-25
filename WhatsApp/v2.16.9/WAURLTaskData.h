/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:04 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <WhatsApp/WhatsApp-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, WAURLRequestConfig, WAURLTaskStats;

@interface WAURLTaskData : NSObject <NSSecureCoding, NSCopying> {

	BOOL _suppressNotifications;
	BOOL _needsBackgroundTaskAssertion;
	NSString* _identifier;
	long long _retryCount;
	WAURLRequestConfig* _requestConfig;
	WAURLTaskStats* _stats;
	unsigned long long _backgroundTaskID;

}

@property (nonatomic,retain) WAURLRequestConfig * requestConfig;               //@synthesize requestConfig=_requestConfig - In the implementation block
@property (nonatomic,retain) WAURLTaskStats * stats;                           //@synthesize stats=_stats - In the implementation block
@property (assign,nonatomic) long long retryCount;                             //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic) BOOL suppressNotifications;                       //@synthesize suppressNotifications=_suppressNotifications - In the implementation block
@property (assign,nonatomic) BOOL needsBackgroundTaskAssertion;                //@synthesize needsBackgroundTaskAssertion=_needsBackgroundTaskAssertion - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundTaskID;              //@synthesize backgroundTaskID=_backgroundTaskID - In the implementation block
@property (nonatomic,copy) NSString * identifier;                              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * shortIdentifier; 
@property (nonatomic,readonly) BOOL endToEndEncrypted; 
+(Class)taskClass;
+(BOOL)supportsSecureCoding;
-(void)setRequestConfig:(WAURLRequestConfig *)arg1 ;
-(WAURLRequestConfig *)requestConfig;
-(BOOL)suppressNotifications;
-(BOOL)needsBackgroundTaskAssertion;
-(unsigned long long)backgroundTaskID;
-(void)setSuppressNotifications:(BOOL)arg1 ;
-(void)setNeedsBackgroundTaskAssertion:(BOOL)arg1 ;
-(void)setBackgroundTaskID:(unsigned long long)arg1 ;
-(id)modifyRequestConfigForRetry:(id)arg1 bytesReceived:(long long)arg2 error:(id)arg3 ;
-(NSString *)shortIdentifier;
-(BOOL)endToEndEncrypted;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSString *)identifier;
-(id)request;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)retryCount;
-(void)setRetryCount:(long long)arg1 ;
-(void)setStats:(WAURLTaskStats *)arg1 ;
-(WAURLTaskStats *)stats;
@end

