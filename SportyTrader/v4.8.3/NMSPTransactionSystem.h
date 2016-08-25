/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 10:10:02 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/4C83B32D-E9D7-434B-B0B8-8A6C2C13527D/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NMSPTransactionSystemDelegate;
#import <SportyTrader/SportyTrader-Structs.h>
@class NSMutableArray, NMSPTransaction, NSString, NSURL, NSObject, NSError, AVAudioPlayer;

@interface NMSPTransactionSystem : NSObject {

	nmsp_Manager_Ref manager;
	nmsp_Calllog_Ref callog;
	nmsp_calllog_SessionEvent_Ref speechKitLog;
	nmsp_calllog_SessionEvent_Ref appLog;
	nmsp_NmasResource_Ref nmas_resource;
	nmsp_Resource_Ref nmsp_resource;
	NSMutableArray* activeTransactions;
	NMSPTransaction* currentUiTransaction;
	nmsp_audio_Recorder_Ref main_recorder;
	id current_trans;
	BOOL audioSystemInitialized;
	NSString* sessionID;
	BOOL isConnected;
	NSURL* audioDataListening;
	NSURL* audioDataDoneListening;
	NSURL* audioDataError;
	NSString* appVersion;
	NSString* appID;
	NSString* host;
	long long port;
	NSString* subscriberID;
	NSObject*<NMSPTransactionSystemDelegate> delegate;
	NSError* errListen;
	NSError* errDone;
	NSError* errError;
	AVAudioPlayer* earconStartPlayer;
	AVAudioPlayer* earconStopPlayer;
	AVAudioPlayer* earconCancelPlayer;
	BOOL ssl_enabled;
	BOOL destroying;
	int commandType;
	unsigned savedAudioCategory;
	char* _appKey;

}

@property (nonatomic,readonly) NSString * sessionID; 
@property (nonatomic,readonly) BOOL isConnected; 
@property (assign,nonatomic) BOOL destroying; 
+(id)currentUiTransaction;
+(void)setEarcon:(id)arg1 forType:(unsigned long long)arg2 ;
+(void)initializeInstanceWithID:(id)arg1 appVersion:(id)arg2 host:(id)arg3 port:(long long)arg4 useSSL:(BOOL)arg5 appKey:(const char*)arg6 appKeyLen:(int)arg7 subscriberId:(id)arg8 delegate:(id)arg9 cmdtype:(int)arg10 ;
+(BOOL)isCurrentTransaction:(id)arg1 ;
+(id)version;
+(void)destroy;
+(BOOL)isInitialized;
+(void)reconnect;
+(id)instance;
-(id)earconStartPlayer;
-(id)earconStopPlayer;
-(id)earconCancelPlayer;
-(void)restartRecorder;
-(void)destroyCommand:(nmsp_nmas_Command_Ref)arg1 ;
-(nmsp_nmas_Command_Ref)createCommand:(id)arg1 forTransaction:(id)arg2 withDictionary:(id)arg3 ;
-(nmsp_audio_Player_Ref)createAudioPlayer:(const /*function pointer*/void*)arg1 params:(const nmsp_Vector_Ref)arg2 userData:(void*)arg3 ;
-(nmsp_NmasResource_Ref)get_nmas_resource;
-(nmsp_nmas_Parameter_Ref)createAudioParameter:(id)arg1 ;
-(nmsp_audio_Recorder_Ref)getAudioRecorderWithSink:(void*)arg1 ;
-(float)energyLevel;
-(id)initWithID:(id)arg1 appVersion:(id)arg2 host:(id)arg3 port:(long long)arg4 useSSL:(BOOL)arg5 appKey:(const char*)arg6 appKeyLen:(int)arg7 subscriberId:(id)arg8 delegate:(id)arg9 cmdtype:(int)arg10 ;
-(void)setDestroying:(BOOL)arg1 ;
-(void)disconnectManager;
-(void)connectManagerForSelectedServer;
-(id)currentUiTransaction;
-(void)setEarcon:(id)arg1 forType:(unsigned long long)arg2 ;
-(void)initAudioSession;
-(void)createSpeechKitRecorder;
-(nmsp_audio_Recorder_Ref)createAudioRecorderUsingSink:(nmsp_general_AudioSink*)arg1 callback:(const /*function pointer*/void*)arg2 recordTime:(long long)arg3 params:(const nmsp_Vector_Ref)arg4 userData:(void*)arg5 ;
-(void)setCmdType:(int)arg1 ;
-(void)logToServer:(id)arg1 withValue:(id)arg2 ;
-(id)createForegroundTransaction:(id)arg1 ;
-(id)createBackgroundTransaction:(id)arg1 ;
-(void)deregister:(id)arg1 ;
-(void)handleManagerEvent:(int)arg1 forSession:(const char*)arg2 ;
-(id)getTransaction;
-(void)handleNmasResourceEvent:(int)arg1 ;
-(BOOL)destroying;
-(void)dealloc;
-(NSString *)sessionID;
-(id)current;
-(int)commandType;
-(void)releaseAudioSession;
-(BOOL)isConnected;
@end

