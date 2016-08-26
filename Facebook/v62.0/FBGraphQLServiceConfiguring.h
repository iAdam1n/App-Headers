/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:49 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString;


@protocol FBGraphQLServiceConfiguring <NSObject>
@property (nonatomic,readonly) id<FBServiceConfigurationCoring> core; 
@property (nonatomic,readonly) id<FBServiceConfigurationSecuring> security; 
@property (nonatomic,readonly) id<FBServiceConfigurationTransporting> transport; 
@property (nonatomic,readonly) id<FBServiceConfigurationRequesting> request; 
@property (nonatomic,copy) NSString * udpPrimedChannelID; 
@required
-(id<FBServiceConfigurationCoring>)core;
-(NSString *)udpPrimedChannelID;
-(void)setUdpPrimedChannelID:(id)arg1;
-(id<FBServiceConfigurationRequesting>)request;
-(id<FBServiceConfigurationSecuring>)security;
-(id<FBServiceConfigurationTransporting>)transport;

@end
