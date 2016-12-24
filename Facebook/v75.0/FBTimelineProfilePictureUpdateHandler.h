/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:03 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBProfilePicturePickerControllerDelegate.h>

@protocol FBTimelineProfilePictureUpdateListener;
@class FBUserSession, FBProfilePicturePickerController, FBExpiringProfilePicLogger, NSString;

@interface FBTimelineProfilePictureUpdateHandler : NSObject <FBProfilePicturePickerControllerDelegate> {

	FBUserSession* _session;
	FBProfilePicturePickerController* _profilePicturePickerController;
	FBExpiringProfilePicLogger* _logger;
	id<FBTimelineProfilePictureUpdateListener> _listener;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)profilePicturePickerDidChooseVideo:(id)arg1 selectingViewController:(id)arg2 ;
-(void)profilePicturePickerDidChoosePic:(id)arg1 ;
-(void)profilePicturePickerDidUploadPic:(id)arg1 ;
-(void)profilePicturePickerDidFailSettingPic:(id)arg1 errorType:(int)arg2 ;
-(void)profilePicturePickerWillUploadPic:(id)arg1 ;
-(void)profilePicturePickerDidCancel:(id)arg1 ;
-(void)profilePicturePickerDidChoosePic:(id)arg1 attachment:(id)arg2 selectingViewController:(id)arg3 ;
-(void)profilePicturePickerWillAppear:(id)arg1 ;
-(void)_showPhotoPermissionView;
-(void)updateProfilePictureActionWithSender:(id)arg1 sourceType:(long long)arg2 pickerTraits:(id)arg3 mediaFilter:(unsigned long long)arg4 bannerProvider:(id)arg5 sessionID:(id)arg6 memorialTarget:(id)arg7 unifiedMediaGalleryEnabled:(BOOL)arg8 isStagingGroundEnabled:(BOOL)arg9 ;
-(id)profilePicturePickerController:(id)arg1 ;
-(id)initWithSession:(id)arg1 logger:(id)arg2 listener:(id)arg3 ;
-(void)updateProfilePictureActionWithSender:(id)arg1 sourceType:(long long)arg2 ;
-(void)dealloc;
@end
