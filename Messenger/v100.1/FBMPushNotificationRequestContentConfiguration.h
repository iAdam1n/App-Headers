/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface FBMPushNotificationRequestContentConfiguration : FBValueObject <NSCopying> {

	NSString* _titleTextForPushNux;
	NSString* _requestReasonTextForPushNux;
	NSString* _titleTextForPushInstructions;
	NSString* _requestReasonTextForPushInstructions;
	NSString* _okButtonText;
	NSString* _cancelButtonText;

}

@property (nonatomic,copy,readonly) NSString * titleTextForPushNux;                               //@synthesize titleTextForPushNux=_titleTextForPushNux - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestReasonTextForPushNux;                       //@synthesize requestReasonTextForPushNux=_requestReasonTextForPushNux - In the implementation block
@property (nonatomic,copy,readonly) NSString * titleTextForPushInstructions;                      //@synthesize titleTextForPushInstructions=_titleTextForPushInstructions - In the implementation block
@property (nonatomic,copy,readonly) NSString * requestReasonTextForPushInstructions;              //@synthesize requestReasonTextForPushInstructions=_requestReasonTextForPushInstructions - In the implementation block
@property (nonatomic,copy,readonly) NSString * okButtonText;                                      //@synthesize okButtonText=_okButtonText - In the implementation block
@property (nonatomic,copy,readonly) NSString * cancelButtonText;                                  //@synthesize cancelButtonText=_cancelButtonText - In the implementation block
-(id)initWithTitleTextForPushNux:(id)arg1 requestReasonTextForPushNux:(id)arg2 titleTextForPushInstructions:(id)arg3 requestReasonTextForPushInstructions:(id)arg4 okButtonText:(id)arg5 cancelButtonText:(id)arg6 ;
-(NSString *)titleTextForPushInstructions;
-(NSString *)requestReasonTextForPushInstructions;
-(NSString *)titleTextForPushNux;
-(NSString *)requestReasonTextForPushNux;
-(NSString *)cancelButtonText;
-(NSString *)okButtonText;
@end
