/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBTimelineProfilePictureUpdateListener <NSObject>
@required
-(void)profilePictureUpdaterHandlerDidChoosePic:(id)arg1 attachment:(id)arg2 selectingViewController:(id)arg3;
-(void)profilePictureDidStartUpdate;
-(void)profilePictureDidFinishUpdate;
-(void)profilePictureDidFailToUpdate;
-(void)profilePictureUpdaterHandlerDidChooseVideo:(id)arg1 selectingViewController:(id)arg2;
-(void)profilePicturePickerDidCancel;
-(id)fb_hostingViewController;
-(void)profileMediaPickerDidAppear;

@end
