/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage, NSURL, NSString;

@interface FBAdPaymentsPaymentMethodViewModel : FBValueObject <NSCopying> {

	UIImage* _image;
	NSURL* _imageURL;
	NSString* _title;
	NSString* _detailText;

}

@property (nonatomic,copy,readonly) UIImage * image;                    //@synthesize image=_image - In the implementation block
@property (nonatomic,copy,readonly) NSURL * imageURL;                   //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * title;                   //@synthesize title=_title - In the implementation block
@property (nonatomic,copy,readonly) NSString * detailText;              //@synthesize detailText=_detailText - In the implementation block
-(id)initWithImage:(id)arg1 imageURL:(id)arg2 title:(id)arg3 detailText:(id)arg4 ;
-(NSString *)title;
-(UIImage *)image;
-(NSString *)detailText;
-(NSURL *)imageURL;
@end
