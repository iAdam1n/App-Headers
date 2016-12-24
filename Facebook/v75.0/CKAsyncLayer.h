/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:27 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <QuartzCore/CALayer.h>

@interface CKAsyncLayer : CALayer {

	int _displaySentinel;
	BOOL _needsAsyncDisplayOnly;

}

@property (assign) unsigned long long displayMode; 
+(void)drawInContext:(CGContextRef)arg1 parameters:(id)arg2 ;
+(id)displayQueue;
+(void)drawAsyncLayerInContext:(CGContextRef)arg1 parameters:(id)arg2 ;
+(/*^block*/id)asyncDisplayBlockWithBounds:(CGRect)arg1 contentsScale:(double)arg2 opaque:(BOOL)arg3 backgroundColor:(CGColorRef)arg4 displaySentinel:(int*)arg5 expectedDisplaySentinelValue:(int)arg6 drawingDelegate:(id)arg7 drawParameters:(id)arg8 ;
+(id)defaultValueForKey:(id)arg1 ;
-(id)drawParameters;
-(void)cancelAsyncDisplay;
-(void)setNeedsAsyncDisplay;
-(id)willDisplayAsynchronouslyWithDrawParameters:(id)arg1 ;
-(void)didDisplayAsynchronously:(id)arg1 withDrawParameters:(id)arg2 ;
-(void)setNeedsDisplay;
-(id)name;
-(void)display;
-(void)drawInContext:(CGContextRef)arg1 ;
@end
