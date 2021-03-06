/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBPlatformPhotoAttachment.h>

@class FBUserSession, UIImage;

@interface FBPlatformRemotePhotoAttachment : FBPlatformPhotoAttachment {

	FBUserSession* _session;
	BOOL _requestingImageThumb;
	UIImage* _displayImage;

}
-(BOOL)requiresUpload;
-(id)existingFBID;
-(id)nameOfServerAssetIDFieldOverridingFileURL;
-(void)setDisplayImage:(id)arg1 ;
-(id)initWithURL:(id)arg1 platformPhotoMetadata:(id)arg2 session:(id)arg3 ;
-(void)_loadThumbnail;
-(void)_loadImageWithURI:(id)arg1 successBlock:(/*^block*/id)arg2 failureBlock:(/*^block*/id)arg3 ;
-(id)displayImage;
@end

