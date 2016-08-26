/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:25 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface MNThreadListResponse : FBValueObject <NSCopying> {

	BOOL _didReachEndOfThreadList;
	NSArray* _summaryWithMessagePairs;

}

@property (nonatomic,copy,readonly) NSArray * summaryWithMessagePairs;              //@synthesize summaryWithMessagePairs=_summaryWithMessagePairs - In the implementation block
@property (nonatomic,readonly) BOOL didReachEndOfThreadList;                        //@synthesize didReachEndOfThreadList=_didReachEndOfThreadList - In the implementation block
-(NSArray *)summaryWithMessagePairs;
-(BOOL)didReachEndOfThreadList;
-(id)initWithSummaryWithMessagePairs:(id)arg1 didReachEndOfThreadList:(BOOL)arg2 ;
@end
