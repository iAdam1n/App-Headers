/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:01 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface GADViewHierarchyTraverser : NSObject {

	BOOL _traversing;
	long long _sequenceNumber;
	NSObject*<OS_dispatch_queue> _SDKLowPrioritySerialQueue;

}
-(void)traverseView:(id)arg1 traversalBlock:(/*^block*/id)arg2 completionBlock:(/*^block*/id)arg3 ;
-(void)setTraversing:(BOOL)arg1 ;
-(id)init;
@end

