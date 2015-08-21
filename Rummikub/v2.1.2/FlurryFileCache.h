/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:40:34 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/C946ECFA-6A29-41D3-8F69-02583A041494/Rummikub.app/Rummikub
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSString;

@interface FlurryFileCache : NSObject {

	NSString* _apiKey;
	NSString* _agentVersion;

}

@property (nonatomic,copy) NSString * apiKey;                    //@synthesize apiKey=_apiKey - In the implementation block
@property (nonatomic,copy) NSString * agentVersion;              //@synthesize agentVersion=_agentVersion - In the implementation block
+(id)createInstanceWithApiKey:(id)arg1 agentVersion:(id)arg2 ;
+(id)instance;
-(id)initWithApiKey:(id)arg1 agentVersion:(id)arg2 ;
-(void)setAgentVersion:(NSString *)arg1 ;
-(id)createDirectoryPath;
-(id)createFilePath:(id)arg1 forCurentAgentVersion:(BOOL)arg2 ;
-(id)save:(id)arg1 prefix:(id)arg2 ;
-(id)save:(id)arg1 prefix:(id)arg2 forCurentAgentVersion:(BOOL)arg3 ;
-(id)get:(id)arg1 ;
-(id)get:(id)arg1 forCurentAgentVersion:(BOOL)arg2 ;
-(char)remove:(id)arg1 forCurentAgentVersion:(BOOL)arg2 ;
-(char)removeCache;
-(NSString *)agentVersion;
-(void)dealloc;
-(NSString *)apiKey;
-(void)setApiKey:(NSString *)arg1 ;
-(char)remove:(id)arg1 ;
@end

