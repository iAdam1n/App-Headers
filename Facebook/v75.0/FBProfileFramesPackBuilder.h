/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:05 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIImage, FBMemImage, FBMemProfileSegmentationMaskResult;

@interface FBProfileFramesPackBuilder : NSObject {

	NSString* _cameraTitle;
	NSString* _categoryId;
	UIImage* _frameImage;
	UIImage* _removeFrameThumbnail;
	NSString* _frameId;
	NSString* _frameUri;
	NSString* _sourceMediaID;
	FBMemImage* _currentPageImage;
	BOOL _defaultToStagingGround;
	FBMemProfileSegmentationMaskResult* _alphaMask;

}
+(id)profileFramesPack;
+(id)profileFramesPackFromExistingProfileFramesPack:(id)arg1 ;
-(id)withFrameImage:(id)arg1 ;
-(id)withDefaultToStagingGround:(BOOL)arg1 ;
-(id)withCategoryId:(id)arg1 ;
-(id)withSourceMediaID:(id)arg1 ;
-(id)withFrameId:(id)arg1 ;
-(id)withFrameUri:(id)arg1 ;
-(id)withCameraTitle:(id)arg1 ;
-(id)withAlphaMask:(id)arg1 ;
-(id)withRemoveFrameThumbnail:(id)arg1 ;
-(id)withCurrentPageImage:(id)arg1 ;
-(id)build;
@end
