/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:34 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSValue;

@interface MNActionTrackingLayer : CALayer {

	NSValue* _pendingPosition;
	NSValue* _pendingBounds;

}
+(BOOL)supportsTrackingKeyPath:(id)arg1 ;
-(id)pendingValueForKeyPath:(id)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(void)setPosition:(CGPoint)arg1 ;
@end
