/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:17 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSNumber;

@interface MNCDNProfileImageSizeConfiguration : FBValueObject <NSCopying> {

	NSNumber* _sizeForSmallProfilePicture;
	NSNumber* _sizeForLargeProfilePicture;
	NSNumber* _sizeForHugeFullScreenProfilePicture;

}

@property (nonatomic,copy,readonly) NSNumber * sizeForSmallProfilePicture;                       //@synthesize sizeForSmallProfilePicture=_sizeForSmallProfilePicture - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * sizeForLargeProfilePicture;                       //@synthesize sizeForLargeProfilePicture=_sizeForLargeProfilePicture - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * sizeForHugeFullScreenProfilePicture;              //@synthesize sizeForHugeFullScreenProfilePicture=_sizeForHugeFullScreenProfilePicture - In the implementation block
-(NSNumber *)sizeForSmallProfilePicture;
-(NSNumber *)sizeForLargeProfilePicture;
-(NSNumber *)sizeForHugeFullScreenProfilePicture;
-(id)initWithSizeForSmallProfilePicture:(id)arg1 sizeForLargeProfilePicture:(id)arg2 sizeForHugeFullScreenProfilePicture:(id)arg3 ;
@end
