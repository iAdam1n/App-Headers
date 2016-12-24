/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:39 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol SKPAudioSessionManagerClient;
@class NSString;

@interface SKPAudioSessionClientSettings : NSObject {

	BOOL _isUsingCallKit;
	NSString* _category;
	unsigned long long _options;
	NSString* _mode;
	id<SKPAudioSessionManagerClient> _client;
	/*^block*/id _interruptionBeganBlock;
	/*^block*/id _interruptionEndedBlock;

}

@property (nonatomic,__weak,readonly) id<SKPAudioSessionManagerClient> client;              //@synthesize client=_client - In the implementation block
@property (nonatomic,copy) id interruptionBeganBlock;                                       //@synthesize interruptionBeganBlock=_interruptionBeganBlock - In the implementation block
@property (nonatomic,copy) id interruptionEndedBlock;                                       //@synthesize interruptionEndedBlock=_interruptionEndedBlock - In the implementation block
@property (nonatomic,copy,readonly) NSString * category;                                    //@synthesize category=_category - In the implementation block
@property (nonatomic,readonly) unsigned long long options;                                  //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSString * mode;                                        //@synthesize mode=_mode - In the implementation block
@property (nonatomic,readonly) BOOL isUsingCallKit;                                         //@synthesize isUsingCallKit=_isUsingCallKit - In the implementation block
-(BOOL)isUsingCallKit;
-(id)initWithCategory:(id)arg1 options:(unsigned long long)arg2 mode:(id)arg3 client:(id)arg4 ;
-(id)logDescription;
-(id)initWithCategory:(id)arg1 options:(unsigned long long)arg2 mode:(id)arg3 client:(id)arg4 isUsingCallKit:(BOOL)arg5 ;
-(id)interruptionBeganBlock;
-(void)setInterruptionBeganBlock:(id)arg1 ;
-(id)interruptionEndedBlock;
-(void)setInterruptionEndedBlock:(id)arg1 ;
-(id)initWithCategory:(id)arg1 options:(unsigned long long)arg2 mode:(id)arg3 isUsingCallKit:(BOOL)arg4 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)debugDescription;
-(id)copy;
-(NSString *)category;
-(unsigned long long)options;
-(NSString *)mode;
-(id<SKPAudioSessionManagerClient>)client;
@end
