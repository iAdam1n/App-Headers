/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:30 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNSyncProtocolUserIdProviding, MNSyncProtocolPerUserValueStoring, MNSPDataStoreListening;
@class NSString;

@interface MNSPDataStore : NSObject {

	long long _lastSequenceId;
	id<MNSyncProtocolUserIdProviding> _spUserIdProvider;
	id<MNSyncProtocolPerUserValueStoring> _valueStore;
	id<MNSPDataStoreListening> _listener;

}

@property (nonatomic,copy) NSString * syncToken; 
@property (assign,nonatomic) long long lastSequenceId; 
-(BOOL)isSyncStateValid;
-(void)resetWithReason:(long long)arg1 ;
-(long long)lastSequenceId;
-(void)persistSequenceId:(long long)arg1 ;
-(void)setLastSequenceId:(long long)arg1 ;
-(id)initWithValueStore:(id)arg1 spUserIdProvider:(id)arg2 listener:(id)arg3 ;
-(void)clearPersistedSequenceId;
-(void)_announceUpdatedStateIfValid;
-(void)_persistSequenceId:(long long)arg1 ;
-(NSString *)syncToken;
-(void)setSyncToken:(NSString *)arg1 ;
@end
