/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:42 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBImageProcessingConcurrentRequest.h>

@class UIImage, NSDictionary;

@interface FBImageProcessingFaceCropRequest : FBImageProcessingConcurrentRequest {

	UIImage* _image;
	NSDictionary* _faces;
	NSDictionary* _faceCropJPEGs;

}

@property (nonatomic,retain) NSDictionary * faceCropJPEGs;              //@synthesize faceCropJPEGs=_faceCropJPEGs - In the implementation block
-(id)_dataFromCrop:(CGImageRef)arg1 width:(unsigned long long)arg2 height:(unsigned long long)arg3 bytesPerRow:(unsigned long long)arg4 colorSpace:(CGColorSpaceRef)arg5 bitmapInfo:(unsigned)arg6 ;
-(void)setFaceCropJPEGs:(NSDictionary *)arg1 ;
-(id)initWithImage:(id)arg1 faces:(id)arg2 completion:(/*^block*/id)arg3 cancel:(/*^block*/id)arg4 ;
-(NSDictionary *)faceCropJPEGs;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)executeWithContext:(id)arg1 ;
@end
