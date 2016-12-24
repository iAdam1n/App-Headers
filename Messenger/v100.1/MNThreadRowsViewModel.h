/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:16 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface MNThreadRowsViewModel : FBValueObject <NSCopying> {

	BOOL _didReachEndOfThreadList;
	NSArray* _threadRows;

}

@property (nonatomic,copy,readonly) NSArray * threadRows;                 //@synthesize threadRows=_threadRows - In the implementation block
@property (nonatomic,readonly) BOOL didReachEndOfThreadList;              //@synthesize didReachEndOfThreadList=_didReachEndOfThreadList - In the implementation block
-(BOOL)didReachEndOfThreadList;
-(NSArray *)threadRows;
-(id)initWithThreadRows:(id)arg1 didReachEndOfThreadList:(BOOL)arg2 ;
@end
