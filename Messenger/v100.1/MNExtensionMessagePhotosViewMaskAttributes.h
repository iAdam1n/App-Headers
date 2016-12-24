/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:20 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, FBRoundedRectImageSpec;

@interface MNExtensionMessagePhotosViewMaskAttributes : FBValueObject <NSCopying> {

	double _topLeftCornerRadius;
	double _topRightCornerRadius;
	double _bottomLeftCornerRadius;
	double _bottomRightCornerRadius;
	double _outerCornerRadius;
	double _innerCornerRadius;
	UIColor* _maskColor;
	UIColor* _highlightedMaskColor;
	UIColor* _strokeColor;
	double _strokeWidth;
	FBRoundedRectImageSpec* _overlayImageSpec;

}

@property (nonatomic,readonly) double topLeftCornerRadius;                                  //@synthesize topLeftCornerRadius=_topLeftCornerRadius - In the implementation block
@property (nonatomic,readonly) double topRightCornerRadius;                                 //@synthesize topRightCornerRadius=_topRightCornerRadius - In the implementation block
@property (nonatomic,readonly) double bottomLeftCornerRadius;                               //@synthesize bottomLeftCornerRadius=_bottomLeftCornerRadius - In the implementation block
@property (nonatomic,readonly) double bottomRightCornerRadius;                              //@synthesize bottomRightCornerRadius=_bottomRightCornerRadius - In the implementation block
@property (nonatomic,readonly) double outerCornerRadius;                                    //@synthesize outerCornerRadius=_outerCornerRadius - In the implementation block
@property (nonatomic,readonly) double innerCornerRadius;                                    //@synthesize innerCornerRadius=_innerCornerRadius - In the implementation block
@property (nonatomic,copy,readonly) UIColor * maskColor;                                    //@synthesize maskColor=_maskColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * highlightedMaskColor;                         //@synthesize highlightedMaskColor=_highlightedMaskColor - In the implementation block
@property (nonatomic,copy,readonly) UIColor * strokeColor;                                  //@synthesize strokeColor=_strokeColor - In the implementation block
@property (nonatomic,readonly) double strokeWidth;                                          //@synthesize strokeWidth=_strokeWidth - In the implementation block
@property (nonatomic,copy,readonly) FBRoundedRectImageSpec * overlayImageSpec;              //@synthesize overlayImageSpec=_overlayImageSpec - In the implementation block
-(FBRoundedRectImageSpec *)overlayImageSpec;
-(double)topLeftCornerRadius;
-(double)topRightCornerRadius;
-(double)bottomLeftCornerRadius;
-(double)bottomRightCornerRadius;
-(double)outerCornerRadius;
-(double)innerCornerRadius;
-(UIColor *)highlightedMaskColor;
-(id)initWithTopLeftCornerRadius:(double)arg1 topRightCornerRadius:(double)arg2 bottomLeftCornerRadius:(double)arg3 bottomRightCornerRadius:(double)arg4 outerCornerRadius:(double)arg5 innerCornerRadius:(double)arg6 maskColor:(id)arg7 highlightedMaskColor:(id)arg8 strokeColor:(id)arg9 strokeWidth:(double)arg10 overlayImageSpec:(id)arg11 ;
-(UIColor *)strokeColor;
-(double)strokeWidth;
-(UIColor *)maskColor;
@end
