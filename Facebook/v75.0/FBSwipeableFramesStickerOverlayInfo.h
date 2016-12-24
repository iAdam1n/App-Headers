/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIImage;

@interface FBSwipeableFramesStickerOverlayInfo : FBValueObject <NSCopying> {

	UIImage* _image;
	double _overlayOriginXInPercentage;
	double _overlayOriginYInPercentage;
	double _overlayWidthInPercentage;
	double _overlayHeightInPercentage;

}

@property (nonatomic,copy,readonly) UIImage * image;                           //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) double overlayOriginXInPercentage;              //@synthesize overlayOriginXInPercentage=_overlayOriginXInPercentage - In the implementation block
@property (nonatomic,readonly) double overlayOriginYInPercentage;              //@synthesize overlayOriginYInPercentage=_overlayOriginYInPercentage - In the implementation block
@property (nonatomic,readonly) double overlayWidthInPercentage;                //@synthesize overlayWidthInPercentage=_overlayWidthInPercentage - In the implementation block
@property (nonatomic,readonly) double overlayHeightInPercentage;               //@synthesize overlayHeightInPercentage=_overlayHeightInPercentage - In the implementation block
-(id)initWithImage:(id)arg1 overlayOriginXInPercentage:(double)arg2 overlayOriginYInPercentage:(double)arg3 overlayWidthInPercentage:(double)arg4 overlayHeightInPercentage:(double)arg5 ;
-(double)overlayOriginXInPercentage;
-(double)overlayOriginYInPercentage;
-(double)overlayWidthInPercentage;
-(double)overlayHeightInPercentage;
-(UIImage *)image;
@end
