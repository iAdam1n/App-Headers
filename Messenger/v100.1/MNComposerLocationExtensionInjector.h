/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:18 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBInjecting.h>

@class FBProviderMapData, MNMessageLiveLocationConfigManager, MNLocationPickerPresenter, MNLocationPickerViewControllerFactory, NSString;

@interface MNComposerLocationExtensionInjector : NSObject <FBInjecting> {

	FBProviderMapData* _mapData;
	MNMessageLiveLocationConfigManager* _liveLocationConfigManager;
	MNLocationPickerPresenter* _locationPickerPresenter;
	MNLocationPickerViewControllerFactory* _locationPickerViewControllerFactory;

}

@property (nonatomic,readonly) MNMessageLiveLocationConfigManager * liveLocationConfigManager;                           //@synthesize liveLocationConfigManager=_liveLocationConfigManager - In the implementation block
@property (nonatomic,readonly) MNLocationPickerPresenter * locationPickerPresenter;                                      //@synthesize locationPickerPresenter=_locationPickerPresenter - In the implementation block
@property (nonatomic,readonly) MNLocationPickerViewControllerFactory * locationPickerViewControllerFactory;              //@synthesize locationPickerViewControllerFactory=_locationPickerViewControllerFactory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(MNMessageLiveLocationConfigManager *)liveLocationConfigManager;
-(MNLocationPickerPresenter *)locationPickerPresenter;
-(MNLocationPickerViewControllerFactory *)locationPickerViewControllerFactory;
@end
