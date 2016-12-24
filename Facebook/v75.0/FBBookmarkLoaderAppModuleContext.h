/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:10 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBUserSession;

@interface FBBookmarkLoaderAppModuleContext : NSObject {

	FBUserSession* _session;

}
+(void)setBookmarkModifierBlock:(/*^block*/id)arg1 ;
+(void)setHelpCenterURLOverride:(id)arg1 ;
-(id)_helpCenterURL;
-(id)loadHardcodedSettingsForBookmarksModelSection:(id)arg1 withAddBookmarkBlock:(/*^block*/id)arg2 ;
-(id)_defaultProfileBookmarkWithAddBookmarkBlock:(/*^block*/id)arg1 ;
-(id)_hardCodedbookmarkDictionariesWithShowReportProblem:(BOOL)arg1 ;
-(id)_modifyHardcodedBookmarksForWorkUser:(id)arg1 expectPolicyBookmark:(BOOL)arg2 ;
-(id)_loadBookmarkWithDictionary:(id)arg1 sectionID:(id)arg2 addBookmarkBlock:(/*^block*/id)arg3 ;
-(BOOL)_shouldEnableShareSettings;
-(id)_externalShareSettingsBookmarkDictionary;
-(BOOL)_shouldEnableInviteFlow;
-(id)_mentionsInviteBookmarkDictionary;
-(BOOL)_shouldEnableCommentModeration;
-(id)_mentionsCommentModerationDictionary;
-(id)_helpCenterBookmarkDictionary;
-(id)_termsAndPoliciesBookmarkDictionary;
-(id)_reportProblemBookmarkDictionary;
-(id)_logoutBookmarkDictionary;
-(id)_internalSettingsBookmarkDictionary;
-(id)_metaSettingsBookmarkForSection:(id)arg1 ;
-(id)_privacySettingsBookmarkDictionary;
-(id)_codeGeneratorBookmarkDictionary;
-(id)_settingsBookmarkDictionary;
-(id)_feedSourcesBookmarkDictionary;
-(id)_activityLogBookmarkDictionary;
-(BOOL)_shouldEnableChatSettings;
-(id)_chatSettingsBookmarkDictionary;
-(BOOL)_shouldEnablePaymentsSettings;
-(id)_paymentsSettingsBookmarkDictionary;
-(id)_mainHelpCenterBookmarkDictionary;
-(id)_supportInboxBookmarkDictionary;
-(id)_mentionsBookmarkDictionaries;
-(id)_supportInboxURL;
-(id)_supportInboxMenuItemIdentifier;
-(id)loadDefaultBookmarkSectionsWithAddBookmarkBlock:(/*^block*/id)arg1 ;
-(id)loadHardCodedBookmarksWithAddBookmarkBlock:(/*^block*/id)arg1 ;
-(id)_atWorkGroupsTabBookmarkDictionary;
-(id)initWithSession:(id)arg1 ;
@end
