/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:59:40 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/2A9FB5F5-F793-4429-94C0-AF0877EC9D65/AngryBirdsRio.app/AngryBirdsRio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AngryBirdsRio/AngryBirdsRio-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSDictionary, NSNumber, NSData, NSDate;

@interface FlurryPulseCallbackAttemptInfo : NSObject <NSCoding, NSCopying> {

	BOOL _finalAttempt;
	BOOL _beingFired;
	int _logSendState;
	int _httpStatus;
	int _requestState;
	int _repeatDuration;
	int _method;
	NSString* _substitutedUrl;
	NSString* _body;
	NSDictionary* _headers;
	NSNumber* _eventOccuranceId;
	NSString* _invokeId;
	NSNumber* _callbackId;
	NSNumber* _attemptNumber;
	NSNumber* _cbSessionId;
	NSNumber* _cbSessionOffset;
	NSData* _responseBody;
	NSNumber* _redirectsCount;
	NSNumber* _duration;
	NSDictionary* _params;
	NSDate* _creationTime;
	NSDate* _expiration;

}

@property (nonatomic,copy) NSString * invokeId;                      //@synthesize invokeId=_invokeId - In the implementation block
@property (nonatomic,copy) NSNumber * callbackId;                    //@synthesize callbackId=_callbackId - In the implementation block
@property (nonatomic,copy) NSNumber * attemptNumber;                 //@synthesize attemptNumber=_attemptNumber - In the implementation block
@property (nonatomic,copy) NSNumber * cbSessionId;                   //@synthesize cbSessionId=_cbSessionId - In the implementation block
@property (nonatomic,copy) NSNumber * cbSessionOffset;               //@synthesize cbSessionOffset=_cbSessionOffset - In the implementation block
@property (assign,nonatomic) BOOL finalAttempt;                      //@synthesize finalAttempt=_finalAttempt - In the implementation block
@property (assign,nonatomic) int httpStatus;                         //@synthesize httpStatus=_httpStatus - In the implementation block
@property (assign,nonatomic) int requestState;                       //@synthesize requestState=_requestState - In the implementation block
@property (nonatomic,copy) NSData * responseBody;                    //@synthesize responseBody=_responseBody - In the implementation block
@property (nonatomic,copy) NSNumber * redirectsCount;                //@synthesize redirectsCount=_redirectsCount - In the implementation block
@property (nonatomic,copy) NSNumber * duration;                      //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) int logSendState;                       //@synthesize logSendState=_logSendState - In the implementation block
@property (nonatomic,copy) NSString * substitutedUrl;                //@synthesize substitutedUrl=_substitutedUrl - In the implementation block
@property (nonatomic,copy) NSString * body;                          //@synthesize body=_body - In the implementation block
@property (nonatomic,copy) NSDictionary * headers;                   //@synthesize headers=_headers - In the implementation block
@property (nonatomic,copy) NSNumber * eventOccuranceId;              //@synthesize eventOccuranceId=_eventOccuranceId - In the implementation block
@property (nonatomic,copy) NSDictionary * params;                    //@synthesize params=_params - In the implementation block
@property (nonatomic,copy) NSDate * creationTime;                    //@synthesize creationTime=_creationTime - In the implementation block
@property (assign,nonatomic) BOOL beingFired;                        //@synthesize beingFired=_beingFired - In the implementation block
@property (assign,nonatomic) int repeatDuration;                     //@synthesize repeatDuration=_repeatDuration - In the implementation block
@property (assign,nonatomic) int method;                             //@synthesize method=_method - In the implementation block
@property (nonatomic,copy) NSDate * expiration;                      //@synthesize expiration=_expiration - In the implementation block
-(void)setCallbackId:(NSNumber *)arg1 ;
-(NSNumber *)callbackId;
-(NSString *)invokeId;
-(NSNumber *)attemptNumber;
-(NSNumber *)redirectsCount;
-(void)setRedirectsCount:(NSNumber *)arg1 ;
-(void)setParams:(NSDictionary *)arg1 ;
-(void)setInvokeId:(NSString *)arg1 ;
-(void)setSubstitutedUrl:(NSString *)arg1 ;
-(BOOL)beingFired;
-(NSString *)substitutedUrl;
-(BOOL)finalAttempt;
-(int)logSendState;
-(void)setLogSendState:(int)arg1 ;
-(void)setAttemptNumber:(NSNumber *)arg1 ;
-(void)setCbSessionId:(NSNumber *)arg1 ;
-(void)setCbSessionOffset:(NSNumber *)arg1 ;
-(void)setFinalAttempt:(BOOL)arg1 ;
-(void)setResponseBody:(NSData *)arg1 ;
-(void)setEventOccuranceId:(NSNumber *)arg1 ;
-(void)setBeingFired:(BOOL)arg1 ;
-(NSNumber *)cbSessionId;
-(NSNumber *)cbSessionOffset;
-(NSNumber *)eventOccuranceId;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSNumber *)duration;
-(void)setDuration:(NSNumber *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)data;
-(NSString *)body;
-(int)method;
-(int)requestState;
-(void)setRequestState:(int)arg1 ;
-(void)setBody:(NSString *)arg1 ;
-(NSDate *)creationTime;
-(void)setHttpStatus:(int)arg1 ;
-(int)httpStatus;
-(void)setHeaders:(NSDictionary *)arg1 ;
-(NSDictionary *)headers;
-(NSData *)responseBody;
-(NSDictionary *)params;
-(void)setExpiration:(NSDate *)arg1 ;
-(NSDate *)expiration;
-(void)setMethod:(int)arg1 ;
-(void)setCreationTime:(NSDate *)arg1 ;
-(int)repeatDuration;
-(void)setRepeatDuration:(int)arg1 ;
@end

