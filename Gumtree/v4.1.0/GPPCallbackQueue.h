/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:14 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableArray;

@interface GPPCallbackQueue : NSObject {

	BOOL _firing;
	int _pending;
	NSMutableArray* _queue;
	GPPCallbackQueue* _strongSelf;

}
-(void)addCallback:(/*^block*/id)arg1 ;
-(void)fire;
-(void)next;
-(id)init;
-(void)reset;
-(void)wait;
@end

