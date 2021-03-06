/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 5, 2015 at 2:22:21 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/A9F884EB-2F57-4460-BC65-26F233627B1B/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSMutableSet, NSSet, PTHTweetbotAccountData;

@interface PTHTweetbotAccountDataHashtagFinder : NSObject {

	NSMutableSet* _userHashtags;
	NSSet* _loadedHashtags;
	PTHTweetbotAccountData* _accountData;

}

@property (nonatomic,__weak,readonly) PTHTweetbotAccountData * accountData;              //@synthesize accountData=_accountData - In the implementation block
-(PTHTweetbotAccountData *)accountData;
-(void)dispatchFindHashtags:(id)arg1 limit:(unsigned long long)arg2 block:(/*^block*/id)arg3 ;
-(id)initWithAccountData:(id)arg1 ;
-(id)setup:(id)arg1 userVersion:(long long)arg2 ;
-(id)verify:(id)arg1 ;
-(void)_statusWasPosted:(id)arg1 ;
-(void)_messageWasPosted:(id)arg1 ;
-(void)_addHashtagsFromEntities:(id)arg1 ;
-(void)dealloc;
-(id)init;
@end

