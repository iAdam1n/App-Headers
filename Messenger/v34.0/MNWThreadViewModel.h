/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:56 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <Messenger/NSCopying.h>
#import <Messenger/NSCoding.h>

@class FBMThreadKey, FBMStringWithRedactedDescription, NSArray;

@interface MNWThreadViewModel : FBValueObject <NSCopying, NSCoding> {

	BOOL _canReply;
	FBMThreadKey* _threadKey;
	FBMStringWithRedactedDescription* _threadName;
	NSArray* _messageRows;

}

@property (nonatomic,copy,readonly) FBMThreadKey * threadKey;                                   //@synthesize threadKey=_threadKey - In the implementation block
@property (nonatomic,copy,readonly) FBMStringWithRedactedDescription * threadName;              //@synthesize threadName=_threadName - In the implementation block
@property (nonatomic,readonly) BOOL canReply;                                                   //@synthesize canReply=_canReply - In the implementation block
@property (nonatomic,copy,readonly) NSArray * messageRows;                                      //@synthesize messageRows=_messageRows - In the implementation block
-(BOOL)canReply;
-(NSArray *)messageRows;
-(id)initWithThreadKey:(id)arg1 threadName:(id)arg2 canReply:(BOOL)arg3 messageRows:(id)arg4 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(FBMStringWithRedactedDescription *)threadName;
-(FBMThreadKey *)threadKey;
@end

