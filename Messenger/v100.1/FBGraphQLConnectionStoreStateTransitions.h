/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:31 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface FBGraphQLConnectionStoreStateTransitions : FBValueObject <NSCopying> {

	NSArray* _transitions;
	id _returnValue;

}

@property (nonatomic,copy,readonly) NSArray * transitions;              //@synthesize transitions=_transitions - In the implementation block
@property (nonatomic,copy,readonly) id returnValue;                     //@synthesize returnValue=_returnValue - In the implementation block
-(id)initWithTransitions:(id)arg1 returnValue:(id)arg2 ;
-(id)returnValue;
-(NSArray *)transitions;
@end
