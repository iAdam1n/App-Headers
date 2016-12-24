/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:22 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@interface FBEventHandler : NSObject {

	id<NSObject> _target;
	SEL _selectorToPerformOnEvent;

}

@property (nonatomic,__weak,readonly) id<NSObject> target;                //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL selectorToPerformOnEvent;              //@synthesize selectorToPerformOnEvent=_selectorToPerformOnEvent - In the implementation block
-(BOOL)isEqualToEventHandler:(id)arg1 ;
-(SEL)selectorToPerformOnEvent;
-(id)initWithTarget:(id)arg1 selectorToPerformOnEvent:(SEL)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id<NSObject>)target;
@end
