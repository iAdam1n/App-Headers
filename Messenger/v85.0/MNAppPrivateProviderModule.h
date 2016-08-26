/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:19 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBProviderModule.h>

@protocol OrcaLogoutHandler;
@class MNKeysConfiguration, NSString;

@interface MNAppPrivateProviderModule : NSObject <FBProviderModule> {

	id<OrcaLogoutHandler> _logoutHandler;
	MNKeysConfiguration* _keysConfiguration;

}

@property (nonatomic,retain) id<OrcaLogoutHandler> logoutHandler;                  //@synthesize logoutHandler=_logoutHandler - In the implementation block
@property (nonatomic,retain) MNKeysConfiguration * keysConfiguration;              //@synthesize keysConfiguration=_keysConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)moduleWithLogoutHandler:(id)arg1 keysConfiguration:(id)arg2 ;
-(void)addConfigurationToProviderData:(id)arg1 ;
-(void)setKeysConfiguration:(MNKeysConfiguration *)arg1 ;
-(MNKeysConfiguration *)keysConfiguration;
-(void)setLogoutHandler:(id<OrcaLogoutHandler>)arg1 ;
-(id<OrcaLogoutHandler>)logoutHandler;
@end
