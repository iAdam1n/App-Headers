/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBPhotoDisplayingComponentPhotoViewProviderDelegate <NSObject>
@optional
-(id)photoAttachmentPhotoViewProvider:(id)arg1 needsScrollContainerFor:(id)arg2;
-(BOOL)photoAttachmentPhotoViewProvider:(id)arg1 shouldAnimateOverlayComponent:(id)arg2 isAppearing:(BOOL)arg3;

@required
-(id)photoAttachmentPhotoViewProvider:(id)arg1 needsPhotoDisplayingComponentForPhoto:(id)arg2;
-(id)photoAttachmentPhotoViewProvider:(id)arg1 needsOverlayComponentForPhoto:(id)arg2;

@end
