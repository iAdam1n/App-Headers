/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface GADViewHierarchyTraverser : NSObject {

	BOOL _traversing;
	unsigned long long _sequenceNumber;
	NSObject*<OS_dispatch_queue> _serialQueue;

}
-(void)setTraversing:(BOOL)arg1 ;
-(void)traverseView:(id)arg1 traversalBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(id)init;
@end
