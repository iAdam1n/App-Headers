/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:31 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBLigerProvidesConnectionLogger.h>

@protocol FBLigerProvidesNetworkStatusMonitor;
@class NSString;

@interface FBLigerConnectionLogger : NSObject <FBLigerProvidesConnectionLogger> {

	unsigned _sampleWeight;
	id<FBLigerProvidesNetworkStatusMonitor> _monitor;
	unique_ptr<proxygen::ConnectionLogger, std::__1::default_delete<proxygen::ConnectionLogger> >* _connLogger;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(TraceEventObserver*)getConnectionLogger;
-(id)initWithSampleWeight:(unsigned)arg1 withNetworkStatusMonitor:(id)arg2 ;
-(void)logConnectionInfo:(vector<proxygen::TraceEvent, std::__1::allocator<proxygen::TraceEvent> >*)arg1 ;
-(void)dealloc;
-(void)reset;
@end
