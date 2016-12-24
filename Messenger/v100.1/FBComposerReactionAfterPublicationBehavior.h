/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSCoding.h>

@class NSString;

@interface FBComposerReactionAfterPublicationBehavior : FBValueObject <NSCopying, NSCoding> {

	BOOL _allowReactionAfterPublication;
	NSString* _customTriggerSurface;

}

@property (nonatomic,readonly) BOOL allowReactionAfterPublication;                //@synthesize allowReactionAfterPublication=_allowReactionAfterPublication - In the implementation block
@property (nonatomic,copy,readonly) NSString * customTriggerSurface;              //@synthesize customTriggerSurface=_customTriggerSurface - In the implementation block
-(id)initWithAllowReactionAfterPublication:(BOOL)arg1 customTriggerSurface:(id)arg2 ;
-(BOOL)allowReactionAfterPublication;
-(NSString *)customTriggerSurface;
@end
