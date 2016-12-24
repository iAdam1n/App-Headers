/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:33 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/RCTValueAnimatedNode.h>

@class RCTValueAnimatedNode, NSArray, NSString;

@interface RCTInterpolationAnimatedNode : RCTValueAnimatedNode {

	RCTValueAnimatedNode* _parentNode;
	NSArray* _inputRange;
	NSArray* _outputRange;
	NSString* _extrapolateLeft;
	NSString* _extrapolateRight;

}
-(void)onDetachedFromNode:(id)arg1 ;
-(void)onAttachedToNode:(id)arg1 ;
-(unsigned long long)findIndexOfNearestValue:(double)arg1 inRange:(id)arg2 ;
-(id)initWithTag:(id)arg1 config:(id)arg2 ;
-(void)performUpdate;
@end
