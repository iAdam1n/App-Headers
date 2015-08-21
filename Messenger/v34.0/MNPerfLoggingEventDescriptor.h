/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:58 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>

@class NSString;

@interface MNPerfLoggingEventDescriptor : FBValueObject <NSCopying> {

	BOOL _renameExistingEvent;
	NSString* _event;
	NSString* _existingEvent;
	double _animationDuration;

}

@property (nonatomic,copy,readonly) NSString * event;                      //@synthesize event=_event - In the implementation block
@property (nonatomic,copy,readonly) NSString * existingEvent;              //@synthesize existingEvent=_existingEvent - In the implementation block
@property (nonatomic,readonly) BOOL renameExistingEvent;                   //@synthesize renameExistingEvent=_renameExistingEvent - In the implementation block
@property (nonatomic,readonly) double animationDuration;                   //@synthesize animationDuration=_animationDuration - In the implementation block
-(id)initWithEvent:(id)arg1 existingEvent:(id)arg2 renameExistingEvent:(BOOL)arg3 animationDuration:(double)arg4 ;
-(NSString *)existingEvent;
-(BOOL)renameExistingEvent;
-(double)animationDuration;
-(NSString *)event;
@end

