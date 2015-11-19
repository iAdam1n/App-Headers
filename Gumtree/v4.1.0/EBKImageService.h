/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:10 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Gumtree/Gumtree-Structs.h>
@class CIContext, CIImage;

@interface EBKImageService : NSObject {

	CIContext* _contextCI;
	CIImage* _fullScreenCIImage;

}

@property (nonatomic,retain) CIContext * contextCI;                    //@synthesize contextCI=_contextCI - In the implementation block
@property (nonatomic,retain) CIImage * fullScreenCIImage;              //@synthesize fullScreenCIImage=_fullScreenCIImage - In the implementation block
+(id)rotationFilterForImageOrientation:(long long)arg1 size:(CGSize)arg2 ;
+(id)rotationFilterWithNumberOf90DegreeRotations:(double)arg1 clockwise:(BOOL)arg2 ;
+(id)filterChainForImage:(id)arg1 withFilters:(id)arg2 ;
+(id)scaleFilterWithScale:(double)arg1 ;
-(void)processImage:(id)arg1 byScalingAndCroppingForSize:(CGSize)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)processImage:(id)arg1 withCropRect:(CGRect)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)processImage:(id)arg1 withNumberOf90DegreeCWRotations:(long long)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)processAsset:(id)arg1 withMaxLength:(double)arg2 completionBlock:(/*^block*/id)arg3 ;
-(CIContext *)contextCI;
-(void)processImage:(id)arg1 withMaxLength:(double)arg2 imageOrientation:(long long)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)setContextCI:(CIContext *)arg1 ;
-(CIImage *)fullScreenCIImage;
-(void)setFullScreenCIImage:(CIImage *)arg1 ;
-(id)init;
@end

