/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface FBProfileWizardAnalytics : NSObject {

	unsigned long long _wizardType;
	NSString* _userID;
	NSArray* _flowType;
	NSString* _stepType;
	BOOL _wizardViewHasLogged;

}
-(void)logProfileNuxEntryPointView;
-(void)logProfileNuxEntryPointCancelButtonTap;
-(void)logProfileNuxEntryPointStartButtonTap;
-(void)logProfileWizardIntroCardBioAddButtonTap;
-(void)logProfileWizardIntroCardFeaturedPhotosAddButtonTap;
-(void)logProfileWizardStepSave;
-(void)logProfileWizardUploadPhotoFromAlbumsTap;
-(void)logProfileWizardUploadPhotoFromCameraRollTap;
-(id)initWithProfileWizardType:(unsigned long long)arg1 userID:(id)arg2 flowType:(id)arg3 stepType:(id)arg4 ;
-(void)logProfileWizardStepView;
-(void)logProfileWizardCancelButtonTap;
-(void)logProfileWizardSkipButtonTap;
-(void)_logWithExtraEventType:(id)arg1 ;
-(id)_eventNameWithWizardType:(unsigned long long)arg1 ;
-(void)logProfileNuxStatusUpdateButtonTap;
-(void)logProfileNuxPhotoUpdateButtonTap;
-(void)logProfileNuxLifeEventUpdateButtonTap;
@end
