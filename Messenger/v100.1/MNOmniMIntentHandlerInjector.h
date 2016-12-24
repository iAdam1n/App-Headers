/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextInjecting.h>

@protocol MNModalPresentation;
@class FBProviderMapData, MNMAISettingsViewController, NSString;

@interface MNOmniMIntentHandlerInjector : NSObject <FBViewerContextInjecting> {

	FBProviderMapData* _mapData;
	id<MNModalPresentation> _modalPresenter;
	MNMAISettingsViewController* _mSettingsViewController;

}

@property (nonatomic,readonly) id<MNModalPresentation> modalPresenter;                             //@synthesize modalPresenter=_modalPresenter - In the implementation block
@property (nonatomic,readonly) MNMAISettingsViewController * mSettingsViewController;              //@synthesize mSettingsViewController=_mSettingsViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)instanceWithInjector:(id)arg1 ;
-(id)initWithProviderMapData:(id)arg1 ;
-(id<MNModalPresentation>)modalPresenter;
-(MNMAISettingsViewController *)mSettingsViewController;
@end
