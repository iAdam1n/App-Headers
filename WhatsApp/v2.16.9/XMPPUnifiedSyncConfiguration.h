/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:47:05 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/342EE397-EC3B-4D13-968C-80EF1D13592D/WhatsApp.app/WhatsApp
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString, NSArray, NSDictionary;

@interface XMPPUnifiedSyncConfiguration : NSObject {

	NSMutableDictionary* _protocolParams;
	BOOL _syncStatus;
	BOOL _syncContacts;
	BOOL _syncCapabilities;
	NSString* _sid;
	unsigned long long _batchSize;
	double _timeout;
	/*^block*/id _completionHandler;
	NSArray* _userRequests;

}

@property (nonatomic,readonly) BOOL syncStatus;                            //@synthesize syncStatus=_syncStatus - In the implementation block
@property (nonatomic,readonly) BOOL syncContacts;                          //@synthesize syncContacts=_syncContacts - In the implementation block
@property (nonatomic,readonly) BOOL syncCapabilities;                      //@synthesize syncCapabilities=_syncCapabilities - In the implementation block
@property (nonatomic,readonly) NSDictionary * protocolParams; 
@property (nonatomic,copy) NSString * sid;                                 //@synthesize sid=_sid - In the implementation block
@property (assign,nonatomic) unsigned long long batchSize;                 //@synthesize batchSize=_batchSize - In the implementation block
@property (assign,nonatomic) double timeout;                               //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,readonly) id completionHandler;                       //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSArray * userRequests;                         //@synthesize userRequests=_userRequests - In the implementation block
-(NSString *)sid;
-(void)enableContactSyncWithContext:(unsigned long long)arg1 mode:(unsigned long long)arg2 ;
-(void)enableStatusSync;
-(void)enableCapabilitiesSync;
-(void)setUserRequests:(NSArray *)arg1 ;
-(void)setSid:(NSString *)arg1 ;
-(NSDictionary *)protocolParams;
-(BOOL)syncContacts;
-(BOOL)syncCapabilities;
-(NSArray *)userRequests;
-(id)completionHandler;
-(id)initWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setTimeout:(double)arg1 ;
-(BOOL)syncStatus;
-(unsigned long long)batchSize;
-(void)setBatchSize:(unsigned long long)arg1 ;
-(double)timeout;
@end

