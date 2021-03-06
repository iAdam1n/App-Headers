/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:46:35 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/D20B482D-7A4B-420E-BEFA-D4B2B5C94752/Telegram.app/Telegram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Telegram/MTTransport.h>
#import <Telegram/MTHttpWorkerBehaviourDelegate.h>
#import <Telegram/MTHttpWorkerDelegate.h>
#import <Telegram/MTContextChangeListener.h>

@class MTDatacenterAddress, MTHttpWorkerBehaviour, NSMutableArray, MTTimer, NSString;

@interface MTHttpTransport : MTTransport <MTHttpWorkerBehaviourDelegate, MTHttpWorkerDelegate, MTContextChangeListener> {

	MTDatacenterAddress* _address;
	BOOL _willRequestTransactionOnNextQueuePass;
	MTHttpWorkerBehaviour* _workerBehaviour;
	NSMutableArray* _workers;
	BOOL _isNetworkAvailable;
	BOOL _isConnected;
	long long _currentActualizationPingId;
	long long _currentActualizationPingMessageId;
	MTTimer* _connectingStateTimer;
	MTTimer* _connectionWatchdogTimer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)httpTransportQueue;
-(void)contextDatacenterAuthInfoUpdated:(id)arg1 datacenterId:(long long)arg2 authInfo:(id)arg3 ;
-(void)mtProtoDidChangeSession:(id)arg1 ;
-(void)mtProtoServerDidChangeSession:(id)arg1 firstValidMessageId:(long long)arg2 otherValidMessageIds:(id)arg3 ;
-(void)mtProto:(id)arg1 receivedMessage:(id)arg2 ;
-(void)mtProto:(id)arg1 messageDeliveryFailed:(long long)arg2 ;
-(void)_networkAvailabilityChanged:(BOOL)arg1 ;
-(id)initWithDelegate:(id)arg1 context:(id)arg2 datacenterId:(long long)arg3 address:(id)arg4 ;
-(void)setDelegateNeedsTransaction;
-(void)activeTransactionIds:(/*^block*/id)arg1 ;
-(void)_requestTransactionFromDelegate;
-(void)stopConnectionWatchdogTimer;
-(void)httpWorker:(id)arg1 completedWithData:(id)arg2 ;
-(void)httpWorkerConnected:(id)arg1 ;
-(void)httpWorkerFailed:(id)arg1 ;
-(void)connectingStateTimerEvent;
-(void)connectionWatchdogTimerEvent;
-(void)stopConnectingStateTimer;
-(BOOL)_removeHttpWorker:(id)arg1 ;
-(void)transactionIsValid:(id)arg1 ;
-(void)startConnectingStateTimerIfNotRunning;
-(void)startConnectionWatchdogTimerIfNotRunning;
-(void)httpWorkerBehaviourAllowsNewWorkerCreation:(id)arg1 ;
-(void)dealloc;
-(void)reset;
-(void)stop;
-(void)cleanup;
-(void)updateConnectionState;
@end

