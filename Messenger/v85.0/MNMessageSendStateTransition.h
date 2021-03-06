/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:24 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class MNMessageSendState;

@interface MNMessageSendStateTransition : FBValueObject <NSCopying> {

	MNMessageSendState* _fromState;
	MNMessageSendState* _toState;

}

@property (nonatomic,copy,readonly) MNMessageSendState * fromState;              //@synthesize fromState=_fromState - In the implementation block
@property (nonatomic,copy,readonly) MNMessageSendState * toState;                //@synthesize toState=_toState - In the implementation block
-(id)initWithFromState:(id)arg1 toState:(id)arg2 ;
-(MNMessageSendState *)fromState;
-(MNMessageSendState *)toState;
@end

