/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:15 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableArray;

@interface OptimizelySRIOConsumerPool : NSObject {

	unsigned long long _poolSize;
	NSMutableArray* _bufferedConsumers;

}
-(id)consumerWithScanner:(/*^block*/id)arg1 handler:(/*^block*/id)arg2 bytesNeeded:(unsigned long long)arg3 readToCurrentFrame:(BOOL)arg4 unmaskBytes:(BOOL)arg5 ;
-(void)returnConsumer:(id)arg1 ;
-(id)initWithBufferCapacity:(unsigned long long)arg1 ;
-(id)init;
@end

