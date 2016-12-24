/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:36 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol TProtocolFactory, TProcessorFactory;
@class NSFileHandle;

@interface TSocketServer : NSObject {

	NSFileHandle* mSocketFileHandle;
	id<TProtocolFactory> mInputProtocolFactory;
	id<TProtocolFactory> mOutputProtocolFactory;
	id<TProcessorFactory> mProcessorFactory;

}
-(void)connectionAccepted:(id)arg1 ;
-(id)initWithPort:(int)arg1 protocolFactory:(id)arg2 processorFactory:(id)arg3 ;
-(void)dealloc;
-(void)handleClientConnection:(id)arg1 ;
@end
