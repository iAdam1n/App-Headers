/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, NSString;

@interface FBComposerSproutSheetBannerProfilePicture : NSObject <NSCopying> {

	unsigned long long _subtype;
	UIImage* _profilePictureImage;
	NSString* _profilePictureURI;

}
+(id)profilePictureImage:(id)arg1 ;
+(id)profilePictureURI:(id)arg1 ;
-(void)matchProfilePictureImage:(/*^block*/id)arg1 profilePictureURI:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
