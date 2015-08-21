/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:29 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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

