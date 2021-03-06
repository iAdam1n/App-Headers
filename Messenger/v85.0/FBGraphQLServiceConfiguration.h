/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBGraphQLServiceConfiguring.h>

@protocol FBServiceConfigurationCoring, FBServiceConfigurationSecuring, FBServiceConfigurationTransporting, FBServiceConfigurationRequesting;
@class NSString;

@interface FBGraphQLServiceConfiguration : NSObject <FBGraphQLServiceConfiguring> {

	id<FBServiceConfigurationCoring> _core;
	id<FBServiceConfigurationSecuring> _security;
	id<FBServiceConfigurationTransporting> _transport;
	id<FBServiceConfigurationRequesting> _request;
	NSString* _udpPrimedChannelID;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) id<FBServiceConfigurationCoring> core;                         //@synthesize core=_core - In the implementation block
@property (nonatomic,readonly) id<FBServiceConfigurationSecuring> security;                   //@synthesize security=_security - In the implementation block
@property (nonatomic,readonly) id<FBServiceConfigurationTransporting> transport;              //@synthesize transport=_transport - In the implementation block
@property (nonatomic,readonly) id<FBServiceConfigurationRequesting> request;                  //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) NSString * udpPrimedChannelID;                                     //@synthesize udpPrimedChannelID=_udpPrimedChannelID - In the implementation block
-(id<FBServiceConfigurationCoring>)core;
-(id)initWithCore:(id)arg1 security:(id)arg2 transport:(id)arg3 request:(id)arg4 ;
-(NSString *)udpPrimedChannelID;
-(void)setUdpPrimedChannelID:(NSString *)arg1 ;
-(NSString *)description;
-(id<FBServiceConfigurationRequesting>)request;
-(id<FBServiceConfigurationSecuring>)security;
-(id<FBServiceConfigurationTransporting>)transport;
@end

