/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:35:26 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BAB6B524-089F-49C7-9E02-F76A6A5EBF73/CARROT.app/CARROT
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <CARROT/CARROT-Structs.h>
@class NSArray;

@interface CARStyleKit : NSObject {

	NSArray* _ocularSensorTargets;
	NSArray* _donutTargets;
	NSArray* _editArrowTargets;

}

@property (nonatomic,retain) NSArray * ocularSensorTargets;              //@synthesize ocularSensorTargets=_ocularSensorTargets - In the implementation block
@property (nonatomic,retain) NSArray * donutTargets;                     //@synthesize donutTargets=_donutTargets - In the implementation block
@property (nonatomic,retain) NSArray * editArrowTargets;                 //@synthesize editArrowTargets=_editArrowTargets - In the implementation block
+(void)drawCARROTIconWithFrame:(CGRect)arg1 ;
+(id)darkRed;
+(id)darkBlue;
+(void)drawOcularSensorWithFrame:(CGRect)arg1 strokeWidth:(float)arg2 ;
+(void)drawDonutWithFrame:(CGRect)arg1 fillColor:(id)arg2 outlineColor:(id)arg3 checkmarkColor:(id)arg4 strokeWidth:(float)arg5 shouldGlow:(char)arg6 isChecked:(char)arg7 isHighPriority:(char)arg8 showEyes:(char)arg9 showHurtEyes:(char)arg10 isLowPriority:(char)arg11 eyeHeight:(float)arg12 ;
+(void)drawEditArrowWithFrame:(CGRect)arg1 outlineColor:(id)arg2 ;
+(id)lightBlue;
+(id)lightRed;
+(id)lightLightBlue;
+(id)yellow;
+(id)darkYellow;
+(id)purple;
+(id)darkDarkYellow;
+(id)prettyLightBlue;
+(id)prettyLightRed;
+(void)drawDeleteButtonWithFrame:(CGRect)arg1 isHappy:(char)arg2 isPressed:(char)arg3 ;
+(void)drawMenuButtonWithFrame:(CGRect)arg1 fillColor:(id)arg2 outlineColor:(id)arg3 menuText:(id)arg4 ;
+(void)drawRhombusWithFrame:(CGRect)arg1 fillColor:(id)arg2 outlineColor:(id)arg3 checkmarkColor:(id)arg4 strokeWidth:(float)arg5 shouldGlow:(char)arg6 isChecked:(char)arg7 isHighPriority:(char)arg8 showEyes:(char)arg9 showHurtEyes:(char)arg10 isLowPriority:(char)arg11 ;
+(void)drawHexWithFrame:(CGRect)arg1 fillColor:(id)arg2 outlineColor:(id)arg3 checkmarkColor:(id)arg4 strokeWidth:(float)arg5 shouldGlow:(char)arg6 isChecked:(char)arg7 isHighPriority:(char)arg8 ;
+(void)drawLoopyWithFrame:(CGRect)arg1 fillColor:(id)arg2 outlineColor:(id)arg3 strokeWidth:(float)arg4 shouldGlow:(char)arg5 showEyes:(char)arg6 showHurtEyes:(char)arg7 ;
+(void)drawPinWithFrame:(CGRect)arg1 fillColor:(id)arg2 outlineColor:(id)arg3 checkmarkColor:(id)arg4 strokeWidth:(float)arg5 isChecked:(char)arg6 isHighPriority:(char)arg7 showEyes:(char)arg8 showHurtEyes:(char)arg9 ;
+(void)drawSearchWithFrame:(CGRect)arg1 shouldGlow:(char)arg2 ;
+(void)drawCommandWithFrame:(CGRect)arg1 shouldGlow:(char)arg2 ;
+(void)drawPillButtonWithFrame:(CGRect)arg1 parametricColor:(id)arg2 outlineColor:(id)arg3 pillButtonRadius:(float)arg4 pillButtonText:(id)arg5 pillButtonFontSize:(float)arg6 ;
+(void)drawListIconWithFrame:(CGRect)arg1 parametricColor:(id)arg2 isArchive:(char)arg3 isList:(char)arg4 ;
+(void)drawCircleButtonWithFrame:(CGRect)arg1 parametricColor:(id)arg2 ;
+(void)drawSpeechBubbleLeftWithFrame:(CGRect)arg1 outlineColor:(id)arg2 ;
+(void)drawSpeechBubbleTopWithFrame:(CGRect)arg1 outlineColor:(id)arg2 ;
+(void)drawBigOcularSensorWithFrame:(CGRect)arg1 strokeWidth:(float)arg2 ;
+(id)imageOfOcularSensorWithFrame:(CGRect)arg1 strokeWidth:(float)arg2 ;
+(id)imageOfDonutWithFrame:(CGRect)arg1 fillColor:(id)arg2 outlineColor:(id)arg3 checkmarkColor:(id)arg4 strokeWidth:(float)arg5 shouldGlow:(char)arg6 isChecked:(char)arg7 isHighPriority:(char)arg8 showEyes:(char)arg9 showHurtEyes:(char)arg10 isLowPriority:(char)arg11 eyeHeight:(float)arg12 ;
+(id)imageOfEditArrowWithFrame:(CGRect)arg1 outlineColor:(id)arg2 ;
+(void)initialize;
+(id)red;
+(id)green;
+(id)blue;
-(NSArray *)ocularSensorTargets;
-(void)setOcularSensorTargets:(NSArray *)arg1 ;
-(NSArray *)donutTargets;
-(void)setDonutTargets:(NSArray *)arg1 ;
-(NSArray *)editArrowTargets;
-(void)setEditArrowTargets:(NSArray *)arg1 ;
@end

