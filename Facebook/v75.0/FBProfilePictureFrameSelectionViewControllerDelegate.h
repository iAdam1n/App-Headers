/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBProfilePictureFrameSelectionViewControllerDelegate <NSObject>
@required
-(void)framePickerDidCancel:(id)arg1;
-(void)framePickerDidPickStickerId:(id)arg1 frameUri:(id)arg2 title:(id)arg3 pageImage:(id)arg4 picker:(id)arg5;
-(void)framePickerDidRemoveFrame:(id)arg1;
-(void)profilePictureDidStartUpdateWithVC:(id)arg1;
-(void)profilePictureDidFinishUpdateWithVC:(id)arg1;
-(void)profilePictureDidFailToUpdateWithVC:(id)arg1;

@end
