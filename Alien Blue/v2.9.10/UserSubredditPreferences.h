/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:41:46 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/91D74E3C-0E85-4CEF-8E44-3072C9AFF7E4/AlienBlue.app/AlienBlue
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSMutableArray, NSString, NSDate, SubredditFolder;

@interface UserSubredditPreferences : NSObject <NSCoding> {

	BOOL _i_shouldSyncToCloud;
	NSMutableArray* _subredditFolders;
	NSString* _username;
	NSDate* _lastModifiedDate;
	NSDate* _lastSyncedDate;
	NSMutableArray* _changeLog;
	SubredditFolder* _i_manuallySubscribedFolder;
	SubredditFolder* _i_manuallyUnsubscribedFolder;
	SubredditFolder* _i_myRedditsSectionFolder;
	SubredditFolder* _i_discoverSectionFolder;
	UserSubredditPreferences* _i_sharedSubredditPreferences;

}

@property (retain) NSMutableArray * subredditFolders;                                    //@synthesize subredditFolders=_subredditFolders - In the implementation block
@property (retain) NSString * username;                                                  //@synthesize username=_username - In the implementation block
@property (retain) NSDate * lastModifiedDate;                                            //@synthesize lastModifiedDate=_lastModifiedDate - In the implementation block
@property (retain) NSDate * lastSyncedDate;                                              //@synthesize lastSyncedDate=_lastSyncedDate - In the implementation block
@property (retain) NSMutableArray * changeLog;                                           //@synthesize changeLog=_changeLog - In the implementation block
@property (retain) SubredditFolder * i_manuallySubscribedFolder;                         //@synthesize i_manuallySubscribedFolder=_i_manuallySubscribedFolder - In the implementation block
@property (retain) SubredditFolder * i_manuallyUnsubscribedFolder;                       //@synthesize i_manuallyUnsubscribedFolder=_i_manuallyUnsubscribedFolder - In the implementation block
@property (readonly) unsigned long long totalSubredditCount; 
@property (assign) BOOL i_shouldSyncToCloud;                                             //@synthesize i_shouldSyncToCloud=_i_shouldSyncToCloud - In the implementation block
@property (retain) SubredditFolder * i_myRedditsSectionFolder;                           //@synthesize i_myRedditsSectionFolder=_i_myRedditsSectionFolder - In the implementation block
@property (retain) SubredditFolder * i_discoverSectionFolder;                            //@synthesize i_discoverSectionFolder=_i_discoverSectionFolder - In the implementation block
@property (assign) UserSubredditPreferences * i_sharedSubredditPreferences;              //@synthesize i_sharedSubredditPreferences=_i_sharedSubredditPreferences - In the implementation block
+(id)defaultSubredditsFolder;
+(id)prefKey;
+(id)subredditPreferencesFromRawDefaultsData:(id)arg1 ;
+(id)rawDefaultsDataForSubredditPreferences:(id)arg1 ;
+(id)subredditPreferencesForAuthenticatedUser;
-(id)folderForSubscribedReddits;
-(id)folderContainingSubreddit:(id)arg1 ;
-(void)removeSubredditFromAllFolders:(id)arg1 ;
-(void)sortAllFolders;
-(void)syncServerRetrievedSubredditsToSubscribed:(id)arg1 ;
-(NSMutableArray *)subredditFolders;
-(void)setChangeLog:(NSMutableArray *)arg1 ;
-(void)setI_manuallySubscribedFolder:(SubredditFolder *)arg1 ;
-(void)setI_manuallyUnsubscribedFolder:(SubredditFolder *)arg1 ;
-(void)setI_myRedditsSectionFolder:(SubredditFolder *)arg1 ;
-(void)setI_discoverSectionFolder:(SubredditFolder *)arg1 ;
-(void)setSubredditFolders:(NSMutableArray *)arg1 ;
-(void)importLegacyCasualSubreddits;
-(id)folderForCasualReddits;
-(SubredditFolder *)i_myRedditsSectionFolder;
-(SubredditFolder *)i_discoverSectionFolder;
-(NSMutableArray *)changeLog;
-(void)appendToChangeLog:(id)arg1 ;
-(SubredditFolder *)i_manuallySubscribedFolder;
-(SubredditFolder *)i_manuallyUnsubscribedFolder;
-(void)recordChange:(int)arg1 subreddit:(id)arg2 folder:(id)arg3 ;
-(void)addSubreddit:(id)arg1 toFolder:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)removeSubreddit:(id)arg1 fromFolder:(id)arg2 ;
-(void)recommendSyncToCloud;
-(void)addSubredditFolder:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(void)recordReorderOfSubreddit:(id)arg1 folder:(id)arg2 rowIndex:(unsigned long long)arg3 ;
-(NSDate *)lastSyncedDate;
-(void)setLastSyncedDate:(NSDate *)arg1 ;
-(void)setI_shouldSyncToCloud:(BOOL)arg1 ;
-(unsigned long long)totalSubredditCount;
-(BOOL)i_shouldSyncToCloud;
-(id)folderForMyRedditsSection;
-(id)folderForDiscoverSection;
-(id)folderMatchingIdent:(id)arg1 ;
-(void)addSubreddit:(id)arg1 toFolder:(id)arg2 ;
-(id)foldersContainingSubreddit:(id)arg1 ;
-(id)createSubredditFolderWithTitle:(id)arg1 ;
-(void)renameSubredditFolder:(id)arg1 toTitle:(id)arg2 ;
-(void)removeSubredditFolder:(id)arg1 ;
-(void)didSyncToCloud;
-(void)checkSyncThreshold;
-(UserSubredditPreferences *)i_sharedSubredditPreferences;
-(void)setI_sharedSubredditPreferences:(UserSubredditPreferences *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)lastModifiedDate;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
-(void)save;
-(BOOL)shouldSyncToCloud;
-(void)setLastModifiedDate:(NSDate *)arg1 ;
@end

