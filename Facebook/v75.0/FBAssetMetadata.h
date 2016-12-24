/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class CLLocation;

@interface FBAssetMetadata : FBValueObject <NSCopying, NSCoding> {

	long long _imageOrientation;
	double _duration;
	CLLocation* _location;
	CGSize _pixelSize;
	CGSize _originalPixelSize;

}

@property (nonatomic,readonly) long long imageOrientation;              //@synthesize imageOrientation=_imageOrientation - In the implementation block
@property (nonatomic,readonly) CGSize pixelSize;                        //@synthesize pixelSize=_pixelSize - In the implementation block
@property (nonatomic,readonly) CGSize originalPixelSize;                //@synthesize originalPixelSize=_originalPixelSize - In the implementation block
@property (nonatomic,readonly) double duration;                         //@synthesize duration=_duration - In the implementation block
@property (nonatomic,copy,readonly) CLLocation * location;              //@synthesize location=_location - In the implementation block
-(id)initWithImageOrientation:(long long)arg1 pixelSize:(CGSize)arg2 originalPixelSize:(CGSize)arg3 duration:(double)arg4 location:(id)arg5 ;
-(CGSize)originalPixelSize;
-(double)duration;
-(long long)imageOrientation;
-(CLLocation *)location;
-(CGSize)pixelSize;
@end
