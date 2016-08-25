/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:34 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DDLogger;
#import <Gumtree/Gumtree-Structs.h>
@interface DDLoggerNode : NSObject {

	id<DDLogger> _logger;
	unsigned long long _level;
	dispatch_queue_sRef _loggerQueue;

}

@property (nonatomic,readonly) id<DDLogger> logger;                          //@synthesize logger=_logger - In the implementation block
@property (nonatomic,readonly) unsigned long long level;                     //@synthesize level=_level - In the implementation block
@property (nonatomic,readonly) dispatch_queue_sRef loggerQueue;              //@synthesize loggerQueue=_loggerQueue - In the implementation block
+(id)nodeWithLogger:(id)arg1 loggerQueue:(dispatch_queue_sRef)arg2 level:(unsigned long long)arg3 ;
-(dispatch_queue_sRef)loggerQueue;
-(id)initWithLogger:(id)arg1 loggerQueue:(dispatch_queue_sRef)arg2 level:(unsigned long long)arg3 ;
-(void)dealloc;
-(unsigned long long)level;
-(id<DDLogger>)logger;
@end

