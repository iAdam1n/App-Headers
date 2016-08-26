/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:58:14 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/0CF72264-5488-4FD5-B700-EF786D177983/BubbleMania.app/BubbleMania
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray, NSMutableDictionary;

@interface FBSessionLoginStrategyParams : NSObject {

	BOOL _tryIntegratedAuth;
	BOOL _tryFBAppAuth;
	BOOL _trySafariAuth;
	BOOL _tryFallback;
	BOOL _isReauthorize;
	BOOL _canFetchAppSettings;
	unsigned long long _defaultAudience;
	NSArray* _permissions;
	NSMutableDictionary* _webParams;

}

@property (assign) BOOL tryIntegratedAuth;                                 //@synthesize tryIntegratedAuth=_tryIntegratedAuth - In the implementation block
@property (assign) BOOL tryFBAppAuth;                                      //@synthesize tryFBAppAuth=_tryFBAppAuth - In the implementation block
@property (assign) BOOL trySafariAuth;                                     //@synthesize trySafariAuth=_trySafariAuth - In the implementation block
@property (assign) BOOL tryFallback;                                       //@synthesize tryFallback=_tryFallback - In the implementation block
@property (assign) BOOL isReauthorize;                                     //@synthesize isReauthorize=_isReauthorize - In the implementation block
@property (assign) unsigned long long defaultAudience;                     //@synthesize defaultAudience=_defaultAudience - In the implementation block
@property (nonatomic,retain) NSArray * permissions;                        //@synthesize permissions=_permissions - In the implementation block
@property (assign) BOOL canFetchAppSettings;                               //@synthesize canFetchAppSettings=_canFetchAppSettings - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * webParams;              //@synthesize webParams=_webParams - In the implementation block
-(void)setTryIntegratedAuth:(BOOL)arg1 ;
-(void)setTryFBAppAuth:(BOOL)arg1 ;
-(void)setTrySafariAuth:(BOOL)arg1 ;
-(void)setTryFallback:(BOOL)arg1 ;
-(void)setIsReauthorize:(BOOL)arg1 ;
-(void)setDefaultAudience:(unsigned long long)arg1 ;
-(void)setCanFetchAppSettings:(BOOL)arg1 ;
-(void)setWebParams:(NSMutableDictionary *)arg1 ;
-(BOOL)tryFBAppAuth;
-(BOOL)tryFallback;
-(BOOL)tryIntegratedAuth;
-(BOOL)isReauthorize;
-(unsigned long long)defaultAudience;
-(BOOL)canFetchAppSettings;
-(BOOL)trySafariAuth;
-(NSMutableDictionary *)webParams;
-(void)dealloc;
-(NSArray *)permissions;
-(void)setPermissions:(NSArray *)arg1 ;
@end
