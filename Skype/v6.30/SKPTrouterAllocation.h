/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:38 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPBaseResponse.h>

@class NSString, NSURL;

@interface SKPTrouterAllocation : SKPBaseResponse {

	NSString* _connectionId;
	NSString* _connectedClientId;
	NSString* _socketIOURL;
	NSString* _publicURL;
	NSString* _identifier;
	NSURL* _healthCheckURL;
	long long _timeToLive;

}

@property (copy) NSString * connectionId;                   //@synthesize connectionId=_connectionId - In the implementation block
@property (copy) NSString * connectedClientId;              //@synthesize connectedClientId=_connectedClientId - In the implementation block
@property (copy) NSString * socketIOURL;                    //@synthesize socketIOURL=_socketIOURL - In the implementation block
@property (copy) NSString * publicURL;                      //@synthesize publicURL=_publicURL - In the implementation block
@property (copy) NSString * identifier;                     //@synthesize identifier=_identifier - In the implementation block
@property (copy) NSURL * healthCheckURL;                    //@synthesize healthCheckURL=_healthCheckURL - In the implementation block
@property (assign) long long timeToLive;                    //@synthesize timeToLive=_timeToLive - In the implementation block
+(id)nameForLogging;
+(id)requiredKeysInResponse;
+(id)errorDomain;
-(void)setConnectedClientId:(NSString *)arg1 ;
-(void)setSocketIOURL:(NSString *)arg1 ;
-(void)setHealthCheckURL:(NSURL *)arg1 ;
-(NSString *)connectedClientId;
-(NSString *)socketIOURL;
-(NSURL *)healthCheckURL;
-(id)initWithResponse:(id)arg1 data:(id)arg2 error:(id*)arg3 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(long long)timeToLive;
-(void)setTimeToLive:(long long)arg1 ;
-(NSString *)connectionId;
-(void)setConnectionId:(NSString *)arg1 ;
-(id)initWithJSONObject:(id)arg1 error:(id*)arg2 ;
-(NSString *)publicURL;
-(void)setPublicURL:(NSString *)arg1 ;
@end
