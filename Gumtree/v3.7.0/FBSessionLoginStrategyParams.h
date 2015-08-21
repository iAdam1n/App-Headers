/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:28:00 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
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
-(void)setDefaultAudience:(unsigned long long)arg1 ;
-(unsigned long long)defaultAudience;
-(void)setTryIntegratedAuth:(BOOL)arg1 ;
-(void)setTryFBAppAuth:(BOOL)arg1 ;
-(void)setTrySafariAuth:(BOOL)arg1 ;
-(void)setTryFallback:(BOOL)arg1 ;
-(void)setIsReauthorize:(BOOL)arg1 ;
-(void)setCanFetchAppSettings:(BOOL)arg1 ;
-(void)setWebParams:(NSMutableDictionary *)arg1 ;
-(BOOL)tryFBAppAuth;
-(NSMutableDictionary *)webParams;
-(BOOL)tryFallback;
-(BOOL)tryIntegratedAuth;
-(BOOL)trySafariAuth;
-(BOOL)isReauthorize;
-(BOOL)canFetchAppSettings;
-(void)dealloc;
-(NSArray *)permissions;
-(void)setPermissions:(NSArray *)arg1 ;
@end

