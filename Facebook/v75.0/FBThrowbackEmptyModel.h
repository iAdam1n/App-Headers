/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSArray, FBMemImage, NSDate;

@interface FBThrowbackEmptyModel : NSObject <NSCopying> {

	unsigned long long _subtype;
	NSString* _fBThrowbackEmptyStateModel_title;
	NSString* _fBThrowbackEmptyStateModel_subtitle;
	NSString* _fBThrowbackEmptyStateModel_buttonText;
	NSArray* _fBThrowbackEmptyStateModel_images;
	FBMemImage* _fBThrowbackEmptyStateModel_decorativeImage;
	BOOL _fBThrowbackEmptyStateModel_isMegaphone;
	NSDate* _fBThrowbackEmptyStateModel_titleDate;
	NSString* _fBThrowbackEmptyStateModel_renderStyle;
	NSString* _fBThrowbackPageNotAvailableModel_title;
	NSString* _fBThrowbackPageNotAvailableModel_subtitle;
	FBMemImage* _fBThrowbackPageNotAvailableModel_image;

}
+(id)fBThrowbackEmptyStateModelWithTitle:(id)arg1 subtitle:(id)arg2 buttonText:(id)arg3 images:(id)arg4 decorativeImage:(id)arg5 isMegaphone:(BOOL)arg6 titleDate:(id)arg7 renderStyle:(id)arg8 ;
+(id)fBThrowbackPageNotAvailableModelWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 ;
-(void)matchFBThrowbackEmptyStateModel:(/*^block*/id)arg1 fBThrowbackPageNotAvailableModel:(/*^block*/id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

