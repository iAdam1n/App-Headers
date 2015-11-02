/*
* This header is generated by classdump-dyld 0.7
* on Friday, October 30, 2015 at 11:57:00 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8F19A127-6676-4AF1-9C62-4FB96FF45C56/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class PSPDFThreadSafeMutableDictionary, NSOperationQueue;

@interface SLKPrefManager : NSObject {

	PSPDFThreadSafeMutableDictionary* _teamPrefCache;
	PSPDFThreadSafeMutableDictionary* _userPrefCache;
	NSOperationQueue* _workQueue;

}

@property (nonatomic,retain) PSPDFThreadSafeMutableDictionary * teamPrefCache;              //@synthesize teamPrefCache=_teamPrefCache - In the implementation block
@property (nonatomic,retain) PSPDFThreadSafeMutableDictionary * userPrefCache;              //@synthesize userPrefCache=_userPrefCache - In the implementation block
@property (nonatomic,retain) NSOperationQueue * workQueue;                                  //@synthesize workQueue=_workQueue - In the implementation block
+(id)prefForKey:(id)arg1 prefType:(unsigned long long)arg2 ;
+(void)setPrefValue:(id)arg1 forKey:(id)arg2 prefType:(unsigned long long)arg3 completion:(/*^block*/id)arg4 ;
+(id)prefCacheForTypeFromDisk:(unsigned long long)arg1 ;
+(void)processPref:(id)arg1 forKey:(id)arg2 ;
+(void)savePrefsForType:(unsigned long long)arg1 ;
+(void)setPrefValue:(id)arg1 forKey:(id)arg2 prefType:(unsigned long long)arg3 shouldSave:(BOOL)arg4 ;
+(void)setUserPrefs:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)setPushMentionAlert:(BOOL)arg1 imAlert:(BOOL)arg2 everythingAlert:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
+(void)updatePrefs:(id)arg1 prefType:(unsigned long long)arg2 ;
+(id)sharedManager;
-(void)resetPrefs;
-(PSPDFThreadSafeMutableDictionary *)teamPrefCache;
-(PSPDFThreadSafeMutableDictionary *)userPrefCache;
-(id)cacheForPrefType:(unsigned long long)arg1 ;
-(void)setTeamPrefCache:(PSPDFThreadSafeMutableDictionary *)arg1 ;
-(void)setUserPrefCache:(PSPDFThreadSafeMutableDictionary *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setWorkQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)workQueue;
@end
