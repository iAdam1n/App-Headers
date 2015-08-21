/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:27 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <SportyTrader/SportyTrader-Structs.h>
@interface AFSDKImageUtils : NSObject
+(id)rotateImage:(id)arg1 withImageOrientation:(long long)arg2 ;
+(id)imageWithView:(id)arg1 ;
+(id)grayishUsingPixels:(id)arg1 ;
+(id)makeRoundCornerWithImage:(id)arg1 ;
+(id)makeRoundCornerWithImage:(id)arg1 borderWidth:(double)arg2 borderColor:(id)arg3 ;
+(id)bezierPathWithIOS7RoundedRect:(CGRect)arg1 cornerRadius:(double)arg2 ;
+(CGAffineTransform)transformForOrientation:(long long)arg1 withSize:(CGSize)arg2 ;
+(id)resizedImage:(id)arg1 withSize:(CGSize)arg2 transform:(CGAffineTransform)arg3 drawTransposed:(BOOL)arg4 interpolationQuality:(int)arg5 ;
+(id)tintImage:(id)arg1 withColor:(id)arg2 ;
+(id)getRGBAComponentsFromColor:(id)arg1 ;
+(id)getHSBAComponentsFromColor:(id)arg1 ;
+(id)applyBlurOnImage:(id)arg1 withRadius:(double)arg2 tintColor:(id)arg3 saturationDeltaFactor:(double)arg4 maskImage:(id)arg5 ;
+(BOOL)isImagePlainColor:(id)arg1 limitToPixels:(unsigned long long)arg2 ;
+(id)filledImageFrom:(id)arg1 withColor:(id)arg2 ;
+(id)resizedImage:(id)arg1 withSize:(CGSize)arg2 interpolationQuality:(int)arg3 ;
+(id)imageWithColor:(id)arg1 ;
@end

