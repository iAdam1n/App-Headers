/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:31 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@interface FBObjectVisibilityTrackingInfo : NSObject {

	BOOL _hasMetVisibilityThreshold;
	id<NSObject> _visibilityState;

}

@property (nonatomic,readonly) id<NSObject> visibilityState;                //@synthesize visibilityState=_visibilityState - In the implementation block
@property (nonatomic,readonly) BOOL hasMetVisibilityThreshold;              //@synthesize hasMetVisibilityThreshold=_hasMetVisibilityThreshold - In the implementation block
-(id)initWithVisibilityState:(id)arg1 hasMetVisibilityThreshold:(BOOL)arg2 ;
-(BOOL)hasMetVisibilityThreshold;
-(id)description;
-(id<NSObject>)visibilityState;
@end
