/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:18 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextInjecting.h>

@class FBProviderMapData, MNDeprecationInterstitialController, FBMobileConfigContextManager, FBMForegroundJobScheduler, NSString;

@interface MNDeprecationServiceInjector : NSObject <FBViewerContextInjecting> {

	FBProviderMapData* _mapData;
	MNDeprecationInterstitialController* _deprecationInterstitialController;
	FBMobileConfigContextManager* _configManager;
	FBMForegroundJobScheduler* _foregroundJobScheduler;

}

@property (nonatomic,readonly) MNDeprecationInterstitialController * deprecationInterstitialController;              //@synthesize deprecationInterstitialController=_deprecationInterstitialController - In the implementation block
@property (nonatomic,readonly) FBMobileConfigContextManager * configManager;                                         //@synthesize configManager=_configManager - In the implementation block
@property (nonatomic,readonly) FBMForegroundJobScheduler * foregroundJobScheduler;                                   //@synthesize foregroundJobScheduler=_foregroundJobScheduler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(FBMobileConfigContextManager *)configManager;
-(FBMForegroundJobScheduler *)foregroundJobScheduler;
-(MNDeprecationInterstitialController *)deprecationInterstitialController;
@end
