/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:37 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Twitter/TBase.h>
#import <Twitter/NSCoding.h>

@class NSString, TFNTwitterScribeThriftRequestInfo;

@interface TFNTwitterScribeThriftServerHeader : NSObject <TBase, NSCoding> {

	BOOL _clientTimestampMsIsSet;
	BOOL _serverTimestampMsIsSet;
	BOOL _serverIpAddressIsSet;
	BOOL _serverNameIsSet;
	BOOL _serverVersionIsSet;
	BOOL _loggingLibVersionIsSet;
	BOOL _requestInfoIsSet;
	BOOL _transactionIdIsSet;
	BOOL _clientTimezoneOffsetMinIsSet;
	BOOL _serviceNameIsSet;
	short _clientTimezoneOffsetMin;
	long long _clientTimestampMs;
	long long _serverTimestampMs;
	NSString* _serverIpAddress;
	NSString* _serverName;
	NSString* _serverVersion;
	NSString* _loggingLibVersion;
	TFNTwitterScribeThriftRequestInfo* _requestInfo;
	NSString* _transactionId;
	NSString* _serviceName;

}

@property (assign,nonatomic) long long clientTimestampMs;                                  //@synthesize clientTimestampMs=_clientTimestampMs - In the implementation block
@property (nonatomic,readonly) BOOL clientTimestampMsIsSet;                                //@synthesize clientTimestampMsIsSet=_clientTimestampMsIsSet - In the implementation block
@property (assign,nonatomic) long long serverTimestampMs;                                  //@synthesize serverTimestampMs=_serverTimestampMs - In the implementation block
@property (nonatomic,readonly) BOOL serverTimestampMsIsSet;                                //@synthesize serverTimestampMsIsSet=_serverTimestampMsIsSet - In the implementation block
@property (nonatomic,copy) NSString * serverIpAddress;                                     //@synthesize serverIpAddress=_serverIpAddress - In the implementation block
@property (nonatomic,readonly) BOOL serverIpAddressIsSet;                                  //@synthesize serverIpAddressIsSet=_serverIpAddressIsSet - In the implementation block
@property (nonatomic,copy) NSString * serverName;                                          //@synthesize serverName=_serverName - In the implementation block
@property (nonatomic,readonly) BOOL serverNameIsSet;                                       //@synthesize serverNameIsSet=_serverNameIsSet - In the implementation block
@property (nonatomic,copy) NSString * serverVersion;                                       //@synthesize serverVersion=_serverVersion - In the implementation block
@property (nonatomic,readonly) BOOL serverVersionIsSet;                                    //@synthesize serverVersionIsSet=_serverVersionIsSet - In the implementation block
@property (nonatomic,copy) NSString * loggingLibVersion;                                   //@synthesize loggingLibVersion=_loggingLibVersion - In the implementation block
@property (nonatomic,readonly) BOOL loggingLibVersionIsSet;                                //@synthesize loggingLibVersionIsSet=_loggingLibVersionIsSet - In the implementation block
@property (nonatomic,retain) TFNTwitterScribeThriftRequestInfo * requestInfo;              //@synthesize requestInfo=_requestInfo - In the implementation block
@property (nonatomic,readonly) BOOL requestInfoIsSet;                                      //@synthesize requestInfoIsSet=_requestInfoIsSet - In the implementation block
@property (nonatomic,copy) NSString * transactionId;                                       //@synthesize transactionId=_transactionId - In the implementation block
@property (nonatomic,readonly) BOOL transactionIdIsSet;                                    //@synthesize transactionIdIsSet=_transactionIdIsSet - In the implementation block
@property (assign,nonatomic) short clientTimezoneOffsetMin;                                //@synthesize clientTimezoneOffsetMin=_clientTimezoneOffsetMin - In the implementation block
@property (nonatomic,readonly) BOOL clientTimezoneOffsetMinIsSet;                          //@synthesize clientTimezoneOffsetMinIsSet=_clientTimezoneOffsetMinIsSet - In the implementation block
@property (nonatomic,copy) NSString * serviceName;                                         //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) BOOL serviceNameIsSet;                                      //@synthesize serviceNameIsSet=_serviceNameIsSet - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)read:(id)arg1 ;
-(void)setClientTimestampMs:(long long)arg1 ;
-(void)setServerTimestampMs:(long long)arg1 ;
-(void)setServerIpAddress:(NSString *)arg1 ;
-(void)setServerName:(NSString *)arg1 ;
-(void)setLoggingLibVersion:(NSString *)arg1 ;
-(void)setClientTimezoneOffsetMin:(short)arg1 ;
-(id)initWithClientTimestampMs:(long long)arg1 serverTimestampMs:(long long)arg2 serverIpAddress:(id)arg3 serverName:(id)arg4 serverVersion:(id)arg5 loggingLibVersion:(id)arg6 requestInfo:(id)arg7 transactionId:(id)arg8 clientTimezoneOffsetMin:(short)arg9 serviceName:(id)arg10 ;
-(long long)clientTimestampMs;
-(BOOL)clientTimestampMsIsSet;
-(long long)serverTimestampMs;
-(BOOL)serverTimestampMsIsSet;
-(NSString *)serverIpAddress;
-(BOOL)serverIpAddressIsSet;
-(BOOL)serverNameIsSet;
-(BOOL)serverVersionIsSet;
-(NSString *)loggingLibVersion;
-(BOOL)loggingLibVersionIsSet;
-(BOOL)requestInfoIsSet;
-(BOOL)transactionIdIsSet;
-(short)clientTimezoneOffsetMin;
-(BOOL)clientTimezoneOffsetMinIsSet;
-(BOOL)serviceNameIsSet;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(void)validate;
-(void)setRequestInfo:(TFNTwitterScribeThriftRequestInfo *)arg1 ;
-(NSString *)serverName;
-(void)write:(id)arg1 ;
-(NSString *)serverVersion;
-(void)setServerVersion:(NSString *)arg1 ;
-(NSString *)serviceName;
-(void)setServiceName:(NSString *)arg1 ;
-(TFNTwitterScribeThriftRequestInfo *)requestInfo;
-(void)setTransactionId:(NSString *)arg1 ;
-(NSString *)transactionId;
@end

