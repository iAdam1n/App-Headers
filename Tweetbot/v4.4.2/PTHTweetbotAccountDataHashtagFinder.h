/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:52:56 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/D57A2E05-BD0B-4E00-BA11-E75114DE004A/Tweetbot.app/Tweetbot
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
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
