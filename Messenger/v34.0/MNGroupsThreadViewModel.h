/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:40:59 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/E282ADAB-AF96-4184-9890-B5E58B4BDDD0/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class FBMIndexedUserSet, FBMThread;

@interface MNGroupsThreadViewModel : NSObject {

	FBMIndexedUserSet* _users;
	FBMThread* _legacyThread;

}

@property (nonatomic,copy,readonly) FBMIndexedUserSet * users;               //@synthesize users=_users - In the implementation block
@property (nonatomic,retain,readonly) FBMThread * legacyThread;              //@synthesize legacyThread=_legacyThread - In the implementation block
-(FBMThread *)legacyThread;
-(id)initWithUsers:(id)arg1 legacyThread:(id)arg2 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(FBMIndexedUserSet *)users;
@end

