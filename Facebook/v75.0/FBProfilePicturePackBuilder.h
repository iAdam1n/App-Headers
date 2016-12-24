/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:05 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class UIImage, FBMemPhoto, NSString;

@interface FBProfilePicturePackBuilder : NSObject {

	UIImage* _originalImage;
	FBMemPhoto* _selectedPhoto;
	NSString* _currentProfilePictureFBID;
	UIImage* _finalImage;
	UIImage* _initialImage;

}
+(id)profilePicturePack;
+(id)profilePicturePackFromExistingProfilePicturePack:(id)arg1 ;
-(id)withSelectedPhoto:(id)arg1 ;
-(id)withCurrentProfilePictureFBID:(id)arg1 ;
-(id)withFinalImage:(id)arg1 ;
-(id)withInitialImage:(id)arg1 ;
-(id)withOriginalImage:(id)arg1 ;
-(id)build;
@end
