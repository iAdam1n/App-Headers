/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:07 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Reddit/Reddit-Structs.h>
@interface TWTRViewUtil : NSObject
+(id)bestMatchSizeFromMediaEntity:(id)arg1 fittingWidth:(double)arg2 ;
+(id)constraintForAttribute:(long long)arg1 onView:(id)arg2 value:(double)arg3 ;
+(void)centerViewInSuperview:(id)arg1 ;
+(void)addVisualConstraints:(id)arg1 metrics:(id)arg2 views:(id)arg3 ;
+(void)centerViewHorizontallyInSuperview:(id)arg1 ;
+(void)addVisualConstraints:(id)arg1 views:(id)arg2 ;
+(void)equateAttribute:(long long)arg1 onView:(id)arg2 toView:(id)arg3 ;
+(id)constraintForAspectRatio:(double)arg1 onView:(id)arg2 ;
+(void)addVisualConstraints:(id)arg1 options:(unsigned long long)arg2 views:(id)arg3 ;
+(void)equateAttribute:(long long)arg1 onView:(id)arg2 toView:(id)arg3 constant:(double)arg4 ;
+(id)constraintToTopOfSuperview:(id)arg1 constant:(double)arg2 ;
+(void)addVisualConstraints:(id)arg1 options:(unsigned long long)arg2 metrics:(id)arg3 views:(id)arg4 ;
+(double)averageAspectRatioForMediaEntity:(id)arg1 ;
+(double)aspectRatioForSize:(CGSize)arg1 ;
+(id)marginConstraintBetweenTopView:(id)arg1 bottomView:(id)arg2 ;
+(id)constraintToTopOfSuperview:(id)arg1 ;
+(double)aspectRatioForWidth:(double)arg1 height:(double)arg2 ;
+(id)constraintToBottomOfSuperview:(id)arg1 constant:(double)arg2 ;
+(void)centerViewVertically:(id)arg1 inView:(id)arg2 ;
+(void)centerViewHorizontally:(id)arg1 inView:(id)arg2 ;
+(void)centerView:(id)arg1 inView:(id)arg2 ;
+(void)setConstraints:(id)arg1 active:(BOOL)arg2 ;
+(BOOL)aspectRatioIsLandscape:(double)arg1 ;
+(id)constraintToBottomOfSuperview:(id)arg1 ;
+(void)centerViewVerticallyInSuperview:(id)arg1 ;
+(id)constraintsWithFormat:(id)arg1 metrics:(id)arg2 views:(id)arg3 ;
@end
