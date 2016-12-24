/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:09 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray, NSDate;

@interface FBFeedImpressionSnapshot : FBValueObject <NSCopying> {

	NSArray* _visibleEdgeViewStates;
	NSDate* _timestamp;
	CGRect _visibleBounds;

}

@property (nonatomic,readonly) CGRect visibleBounds;                              //@synthesize visibleBounds=_visibleBounds - In the implementation block
@property (nonatomic,copy,readonly) NSArray * visibleEdgeViewStates;              //@synthesize visibleEdgeViewStates=_visibleEdgeViewStates - In the implementation block
@property (nonatomic,copy,readonly) NSDate * timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
-(NSArray *)visibleEdgeViewStates;
-(id)initWithVisibleBounds:(CGRect)arg1 visibleEdgeViewStates:(id)arg2 timestamp:(id)arg3 ;
-(NSDate *)timestamp;
-(CGRect)visibleBounds;
@end
