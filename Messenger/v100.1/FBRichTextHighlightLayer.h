/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:30 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSArray, CALayer;

@interface FBRichTextHighlightLayer : CALayer {

	NSArray* _rects;
	CALayer* _targetLayer;

}

@property (retain) CGColorRef highlightColor; 
@property (__weak) CALayer * targetLayer;                  //@synthesize targetLayer=_targetLayer - In the implementation block
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)needsDisplayForKey:(id)arg1 ;
-(id)initWithRects:(id)arg1 ;
-(id)initWithRects:(id)arg1 targetLayer:(id)arg2 ;
-(CALayer *)targetLayer;
-(void)setTargetLayer:(CALayer *)arg1 ;
-(id)hitTest:(CGPoint)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
@end
