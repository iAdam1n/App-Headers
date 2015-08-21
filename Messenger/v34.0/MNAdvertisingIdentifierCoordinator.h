/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:58 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBSessionClassProvidable.h>
#import <Messenger/FBMAppUserSetupListening.h>

@class FBUserSession, FBIdleDetector, MNAdvertisingIdentifierRequester, NSString;

@interface MNAdvertisingIdentifierCoordinator : NSObject <FBSessionClassProvidable, FBMAppUserSetupListening> {

	FBUserSession* _session;
	FBIdleDetector* _idleDetector;
	MNAdvertisingIdentifierRequester* _advertisingIdentifierRequester;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(void)applicationDidEnterSetupFlowWithLoggedInUser:(BOOL)arg1 ;
-(id)initWithSession:(id)arg1 advertisingIdentifierRequester:(id)arg2 ;
-(void)_startIdleDetectorIfAllowed;
@end

